
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> GlobalInterfaceConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalInterfaceConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> GlobalInterfaceConfiguration::clone_ptr() const
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
    :
    interface_configuration(this, {"active", "interface_name"})
{

    yang_name = "interface-configurations"; yang_parent_name = "Cisco-IOS-XR-ifmgr-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

InterfaceConfigurations::~InterfaceConfigurations()
{
}

bool InterfaceConfigurations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_configuration.len(); index++)
    {
        if(interface_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::has_operation() const
{
    for (std::size_t index=0; index<interface_configuration.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-configuration")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration>();
        ent_->parent = this;
        interface_configuration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_configuration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::clone_ptr() const
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
    vrf{YType::str, "Cisco-IOS-XR-infra-rsi-cfg:vrf"},
    laser_squelch{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:laser-squelch"},
    holdoff_time{YType::uint32, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:holdoff-time"},
    perf_mon_disable{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:perf-mon-disable"},
    maintenance_embargo{YType::boolean, "Cisco-IOS-XR-dwdm-ui-cfg:maintenance-embargo"},
    track_name{YType::str, "Cisco-IOS-XR-manageability-object-tracking-cfg:track-name"},
    fast_shutdown{YType::empty, "Cisco-IOS-XR-mdrv-lib-cfg:fast-shutdown"},
    mac_addr{YType::str, "Cisco-IOS-XR-mdrv-lib-cfg:mac-addr"}
        ,
    dampening(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>())
    , mtus(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus>())
    , encapsulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Encapsulation>())
    , cisco_ios_xr_ppp_ma_fsm_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp>())
    , afs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>())
    , pseudowire_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>())
    , pseudowire_iw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>())
    , bvi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bvi>())
    , l2_transport(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport>())
    , cisco_ios_xr_ppp_ma_lcp_cfg_ppp_(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp>())
    , statistics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>())
    , cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp>())
    , pppoe(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>())
    , ethernet(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>())
    , span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>())
    , frequency_synchronization(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization>())
    , nve(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>())
    , performance_management(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>())
    , pbr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>())
    , tunnel_ip(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>())
    , optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>())
    , loopbacks(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks>())
    , ptp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp>())
    , subscriber(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>())
    , vlan_sub_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration>())
    , ethernet_service(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService>())
    , ethernet_bng(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng>())
    , mac_accounting(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>())
    , ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures>())
    , carrier_delay(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CarrierDelay>())
    , vlan_trunk_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration>())
    , ssrp_session(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>())
    , cdp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>())
    , nv_satellite_access(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess>())
    , nv_satellite_fabric_link(nullptr) // presence node
    , nv_satellite_fabric_network(nullptr) // presence node
    , dwdm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>())
    , qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>())
    , cisco_ios_xr_ppp_ma_cfg_ppp___(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp>())
    , lldp(nullptr) // presence node
    , dot1x_interface(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface>())
    , ipv4_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network>())
    , ipv4_network_forwarding(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding>())
    , aaa_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>())
    , ipv6_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter>())
    , es_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter>())
    , ipv4_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter>())
    , ipv4_flow_spec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec>())
    , ipv6_flow_spec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec>())
    , wanphy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Wanphy>())
    , ipv6_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>())
    , mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls>())
    , tunnel_te_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes>())
    , transport_profile_tunnel(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel>())
    , mte_tunnel_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes>())
    , otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>())
    , net_flow(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>())
    , bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd>())
    , bundle(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle>())
    , lacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp>())
    , bundle_member(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember>())
    , mlacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>())
    , macsec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>())
    , ipv6_neighbor(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>())
    , service_policies(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>())
    , portmode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Portmode>())
    , cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp>())
    , dagrs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>())
    , ipv4arp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4arp>())
{
    dampening->parent = this;
    mtus->parent = this;
    encapsulation->parent = this;
    cisco_ios_xr_ppp_ma_fsm_cfg_ppp->parent = this;
    afs->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;
    bvi->parent = this;
    l2_transport->parent = this;
    cisco_ios_xr_ppp_ma_lcp_cfg_ppp_->parent = this;
    statistics->parent = this;
    cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__->parent = this;
    pppoe->parent = this;
    ethernet->parent = this;
    span_monitor_sessions->parent = this;
    frequency_synchronization->parent = this;
    nve->parent = this;
    performance_management->parent = this;
    pbr->parent = this;
    tunnel_ip->parent = this;
    optics->parent = this;
    loopbacks->parent = this;
    ptp->parent = this;
    subscriber->parent = this;
    vlan_sub_configuration->parent = this;
    ethernet_service->parent = this;
    ethernet_bng->parent = this;
    mac_accounting->parent = this;
    ethernet_features->parent = this;
    carrier_delay->parent = this;
    vlan_trunk_configuration->parent = this;
    ssrp_session->parent = this;
    cdp->parent = this;
    nv_satellite_access->parent = this;
    dwdm->parent = this;
    qos->parent = this;
    cisco_ios_xr_ppp_ma_cfg_ppp___->parent = this;
    dot1x_interface->parent = this;
    ipv4_network->parent = this;
    ipv4_network_forwarding->parent = this;
    aaa_table->parent = this;
    ipv6_packet_filter->parent = this;
    es_packet_filter->parent = this;
    ipv4_packet_filter->parent = this;
    ipv4_flow_spec->parent = this;
    ipv6_flow_spec->parent = this;
    wanphy->parent = this;
    ipv6_network->parent = this;
    mpls->parent = this;
    tunnel_te_attributes->parent = this;
    transport_profile_tunnel->parent = this;
    mte_tunnel_attributes->parent = this;
    otu->parent = this;
    net_flow->parent = this;
    bfd->parent = this;
    bundle->parent = this;
    lacp->parent = this;
    bundle_member->parent = this;
    mlacp->parent = this;
    macsec->parent = this;
    ipv6_neighbor->parent = this;
    service_policies->parent = this;
    portmode->parent = this;
    cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____->parent = this;
    dagrs->parent = this;
    ipv4arp->parent = this;

    yang_name = "interface-configuration"; yang_parent_name = "interface-configurations"; is_top_level_class = false; has_list_ancestor = false; 
}

InterfaceConfigurations::InterfaceConfiguration::~InterfaceConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return active.is_set
	|| interface_name.is_set
	|| shutdown.is_set
	|| interface_virtual.is_set
	|| secondary_admin_state.is_set
	|| interface_mode_non_physical.is_set
	|| bandwidth.is_set
	|| link_status.is_set
	|| description.is_set
	|| vrf.is_set
	|| laser_squelch.is_set
	|| holdoff_time.is_set
	|| perf_mon_disable.is_set
	|| maintenance_embargo.is_set
	|| track_name.is_set
	|| fast_shutdown.is_set
	|| mac_addr.is_set
	|| (dampening !=  nullptr && dampening->has_data())
	|| (mtus !=  nullptr && mtus->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (bvi !=  nullptr && bvi->has_data())
	|| (l2_transport !=  nullptr && l2_transport->has_data())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp_ !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp_->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__ !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data())
	|| (nve !=  nullptr && nve->has_data())
	|| (performance_management !=  nullptr && performance_management->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_data())
	|| (optics !=  nullptr && optics->has_data())
	|| (loopbacks !=  nullptr && loopbacks->has_data())
	|| (ptp !=  nullptr && ptp->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_data())
	|| (ethernet_service !=  nullptr && ethernet_service->has_data())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_data())
	|| (mac_accounting !=  nullptr && mac_accounting->has_data())
	|| (ethernet_features !=  nullptr && ethernet_features->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_data())
	|| (ssrp_session !=  nullptr && ssrp_session->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_data())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_data())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_data())
	|| (dwdm !=  nullptr && dwdm->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp___ !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp___->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (dot1x_interface !=  nullptr && dot1x_interface->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_data())
	|| (aaa_table !=  nullptr && aaa_table->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv4_flow_spec !=  nullptr && ipv4_flow_spec->has_data())
	|| (ipv6_flow_spec !=  nullptr && ipv6_flow_spec->has_data())
	|| (wanphy !=  nullptr && wanphy->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_data())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_data())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (net_flow !=  nullptr && net_flow->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bundle !=  nullptr && bundle->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (bundle_member !=  nullptr && bundle_member->has_data())
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (service_policies !=  nullptr && service_policies->has_data())
	|| (portmode !=  nullptr && portmode->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____ !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____->has_data())
	|| (dagrs !=  nullptr && dagrs->has_data())
	|| (ipv4arp !=  nullptr && ipv4arp->has_data());
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
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(laser_squelch.yfilter)
	|| ydk::is_set(holdoff_time.yfilter)
	|| ydk::is_set(perf_mon_disable.yfilter)
	|| ydk::is_set(maintenance_embargo.yfilter)
	|| ydk::is_set(track_name.yfilter)
	|| ydk::is_set(fast_shutdown.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (mtus !=  nullptr && mtus->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (bvi !=  nullptr && bvi->has_operation())
	|| (l2_transport !=  nullptr && l2_transport->has_operation())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp_ !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp_->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__ !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation())
	|| (nve !=  nullptr && nve->has_operation())
	|| (performance_management !=  nullptr && performance_management->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_operation())
	|| (optics !=  nullptr && optics->has_operation())
	|| (loopbacks !=  nullptr && loopbacks->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_operation())
	|| (ethernet_service !=  nullptr && ethernet_service->has_operation())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_operation())
	|| (mac_accounting !=  nullptr && mac_accounting->has_operation())
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_operation())
	|| (ssrp_session !=  nullptr && ssrp_session->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_operation())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_operation())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_operation())
	|| (dwdm !=  nullptr && dwdm->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp___ !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp___->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (dot1x_interface !=  nullptr && dot1x_interface->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_operation())
	|| (aaa_table !=  nullptr && aaa_table->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv4_flow_spec !=  nullptr && ipv4_flow_spec->has_operation())
	|| (ipv6_flow_spec !=  nullptr && ipv6_flow_spec->has_operation())
	|| (wanphy !=  nullptr && wanphy->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_operation())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_operation())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (net_flow !=  nullptr && net_flow->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (bundle_member !=  nullptr && bundle_member->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (service_policies !=  nullptr && service_policies->has_operation())
	|| (portmode !=  nullptr && portmode->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____ !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____->has_operation())
	|| (dagrs !=  nullptr && dagrs->has_operation())
	|| (ipv4arp !=  nullptr && ipv4arp->has_operation());
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
    path_buffer << "interface-configuration";
    ADD_KEY_TOKEN(active, "active");
    ADD_KEY_TOKEN(interface_name, "interface-name");
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
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (laser_squelch.is_set || is_set(laser_squelch.yfilter)) leaf_name_data.push_back(laser_squelch.get_name_leafdata());
    if (holdoff_time.is_set || is_set(holdoff_time.yfilter)) leaf_name_data.push_back(holdoff_time.get_name_leafdata());
    if (perf_mon_disable.is_set || is_set(perf_mon_disable.yfilter)) leaf_name_data.push_back(perf_mon_disable.get_name_leafdata());
    if (maintenance_embargo.is_set || is_set(maintenance_embargo.yfilter)) leaf_name_data.push_back(maintenance_embargo.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (fast_shutdown.is_set || is_set(fast_shutdown.yfilter)) leaf_name_data.push_back(fast_shutdown.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-fsm-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_fsm_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-rsi-cfg:afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>();
        }
        return afs;
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

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-lcp-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp_ == nullptr)
        {
            cisco_ios_xr_ppp_ma_lcp_cfg_ppp_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_lcp_cfg_ppp_;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-statsd-cfg:statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__ == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-pppoe-ma-cmd-cfg:pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "Cisco-IOS-XR-drivers-media-eth-cfg:ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>();
        }
        return ethernet;
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
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    if(child_yang_name == "Cisco-IOS-XR-tunnel-nve-cfg:nve")
    {
        if(nve == nullptr)
        {
            nve = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>();
        }
        return nve;
    }

    if(child_yang_name == "Cisco-IOS-XR-pmengine-cfg:performance-management")
    {
        if(performance_management == nullptr)
        {
            performance_management = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>();
        }
        return performance_management;
    }

    if(child_yang_name == "Cisco-IOS-XR-pbr-cfg:pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "Cisco-IOS-XR-tunnel-gre-cfg:tunnel-ip")
    {
        if(tunnel_ip == nullptr)
        {
            tunnel_ip = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>();
        }
        return tunnel_ip;
    }

    if(child_yang_name == "Cisco-IOS-XR-controller-optics-cfg:optics")
    {
        if(optics == nullptr)
        {
            optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>();
        }
        return optics;
    }

    if(child_yang_name == "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:loopbacks")
    {
        if(loopbacks == nullptr)
        {
            loopbacks = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks>();
        }
        return loopbacks;
    }

    if(child_yang_name == "Cisco-IOS-XR-ptp-cfg:ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp>();
        }
        return ptp;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-ipsub-cfg:subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>();
        }
        return subscriber;
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

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session")
    {
        if(ssrp_session == nullptr)
        {
            ssrp_session = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>();
        }
        return ssrp_session;
    }

    if(child_yang_name == "Cisco-IOS-XR-cdp-cfg:cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>();
        }
        return cdp;
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

    if(child_yang_name == "Cisco-IOS-XR-dwdm-ui-cfg:dwdm")
    {
        if(dwdm == nullptr)
        {
            dwdm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>();
        }
        return dwdm;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-cfg:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_cfg_ppp___ == nullptr)
        {
            cisco_ios_xr_ppp_ma_cfg_ppp___ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_cfg_ppp___;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-lldp-cfg:lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "Cisco-IOS-XR-dot1x-if-cfg:dot1x-interface")
    {
        if(dot1x_interface == nullptr)
        {
            dot1x_interface = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface>();
        }
        return dot1x_interface;
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

    if(child_yang_name == "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table")
    {
        if(aaa_table == nullptr)
        {
            aaa_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>();
        }
        return aaa_table;
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

    if(child_yang_name == "Cisco-IOS-XR-flowspec-cfg:ipv4-flow-spec")
    {
        if(ipv4_flow_spec == nullptr)
        {
            ipv4_flow_spec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec>();
        }
        return ipv4_flow_spec;
    }

    if(child_yang_name == "Cisco-IOS-XR-flowspec-cfg:ipv6-flow-spec")
    {
        if(ipv6_flow_spec == nullptr)
        {
            ipv6_flow_spec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec>();
        }
        return ipv6_flow_spec;
    }

    if(child_yang_name == "Cisco-IOS-XR-wanphy-ui-cfg:wanphy")
    {
        if(wanphy == nullptr)
        {
            wanphy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Wanphy>();
        }
        return wanphy;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>();
        }
        return ipv6_network;
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

    if(child_yang_name == "Cisco-IOS-XR-controller-otu-cfg:otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow")
    {
        if(net_flow == nullptr)
        {
            net_flow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>();
        }
        return net_flow;
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

    if(child_yang_name == "Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "Cisco-IOS-XR-iedge4710-cfg:service-policies")
    {
        if(service_policies == nullptr)
        {
            service_policies = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>();
        }
        return service_policies;
    }

    if(child_yang_name == "Cisco-IOS-XR-ncs5500-coherent-portmode-cfg:portmode")
    {
        if(portmode == nullptr)
        {
            portmode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Portmode>();
        }
        return portmode;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcp-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____ == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____;
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
            ipv4arp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4arp>();
        }
        return ipv4arp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(mtus != nullptr)
    {
        _children["mtus"] = mtus;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-fsm-cfg:ppp"] = cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
    }

    if(afs != nullptr)
    {
        _children["Cisco-IOS-XR-infra-rsi-cfg:afs"] = afs;
    }

    if(pseudowire_ether != nullptr)
    {
        _children["Cisco-IOS-XR-l2vpn-cfg:pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        _children["Cisco-IOS-XR-l2vpn-cfg:pseudowire-iw"] = pseudowire_iw;
    }

    if(bvi != nullptr)
    {
        _children["Cisco-IOS-XR-l2vpn-cfg:bvi"] = bvi;
    }

    if(l2_transport != nullptr)
    {
        _children["Cisco-IOS-XR-l2vpn-cfg:l2-transport"] = l2_transport;
    }

    if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp_ != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-lcp-cfg:ppp"] = cisco_ios_xr_ppp_ma_lcp_cfg_ppp_;
    }

    if(statistics != nullptr)
    {
        _children["Cisco-IOS-XR-infra-statsd-cfg:statistics"] = statistics;
    }

    if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__ != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:ppp"] = cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp__;
    }

    if(pppoe != nullptr)
    {
        _children["Cisco-IOS-XR-subscriber-pppoe-ma-cmd-cfg:pppoe"] = pppoe;
    }

    if(ethernet != nullptr)
    {
        _children["Cisco-IOS-XR-drivers-media-eth-cfg:ethernet"] = ethernet;
    }

    if(span_monitor_sessions != nullptr)
    {
        _children["Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions"] = span_monitor_sessions;
    }

    if(frequency_synchronization != nullptr)
    {
        _children["Cisco-IOS-XR-freqsync-cfg:frequency-synchronization"] = frequency_synchronization;
    }

    if(nve != nullptr)
    {
        _children["Cisco-IOS-XR-tunnel-nve-cfg:nve"] = nve;
    }

    if(performance_management != nullptr)
    {
        _children["Cisco-IOS-XR-pmengine-cfg:performance-management"] = performance_management;
    }

    if(pbr != nullptr)
    {
        _children["Cisco-IOS-XR-pbr-cfg:pbr"] = pbr;
    }

    if(tunnel_ip != nullptr)
    {
        _children["Cisco-IOS-XR-tunnel-gre-cfg:tunnel-ip"] = tunnel_ip;
    }

    if(optics != nullptr)
    {
        _children["Cisco-IOS-XR-controller-optics-cfg:optics"] = optics;
    }

    if(loopbacks != nullptr)
    {
        _children["Cisco-IOS-XR-drivers-icpe-ethernet-cfg:loopbacks"] = loopbacks;
    }

    if(ptp != nullptr)
    {
        _children["Cisco-IOS-XR-ptp-cfg:ptp"] = ptp;
    }

    if(subscriber != nullptr)
    {
        _children["Cisco-IOS-XR-subscriber-ipsub-cfg:subscriber"] = subscriber;
    }

    if(vlan_sub_configuration != nullptr)
    {
        _children["Cisco-IOS-XR-l2-eth-infra-cfg:vlan-sub-configuration"] = vlan_sub_configuration;
    }

    if(ethernet_service != nullptr)
    {
        _children["Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-service"] = ethernet_service;
    }

    if(ethernet_bng != nullptr)
    {
        _children["Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-bng"] = ethernet_bng;
    }

    if(mac_accounting != nullptr)
    {
        _children["Cisco-IOS-XR-l2-eth-infra-cfg:mac-accounting"] = mac_accounting;
    }

    if(ethernet_features != nullptr)
    {
        _children["Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features"] = ethernet_features;
    }

    if(carrier_delay != nullptr)
    {
        _children["Cisco-IOS-XR-l2-eth-infra-cfg:carrier-delay"] = carrier_delay;
    }

    if(vlan_trunk_configuration != nullptr)
    {
        _children["Cisco-IOS-XR-l2-eth-infra-cfg:vlan-trunk-configuration"] = vlan_trunk_configuration;
    }

    if(ssrp_session != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session"] = ssrp_session;
    }

    if(cdp != nullptr)
    {
        _children["Cisco-IOS-XR-cdp-cfg:cdp"] = cdp;
    }

    if(nv_satellite_access != nullptr)
    {
        _children["Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-access"] = nv_satellite_access;
    }

    if(nv_satellite_fabric_link != nullptr)
    {
        _children["Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-link"] = nv_satellite_fabric_link;
    }

    if(nv_satellite_fabric_network != nullptr)
    {
        _children["Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-network"] = nv_satellite_fabric_network;
    }

    if(dwdm != nullptr)
    {
        _children["Cisco-IOS-XR-dwdm-ui-cfg:dwdm"] = dwdm;
    }

    if(qos != nullptr)
    {
        _children["Cisco-IOS-XR-qos-ma-cfg:qos"] = qos;
    }

    if(cisco_ios_xr_ppp_ma_cfg_ppp___ != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-cfg:ppp"] = cisco_ios_xr_ppp_ma_cfg_ppp___;
    }

    if(lldp != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-lldp-cfg:lldp"] = lldp;
    }

    if(dot1x_interface != nullptr)
    {
        _children["Cisco-IOS-XR-dot1x-if-cfg:dot1x-interface"] = dot1x_interface;
    }

    if(ipv4_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-io-cfg:ipv4-network"] = ipv4_network;
    }

    if(ipv4_network_forwarding != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-io-cfg:ipv4-network-forwarding"] = ipv4_network_forwarding;
    }

    if(aaa_table != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table"] = aaa_table;
    }

    if(ipv6_packet_filter != nullptr)
    {
        _children["Cisco-IOS-XR-ip-pfilter-cfg:ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(es_packet_filter != nullptr)
    {
        _children["Cisco-IOS-XR-ip-pfilter-cfg:es-packet-filter"] = es_packet_filter;
    }

    if(ipv4_packet_filter != nullptr)
    {
        _children["Cisco-IOS-XR-ip-pfilter-cfg:ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(ipv4_flow_spec != nullptr)
    {
        _children["Cisco-IOS-XR-flowspec-cfg:ipv4-flow-spec"] = ipv4_flow_spec;
    }

    if(ipv6_flow_spec != nullptr)
    {
        _children["Cisco-IOS-XR-flowspec-cfg:ipv6-flow-spec"] = ipv6_flow_spec;
    }

    if(wanphy != nullptr)
    {
        _children["Cisco-IOS-XR-wanphy-ui-cfg:wanphy"] = wanphy;
    }

    if(ipv6_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network"] = ipv6_network;
    }

    if(mpls != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-io-cfg:mpls"] = mpls;
    }

    if(tunnel_te_attributes != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-te-cfg:tunnel-te-attributes"] = tunnel_te_attributes;
    }

    if(transport_profile_tunnel != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-te-cfg:transport-profile-tunnel"] = transport_profile_tunnel;
    }

    if(mte_tunnel_attributes != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-te-cfg:mte-tunnel-attributes"] = mte_tunnel_attributes;
    }

    if(otu != nullptr)
    {
        _children["Cisco-IOS-XR-controller-otu-cfg:otu"] = otu;
    }

    if(net_flow != nullptr)
    {
        _children["Cisco-IOS-XR-traffmon-netflow-cfg:net-flow"] = net_flow;
    }

    if(bfd != nullptr)
    {
        _children["Cisco-IOS-XR-bundlemgr-cfg:bfd"] = bfd;
    }

    if(bundle != nullptr)
    {
        _children["Cisco-IOS-XR-bundlemgr-cfg:bundle"] = bundle;
    }

    if(lacp != nullptr)
    {
        _children["Cisco-IOS-XR-bundlemgr-cfg:lacp"] = lacp;
    }

    if(bundle_member != nullptr)
    {
        _children["Cisco-IOS-XR-bundlemgr-cfg:bundle-member"] = bundle_member;
    }

    if(mlacp != nullptr)
    {
        _children["Cisco-IOS-XR-bundlemgr-cfg:mlacp"] = mlacp;
    }

    if(macsec != nullptr)
    {
        _children["Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec"] = macsec;
    }

    if(ipv6_neighbor != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor"] = ipv6_neighbor;
    }

    if(service_policies != nullptr)
    {
        _children["Cisco-IOS-XR-iedge4710-cfg:service-policies"] = service_policies;
    }

    if(portmode != nullptr)
    {
        _children["Cisco-IOS-XR-ncs5500-coherent-portmode-cfg:portmode"] = portmode;
    }

    if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____ != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-ipcp-cfg:ppp"] = cisco_ios_xr_ppp_ma_ipcp_cfg_ppp____;
    }

    if(dagrs != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-arp-cfg:dagrs"] = dagrs;
    }

    if(ipv4arp != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp"] = ipv4arp;
    }

    return _children;
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
    if(value_path == "Cisco-IOS-XR-infra-rsi-cfg:vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:laser-squelch")
    {
        laser_squelch = value;
        laser_squelch.value_namespace = name_space;
        laser_squelch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:holdoff-time")
    {
        holdoff_time = value;
        holdoff_time.value_namespace = name_space;
        holdoff_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "laser-squelch")
    {
        laser_squelch.yfilter = yfilter;
    }
    if(value_path == "holdoff-time")
    {
        holdoff_time.yfilter = yfilter;
    }
    if(value_path == "perf-mon-disable")
    {
        perf_mon_disable.yfilter = yfilter;
    }
    if(value_path == "maintenance-embargo")
    {
        maintenance_embargo.yfilter = yfilter;
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
    if(name == "dampening" || name == "mtus" || name == "encapsulation" || name == "ppp" || name == "afs" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "bvi" || name == "l2-transport" || name == "ppp" || name == "statistics" || name == "ppp" || name == "pppoe" || name == "ethernet" || name == "span-monitor-sessions" || name == "frequency-synchronization" || name == "nve" || name == "performance-management" || name == "pbr" || name == "tunnel-ip" || name == "optics" || name == "loopbacks" || name == "ptp" || name == "subscriber" || name == "vlan-sub-configuration" || name == "ethernet-service" || name == "ethernet-bng" || name == "mac-accounting" || name == "ethernet-features" || name == "carrier-delay" || name == "vlan-trunk-configuration" || name == "ssrp-session" || name == "cdp" || name == "nv-satellite-access" || name == "nv-satellite-fabric-link" || name == "nv-satellite-fabric-network" || name == "dwdm" || name == "qos" || name == "ppp" || name == "lldp" || name == "dot1x-interface" || name == "ipv4-network" || name == "ipv4-network-forwarding" || name == "aaa-table" || name == "ipv6-packet-filter" || name == "es-packet-filter" || name == "ipv4-packet-filter" || name == "ipv4-flow-spec" || name == "ipv6-flow-spec" || name == "wanphy" || name == "ipv6-network" || name == "mpls" || name == "tunnel-te-attributes" || name == "transport-profile-tunnel" || name == "mte-tunnel-attributes" || name == "otu" || name == "net-flow" || name == "bfd" || name == "bundle" || name == "lacp" || name == "bundle-member" || name == "mlacp" || name == "macsec" || name == "ipv6-neighbor" || name == "service-policies" || name == "portmode" || name == "ppp" || name == "dagrs" || name == "ipv4arp" || name == "active" || name == "interface-name" || name == "shutdown" || name == "interface-virtual" || name == "secondary-admin-state" || name == "interface-mode-non-physical" || name == "bandwidth" || name == "link-status" || name == "description" || name == "vrf" || name == "laser-squelch" || name == "holdoff-time" || name == "perf-mon-disable" || name == "maintenance-embargo" || name == "track-name" || name == "fast-shutdown" || name == "mac-addr")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    mtu(this, {"owner"})
{

    yang_name = "mtus"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::~Mtus()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mtu.len(); index++)
    {
        if(mtu[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_operation() const
{
    for (std::size_t index=0; index<mtu.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mtu")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu>();
        ent_->parent = this;
        mtu.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Mtus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mtu.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "mtu";
    ADD_KEY_TOKEN(owner, "owner");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    capsulation_options{YType::uint32, "capsulation-options"}
{

    yang_name = "encapsulation"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Encapsulation::~Encapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::CiscoIOSXRPppMaFsmCfgPpp()
    :
    fsm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm>())
{
    fsm->parent = this;

    yang_name = "ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::~CiscoIOSXRPppMaFsmCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "Cisco-IOS-XR-ppp-ma-fsm-cfg:ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fsm != nullptr)
    {
        _children["fsm"] = fsm;
    }

    return _children;
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
    retry_timeout{YType::uint32, "retry-timeout"},
    max_unacknowledged_term_requests{YType::uint32, "max-unacknowledged-term-requests"},
    max_consecutive_conf_naks{YType::uint32, "max-consecutive-conf-naks"},
    max_unacknowledged_conf_requests{YType::uint32, "max-unacknowledged-conf-requests"}
{

    yang_name = "fsm"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::~Fsm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::has_data() const
{
    if (is_presence_container) return true;
    return retry_timeout.is_set
	|| max_unacknowledged_term_requests.is_set
	|| max_consecutive_conf_naks.is_set
	|| max_unacknowledged_conf_requests.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry_timeout.yfilter)
	|| ydk::is_set(max_unacknowledged_term_requests.yfilter)
	|| ydk::is_set(max_consecutive_conf_naks.yfilter)
	|| ydk::is_set(max_unacknowledged_conf_requests.yfilter);
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

    if (retry_timeout.is_set || is_set(retry_timeout.yfilter)) leaf_name_data.push_back(retry_timeout.get_name_leafdata());
    if (max_unacknowledged_term_requests.is_set || is_set(max_unacknowledged_term_requests.yfilter)) leaf_name_data.push_back(max_unacknowledged_term_requests.get_name_leafdata());
    if (max_consecutive_conf_naks.is_set || is_set(max_consecutive_conf_naks.yfilter)) leaf_name_data.push_back(max_consecutive_conf_naks.get_name_leafdata());
    if (max_unacknowledged_conf_requests.is_set || is_set(max_unacknowledged_conf_requests.yfilter)) leaf_name_data.push_back(max_unacknowledged_conf_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry-timeout")
    {
        retry_timeout = value;
        retry_timeout.value_namespace = name_space;
        retry_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-unacknowledged-term-requests")
    {
        max_unacknowledged_term_requests = value;
        max_unacknowledged_term_requests.value_namespace = name_space;
        max_unacknowledged_term_requests.value_namespace_prefix = name_space_prefix;
    }
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
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry-timeout")
    {
        retry_timeout.yfilter = yfilter;
    }
    if(value_path == "max-unacknowledged-term-requests")
    {
        max_unacknowledged_term_requests.yfilter = yfilter;
    }
    if(value_path == "max-consecutive-conf-naks")
    {
        max_consecutive_conf_naks.yfilter = yfilter;
    }
    if(value_path == "max-unacknowledged-conf-requests")
    {
        max_unacknowledged_conf_requests.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retry-timeout" || name == "max-unacknowledged-term-requests" || name == "max-consecutive-conf-naks" || name == "max-unacknowledged-conf-requests")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Afs()
    :
    af(this, {"af_name", "saf_name"})
    , af_topology_name(this, {"topology_name", "af_name", "saf_name"})
{

    yang_name = "afs"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Afs::~Afs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_topology_name.len(); index++)
    {
        if(af_topology_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_topology_name.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    if(child_yang_name == "af-topology-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName>();
        ent_->parent = this;
        af_topology_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : af_topology_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    ADD_KEY_TOKEN(saf_name, "saf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "af-topology-name";
    ADD_KEY_TOKEN(topology_name, "topology-name");
    ADD_KEY_TOKEN(af_name, "af-name");
    ADD_KEY_TOKEN(saf_name, "saf-name");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bvi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>())
    , l2_protocols(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>())
    , l2_ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>())
    , pac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>())
    , cac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>())
{
    span_monitor_sessions->parent = this;
    l2_protocols->parent = this;
    l2_ethernet_features->parent = this;
    pac->parent = this;
    cac->parent = this;

    yang_name = "l2-transport"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::~L2Transport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| propagate_remote_status.is_set
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (l2_protocols !=  nullptr && l2_protocols->has_data())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_data())
	|| (pac !=  nullptr && pac->has_data())
	|| (cac !=  nullptr && cac->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(propagate_remote_status.yfilter)
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (l2_protocols !=  nullptr && l2_protocols->has_operation())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_operation())
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(span_monitor_sessions != nullptr)
    {
        _children["Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions"] = span_monitor_sessions;
    }

    if(l2_protocols != nullptr)
    {
        _children["Cisco-IOS-XR-l2-eth-infra-cfg:l2-protocols"] = l2_protocols;
    }

    if(l2_ethernet_features != nullptr)
    {
        _children["Cisco-IOS-XR-l2-eth-infra-cfg:l2-ethernet-features"] = l2_ethernet_features;
    }

    if(pac != nullptr)
    {
        _children["Cisco-IOS-XR-qos-ma-cfg:pac"] = pac;
    }

    if(cac != nullptr)
    {
        _children["Cisco-IOS-XR-qos-ma-cfg:cac"] = cac;
    }

    return _children;
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
    if(name == "span-monitor-sessions" || name == "l2-protocols" || name == "l2-ethernet-features" || name == "pac" || name == "cac" || name == "enabled" || name == "propagate-remote-status")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSessions()
    :
    span_monitor_session(this, {"session_class"})
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<span_monitor_session.len(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession>();
        ent_->parent = this;
        span_monitor_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : span_monitor_session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , acl(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "span-monitor-session";
    ADD_KEY_TOKEN(session_class, "session-class");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attachment != nullptr)
    {
        _children["attachment"] = attachment;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
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

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocols()
    :
    l2_protocol(this, {"l2_protocol_name"})
{

    yang_name = "l2-protocols"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::~L2Protocols()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2_protocol.len(); index++)
    {
        if(l2_protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_operation() const
{
    for (std::size_t index=0; index<l2_protocol.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-protocol")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol>();
        ent_->parent = this;
        l2_protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2_protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "l2-protocol";
    ADD_KEY_TOKEN(l2_protocol_name, "l2-protocol-name");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    return _children;
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
    , input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output != nullptr)
    {
        _children["output"] = output;
    }

    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
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
    :
    service_policy(this, {"service_policy_name"})
    , service_policy_qos(this, {"service_policy_name"})
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-policy-qos")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos>();
        ent_->parent = this;
        service_policy_qos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_policy_qos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , subscriber_parent(nullptr) // presence node
{
    subscriber_group_names->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "service-policy-qos";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subscriber_group_names != nullptr)
    {
        _children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        _children["subscriber-parent"] = subscriber_parent;
    }

    return _children;
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
    :
    subscriber_group_name(this, {"subscriber_group_string"})
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        ent_->parent = this;
        subscriber_group_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscriber_group_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "subscriber-group-name";
    ADD_KEY_TOKEN(subscriber_group_string, "subscriber-group-string");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    service_policy(this, {"service_policy_name"})
    , service_policy_qos(this, {"service_policy_name"})
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-policy-qos")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos>();
        ent_->parent = this;
        service_policy_qos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_policy_qos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , subscriber_parent(nullptr) // presence node
{
    subscriber_group_names->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "service-policy-qos";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subscriber_group_names != nullptr)
    {
        _children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        _children["subscriber-parent"] = subscriber_parent;
    }

    return _children;
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
    :
    subscriber_group_name(this, {"subscriber_group_string"})
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        ent_->parent = this;
        subscriber_group_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscriber_group_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "subscriber-group-name";
    ADD_KEY_TOKEN(subscriber_group_string, "subscriber-group-string");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    return _children;
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
    , input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output != nullptr)
    {
        _children["output"] = output;
    }

    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
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
    :
    service_policy(this, {"service_policy_name"})
    , service_policy_qos(this, {"service_policy_name"})
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-policy-qos")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos>();
        ent_->parent = this;
        service_policy_qos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_policy_qos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , subscriber_parent(nullptr) // presence node
{
    subscriber_group_names->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "service-policy-qos";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subscriber_group_names != nullptr)
    {
        _children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        _children["subscriber-parent"] = subscriber_parent;
    }

    return _children;
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
    :
    subscriber_group_name(this, {"subscriber_group_string"})
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        ent_->parent = this;
        subscriber_group_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscriber_group_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "subscriber-group-name";
    ADD_KEY_TOKEN(subscriber_group_string, "subscriber-group-string");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    service_policy(this, {"service_policy_name"})
    , service_policy_qos(this, {"service_policy_name"})
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-policy-qos")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos>();
        ent_->parent = this;
        service_policy_qos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_policy_qos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , subscriber_parent(nullptr) // presence node
{
    subscriber_group_names->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "service-policy-qos";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subscriber_group_names != nullptr)
    {
        _children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        _children["subscriber-parent"] = subscriber_parent;
    }

    return _children;
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
    :
    subscriber_group_name(this, {"subscriber_group_string"})
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        ent_->parent = this;
        subscriber_group_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscriber_group_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "subscriber-group-name";
    ADD_KEY_TOKEN(subscriber_group_string, "subscriber-group-string");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::CiscoIOSXRPppMaLcpCfgPpp()
    :
    mcmp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp>())
    , lcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp>())
{
    mcmp->parent = this;
    lcp->parent = this;

    yang_name = "ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::~CiscoIOSXRPppMaLcpCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::has_data() const
{
    if (is_presence_container) return true;
    return (mcmp !=  nullptr && mcmp->has_data())
	|| (lcp !=  nullptr && lcp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (mcmp !=  nullptr && mcmp->has_operation())
	|| (lcp !=  nullptr && lcp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-lcp-cfg:ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcmp")
    {
        if(mcmp == nullptr)
        {
            mcmp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp>();
        }
        return mcmp;
    }

    if(child_yang_name == "lcp")
    {
        if(lcp == nullptr)
        {
            lcp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp>();
        }
        return lcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcmp != nullptr)
    {
        _children["mcmp"] = mcmp;
    }

    if(lcp != nullptr)
    {
        _children["lcp"] = lcp;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcmp" || name == "lcp")
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

    yang_name = "mcmp"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::~Mcmp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Lcp()
    :
    service_type{YType::uint32, "service-type"}
        ,
    multilink(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink>())
    , pap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap>())
    , loop_back(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack>())
    , ms_chap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap>())
    , authentication(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication>())
    , chap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap>())
{
    multilink->parent = this;
    pap->parent = this;
    loop_back->parent = this;
    ms_chap->parent = this;
    authentication->parent = this;
    chap->parent = this;

    yang_name = "lcp"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::~Lcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::has_data() const
{
    if (is_presence_container) return true;
    return service_type.is_set
	|| (multilink !=  nullptr && multilink->has_data())
	|| (pap !=  nullptr && pap->has_data())
	|| (loop_back !=  nullptr && loop_back->has_data())
	|| (ms_chap !=  nullptr && ms_chap->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (chap !=  nullptr && chap->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| (multilink !=  nullptr && multilink->has_operation())
	|| (pap !=  nullptr && pap->has_operation())
	|| (loop_back !=  nullptr && loop_back->has_operation())
	|| (ms_chap !=  nullptr && ms_chap->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (chap !=  nullptr && chap->has_operation());
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multilink != nullptr)
    {
        _children["multilink"] = multilink;
    }

    if(pap != nullptr)
    {
        _children["pap"] = pap;
    }

    if(loop_back != nullptr)
    {
        _children["loop-back"] = loop_back;
    }

    if(ms_chap != nullptr)
    {
        _children["ms-chap"] = ms_chap;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(chap != nullptr)
    {
        _children["chap"] = chap;
    }

    return _children;
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
    if(name == "multilink" || name == "pap" || name == "loop-back" || name == "ms-chap" || name == "authentication" || name == "chap" || name == "service-type")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minimum_active != nullptr)
    {
        _children["minimum-active"] = minimum_active;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(send_user_info != nullptr)
    {
        _children["send-user-info"] = send_user_info;
    }

    return _children;
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
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "send-user-info"; yang_parent_name = "pap"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::~SendUserInfo()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| password.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
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

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "password")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    password{YType::str, "password"},
    host_name{YType::str, "host-name"},
    refuse{YType::empty, "refuse"}
{

    yang_name = "ms-chap"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::~MsChap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::has_data() const
{
    if (is_presence_container) return true;
    return password.is_set
	|| host_name.is_set
	|| refuse.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(host_name.yfilter)
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

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (refuse.is_set || is_set(refuse.yfilter)) leaf_name_data.push_back(refuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "refuse")
    {
        refuse.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "host-name" || name == "refuse")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method != nullptr)
    {
        _children["method"] = method;
    }

    return _children;
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
    name{YType::str, "name"},
    method{YType::enumeration, "method"}
{

    yang_name = "method"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::~Method()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::has_data() const
{
    if (is_presence_container) return true;
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
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(method.yfilter);
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "method")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::Chap()
    :
    password{YType::str, "password"},
    host_name{YType::str, "host-name"},
    refuse{YType::empty, "refuse"}
{

    yang_name = "chap"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::~Chap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::has_data() const
{
    if (is_presence_container) return true;
    return password.is_set
	|| host_name.is_set
	|| refuse.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(host_name.yfilter)
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

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (refuse.is_set || is_set(refuse.yfilter)) leaf_name_data.push_back(refuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "refuse")
    {
        refuse.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "host-name" || name == "refuse")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Statistics::Statistics()
    :
    load_interval{YType::uint32, "load-interval"}
{

    yang_name = "statistics"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Statistics::~Statistics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return load_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::CiscoIOSXRPppMaIpcpiwCfgPpp()
    :
    ipcpiw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw>())
{
    ipcpiw->parent = this;

    yang_name = "ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::~CiscoIOSXRPppMaIpcpiwCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipcpiw != nullptr)
    {
        _children["ipcpiw"] = ipcpiw;
    }

    return _children;
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

    yang_name = "ipcpiw"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::~Ipcpiw()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Pppoe::Pppoe()
    :
    enable_bba_group(nullptr) // presence node
{

    yang_name = "pppoe"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::~Pppoe()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return (enable_bba_group !=  nullptr && enable_bba_group->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| (enable_bba_group !=  nullptr && enable_bba_group->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-cmd-cfg:pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable-bba-group")
    {
        if(enable_bba_group == nullptr)
        {
            enable_bba_group = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup>();
        }
        return enable_bba_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enable_bba_group != nullptr)
    {
        _children["enable-bba-group"] = enable_bba_group;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-bba-group")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::EnableBbaGroup()
    :
    enable{YType::boolean, "enable"},
    bba_group_name{YType::str, "bba-group-name"}
{

    yang_name = "enable-bba-group"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::~EnableBbaGroup()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| bba_group_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(bba_group_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable-bba-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (bba_group_name.is_set || is_set(bba_group_name.yfilter)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
        bba_group_name.value_namespace = name_space;
        bba_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "bba-group-name")
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
    , optical_power_degrade(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade>())
    , signal_degrade_bit_error_rate(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate>())
    , carrier_delay(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signal_fail_bit_error_rate != nullptr)
    {
        _children["signal-fail-bit-error-rate"] = signal_fail_bit_error_rate;
    }

    if(optical_power_degrade != nullptr)
    {
        _children["optical-power-degrade"] = optical_power_degrade;
    }

    if(signal_degrade_bit_error_rate != nullptr)
    {
        _children["signal-degrade-bit-error-rate"] = signal_degrade_bit_error_rate;
    }

    if(carrier_delay != nullptr)
    {
        _children["carrier-delay"] = carrier_delay;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSessions()
    :
    span_monitor_session(this, {"session_class"})
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<span_monitor_session.len(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.len(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession>();
        ent_->parent = this;
        span_monitor_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : span_monitor_session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-session")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
        ,
    attachment(nullptr) // presence node
    , acl(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    if (is_presence_container) return true;
    return session_class.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(mirror_first.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| (attachment !=  nullptr && attachment->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session";
    ADD_KEY_TOKEN(session_class, "session-class");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.yfilter)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attachment != nullptr)
    {
        _children["attachment"] = attachment;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment" || name == "acl" || name == "session-class" || name == "mirror-first" || name == "mirror-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    session_name{YType::str, "session-name"},
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"}
{

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    if (is_presence_container) return true;
    return session_name.is_set
	|| direction.is_set
	|| port_level_enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(port_level_enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.yfilter)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-name" || name == "direction" || name == "port-level-enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::Acl()
    :
    acl_enable{YType::empty, "acl-enable"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_enable.is_set
	|| acl_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_enable.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_enable.is_set || is_set(acl_enable.yfilter)) leaf_name_data.push_back(acl_enable.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-enable" || name == "acl-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::FrequencySynchronization()
    :
    ssm_disable{YType::empty, "ssm-disable"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    selection_input{YType::empty, "selection-input"},
    enable{YType::empty, "enable"},
    priority{YType::uint32, "priority"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
        ,
    input_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel>())
    , output_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel>())
{
    input_quality_level->parent = this;
    output_quality_level->parent = this;

    yang_name = "frequency-synchronization"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::~FrequencySynchronization()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::has_data() const
{
    if (is_presence_container) return true;
    return ssm_disable.is_set
	|| time_of_day_priority.is_set
	|| selection_input.is_set
	|| enable.is_set
	|| priority.is_set
	|| wait_to_restore_time.is_set
	|| (input_quality_level !=  nullptr && input_quality_level->has_data())
	|| (output_quality_level !=  nullptr && output_quality_level->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssm_disable.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| (input_quality_level !=  nullptr && input_quality_level->has_operation())
	|| (output_quality_level !=  nullptr && output_quality_level->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-cfg:frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input_quality_level != nullptr)
    {
        _children["input-quality-level"] = input_quality_level;
    }

    if(output_quality_level != nullptr)
    {
        _children["output-quality-level"] = output_quality_level;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssm-disable")
    {
        ssm_disable.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-quality-level" || name == "output-quality-level" || name == "ssm-disable" || name == "time-of-day-priority" || name == "selection-input" || name == "enable" || name == "priority" || name == "wait-to-restore-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "input-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "output-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Nve()
    :
    vx_lan_udp_port{YType::enumeration, "vx-lan-udp-port"},
    overlay_encapsulation{YType::enumeration, "overlay-encapsulation"},
    source_interface{YType::str, "source-interface"},
    ingress_replication_protocol{YType::enumeration, "ingress-replication-protocol"}
        ,
    anycast(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast>())
    , redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy>())
    , member_vnis(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis>())
{
    anycast->parent = this;
    redundancy->parent = this;
    member_vnis->parent = this;

    yang_name = "nve"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Nve::~Nve()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_data() const
{
    if (is_presence_container) return true;
    return vx_lan_udp_port.is_set
	|| overlay_encapsulation.is_set
	|| source_interface.is_set
	|| ingress_replication_protocol.is_set
	|| (anycast !=  nullptr && anycast->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (member_vnis !=  nullptr && member_vnis->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vx_lan_udp_port.yfilter)
	|| ydk::is_set(overlay_encapsulation.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(ingress_replication_protocol.yfilter)
	|| (anycast !=  nullptr && anycast->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (member_vnis !=  nullptr && member_vnis->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-cfg:nve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vx_lan_udp_port.is_set || is_set(vx_lan_udp_port.yfilter)) leaf_name_data.push_back(vx_lan_udp_port.get_name_leafdata());
    if (overlay_encapsulation.is_set || is_set(overlay_encapsulation.yfilter)) leaf_name_data.push_back(overlay_encapsulation.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (ingress_replication_protocol.is_set || is_set(ingress_replication_protocol.yfilter)) leaf_name_data.push_back(ingress_replication_protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anycast")
    {
        if(anycast == nullptr)
        {
            anycast = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast>();
        }
        return anycast;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "member-vnis")
    {
        if(member_vnis == nullptr)
        {
            member_vnis = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis>();
        }
        return member_vnis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(anycast != nullptr)
    {
        _children["anycast"] = anycast;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(member_vnis != nullptr)
    {
        _children["member-vnis"] = member_vnis;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vx-lan-udp-port")
    {
        vx_lan_udp_port = value;
        vx_lan_udp_port.value_namespace = name_space;
        vx_lan_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation = value;
        overlay_encapsulation.value_namespace = name_space;
        overlay_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-replication-protocol")
    {
        ingress_replication_protocol = value;
        ingress_replication_protocol.value_namespace = name_space;
        ingress_replication_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vx-lan-udp-port")
    {
        vx_lan_udp_port.yfilter = yfilter;
    }
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "ingress-replication-protocol")
    {
        ingress_replication_protocol.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anycast" || name == "redundancy" || name == "member-vnis" || name == "vx-lan-udp-port" || name == "overlay-encapsulation" || name == "source-interface" || name == "ingress-replication-protocol")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::Anycast()
    :
    source_interface{YType::str, "source-interface"},
    sync_group{YType::str, "sync-group"}
{

    yang_name = "anycast"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::~Anycast()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_data() const
{
    if (is_presence_container) return true;
    return source_interface.is_set
	|| sync_group.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(sync_group.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (sync_group.is_set || is_set(sync_group.yfilter)) leaf_name_data.push_back(sync_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-group")
    {
        sync_group = value;
        sync_group.value_namespace = name_space;
        sync_group.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "sync-group")
    {
        sync_group.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "sync-group")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
        ,
    backbone_vx_lan(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan>())
    , backbone_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls>())
{
    backbone_vx_lan->parent = this;
    backbone_mpls->parent = this;

    yang_name = "redundancy"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (backbone_vx_lan !=  nullptr && backbone_vx_lan->has_data())
	|| (backbone_mpls !=  nullptr && backbone_mpls->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (backbone_vx_lan !=  nullptr && backbone_vx_lan->has_operation())
	|| (backbone_mpls !=  nullptr && backbone_mpls->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backbone-vx-lan")
    {
        if(backbone_vx_lan == nullptr)
        {
            backbone_vx_lan = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan>();
        }
        return backbone_vx_lan;
    }

    if(child_yang_name == "backbone-mpls")
    {
        if(backbone_mpls == nullptr)
        {
            backbone_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls>();
        }
        return backbone_mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backbone_vx_lan != nullptr)
    {
        _children["backbone-vx-lan"] = backbone_vx_lan;
    }

    if(backbone_mpls != nullptr)
    {
        _children["backbone-mpls"] = backbone_mpls;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-vx-lan" || name == "backbone-mpls" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::BackboneVxLan()
    :
    enable{YType::empty, "enable"},
    backbone_vx_laniccp{YType::uint32, "backbone-vx-laniccp"}
{

    yang_name = "backbone-vx-lan"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::~BackboneVxLan()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| backbone_vx_laniccp.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(backbone_vx_laniccp.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone-vx-lan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (backbone_vx_laniccp.is_set || is_set(backbone_vx_laniccp.yfilter)) leaf_name_data.push_back(backbone_vx_laniccp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backbone-vx-laniccp")
    {
        backbone_vx_laniccp = value;
        backbone_vx_laniccp.value_namespace = name_space;
        backbone_vx_laniccp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "backbone-vx-laniccp")
    {
        backbone_vx_laniccp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "backbone-vx-laniccp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::BackboneMpls()
    :
    backbone_mplsiccp{YType::uint32, "backbone-mplsiccp"},
    enable{YType::empty, "enable"}
{

    yang_name = "backbone-mpls"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::~BackboneMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_data() const
{
    if (is_presence_container) return true;
    return backbone_mplsiccp.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backbone_mplsiccp.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_mplsiccp.is_set || is_set(backbone_mplsiccp.yfilter)) leaf_name_data.push_back(backbone_mplsiccp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbone-mplsiccp")
    {
        backbone_mplsiccp = value;
        backbone_mplsiccp.value_namespace = name_space;
        backbone_mplsiccp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbone-mplsiccp")
    {
        backbone_mplsiccp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-mplsiccp" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVnis()
    :
    member_vni(this, {"vni_start", "vni_end"})
{

    yang_name = "member-vnis"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::~MemberVnis()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_vni.len(); index++)
    {
        if(member_vni[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_operation() const
{
    for (std::size_t index=0; index<member_vni.len(); index++)
    {
        if(member_vni[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni>();
        ent_->parent = this;
        member_vni.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member_vni.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::MemberVni()
    :
    vni_start{YType::uint32, "vni-start"},
    vni_end{YType::uint32, "vni-end"},
    host_reachability{YType::enumeration, "host-reachability"},
    vrf{YType::str, "vrf"},
    unknown_unicast_flooding{YType::enumeration, "unknown-unicast-flooding"},
    load_balance_per_evi{YType::enumeration, "load-balance-per-evi"},
    enable{YType::empty, "enable"}
        ,
    multicast(nullptr) // presence node
{

    yang_name = "member-vni"; yang_parent_name = "member-vnis"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::~MemberVni()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_data() const
{
    if (is_presence_container) return true;
    return vni_start.is_set
	|| vni_end.is_set
	|| host_reachability.is_set
	|| vrf.is_set
	|| unknown_unicast_flooding.is_set
	|| load_balance_per_evi.is_set
	|| enable.is_set
	|| (multicast !=  nullptr && multicast->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni_start.yfilter)
	|| ydk::is_set(vni_end.yfilter)
	|| ydk::is_set(host_reachability.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(unknown_unicast_flooding.yfilter)
	|| ydk::is_set(load_balance_per_evi.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni";
    ADD_KEY_TOKEN(vni_start, "vni-start");
    ADD_KEY_TOKEN(vni_end, "vni-end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni_start.is_set || is_set(vni_start.yfilter)) leaf_name_data.push_back(vni_start.get_name_leafdata());
    if (vni_end.is_set || is_set(vni_end.yfilter)) leaf_name_data.push_back(vni_end.get_name_leafdata());
    if (host_reachability.is_set || is_set(host_reachability.yfilter)) leaf_name_data.push_back(host_reachability.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (unknown_unicast_flooding.is_set || is_set(unknown_unicast_flooding.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding.get_name_leafdata());
    if (load_balance_per_evi.is_set || is_set(load_balance_per_evi.yfilter)) leaf_name_data.push_back(load_balance_per_evi.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni-start")
    {
        vni_start = value;
        vni_start.value_namespace = name_space;
        vni_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-end")
    {
        vni_end = value;
        vni_end.value_namespace = name_space;
        vni_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-reachability")
    {
        host_reachability = value;
        host_reachability.value_namespace = name_space;
        host_reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding")
    {
        unknown_unicast_flooding = value;
        unknown_unicast_flooding.value_namespace = name_space;
        unknown_unicast_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-per-evi")
    {
        load_balance_per_evi = value;
        load_balance_per_evi.value_namespace = name_space;
        load_balance_per_evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni-start")
    {
        vni_start.yfilter = yfilter;
    }
    if(value_path == "vni-end")
    {
        vni_end.yfilter = yfilter;
    }
    if(value_path == "host-reachability")
    {
        host_reachability.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding")
    {
        unknown_unicast_flooding.yfilter = yfilter;
    }
    if(value_path == "load-balance-per-evi")
    {
        load_balance_per_evi.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "vni-start" || name == "vni-end" || name == "host-reachability" || name == "vrf" || name == "unknown-unicast-flooding" || name == "load-balance-per-evi" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::Multicast()
    :
    multicast_group_min{YType::str, "multicast-group-min"},
    multicast_group_max{YType::str, "multicast-group-max"}
{

    yang_name = "multicast"; yang_parent_name = "member-vni"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::~Multicast()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return multicast_group_min.is_set
	|| multicast_group_max.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_group_min.yfilter)
	|| ydk::is_set(multicast_group_max.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_group_min.is_set || is_set(multicast_group_min.yfilter)) leaf_name_data.push_back(multicast_group_min.get_name_leafdata());
    if (multicast_group_max.is_set || is_set(multicast_group_max.yfilter)) leaf_name_data.push_back(multicast_group_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-group-min")
    {
        multicast_group_min = value;
        multicast_group_min.value_namespace = name_space;
        multicast_group_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-group-max")
    {
        multicast_group_max = value;
        multicast_group_max.value_namespace = name_space;
        multicast_group_max.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-group-min")
    {
        multicast_group_min.yfilter = yfilter;
    }
    if(value_path == "multicast-group-max")
    {
        multicast_group_max.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-group-min" || name == "multicast-group-max")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::PerformanceManagement()
    :
    stm_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>())
    , minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>())
    , sonet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>())
    , hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>())
    , ethernet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>())
    , minute15otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms>())
    , oc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>())
    , ethernet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>())
    , ho_vc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>())
    , second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>())
    , hour24otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms>())
    , sts_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>())
    , hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>())
    , ho_vc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>())
    , sts_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>())
    , stm_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>())
    , sonet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>())
    , minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>())
    , oc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>())
    , ethernet_second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>())
    , hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>())
    , minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>())
{
    stm_hour24->parent = this;
    minute15_gfp->parent = this;
    sonet_minute15->parent = this;
    hour24_gfp->parent = this;
    ethernet_hour24->parent = this;
    minute15otn_tcms->parent = this;
    oc_hour24->parent = this;
    ethernet_minute15->parent = this;
    ho_vc_hour24->parent = this;
    second30->parent = this;
    hour24otn_tcms->parent = this;
    sts_minute15->parent = this;
    hour24->parent = this;
    ho_vc_minute15->parent = this;
    sts_hour24->parent = this;
    stm_minute15->parent = this;
    sonet_hour24->parent = this;
    minute15_path->parent = this;
    oc_minute15->parent = this;
    ethernet_second30->parent = this;
    hour24_path->parent = this;
    minute15->parent = this;

    yang_name = "performance-management"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::~PerformanceManagement()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_data() const
{
    if (is_presence_container) return true;
    return (stm_hour24 !=  nullptr && stm_hour24->has_data())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_data())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_data())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_data())
	|| (ethernet_hour24 !=  nullptr && ethernet_hour24->has_data())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_data())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_data())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_data())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_data())
	|| (second30 !=  nullptr && second30->has_data())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_data())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_data())
	|| (hour24 !=  nullptr && hour24->has_data())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_data())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_data())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_data())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_data())
	|| (minute15_path !=  nullptr && minute15_path->has_data())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_data())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_data())
	|| (hour24_path !=  nullptr && hour24_path->has_data())
	|| (minute15 !=  nullptr && minute15->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24 !=  nullptr && stm_hour24->has_operation())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_operation())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation())
	|| (ethernet_hour24 !=  nullptr && ethernet_hour24->has_operation())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_operation())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_operation())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_operation())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_operation())
	|| (second30 !=  nullptr && second30->has_operation())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_operation())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_operation())
	|| (hour24 !=  nullptr && hour24->has_operation())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_operation())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_operation())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_operation())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_operation())
	|| (minute15_path !=  nullptr && minute15_path->has_operation())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_operation())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_operation())
	|| (hour24_path !=  nullptr && hour24_path->has_operation())
	|| (minute15 !=  nullptr && minute15->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-cfg:performance-management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24")
    {
        if(stm_hour24 == nullptr)
        {
            stm_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>();
        }
        return stm_hour24;
    }

    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp == nullptr)
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>();
        }
        return minute15_gfp;
    }

    if(child_yang_name == "sonet-minute15")
    {
        if(sonet_minute15 == nullptr)
        {
            sonet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>();
        }
        return sonet_minute15;
    }

    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp == nullptr)
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>();
        }
        return hour24_gfp;
    }

    if(child_yang_name == "ethernet-hour24")
    {
        if(ethernet_hour24 == nullptr)
        {
            ethernet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>();
        }
        return ethernet_hour24;
    }

    if(child_yang_name == "minute15otn-tcms")
    {
        if(minute15otn_tcms == nullptr)
        {
            minute15otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms>();
        }
        return minute15otn_tcms;
    }

    if(child_yang_name == "oc-hour24")
    {
        if(oc_hour24 == nullptr)
        {
            oc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>();
        }
        return oc_hour24;
    }

    if(child_yang_name == "ethernet-minute15")
    {
        if(ethernet_minute15 == nullptr)
        {
            ethernet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>();
        }
        return ethernet_minute15;
    }

    if(child_yang_name == "ho-vc-hour24")
    {
        if(ho_vc_hour24 == nullptr)
        {
            ho_vc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>();
        }
        return ho_vc_hour24;
    }

    if(child_yang_name == "second30")
    {
        if(second30 == nullptr)
        {
            second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>();
        }
        return second30;
    }

    if(child_yang_name == "hour24otn-tcms")
    {
        if(hour24otn_tcms == nullptr)
        {
            hour24otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms>();
        }
        return hour24otn_tcms;
    }

    if(child_yang_name == "sts-minute15")
    {
        if(sts_minute15 == nullptr)
        {
            sts_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>();
        }
        return sts_minute15;
    }

    if(child_yang_name == "hour24")
    {
        if(hour24 == nullptr)
        {
            hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>();
        }
        return hour24;
    }

    if(child_yang_name == "ho-vc-minute15")
    {
        if(ho_vc_minute15 == nullptr)
        {
            ho_vc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>();
        }
        return ho_vc_minute15;
    }

    if(child_yang_name == "sts-hour24")
    {
        if(sts_hour24 == nullptr)
        {
            sts_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>();
        }
        return sts_hour24;
    }

    if(child_yang_name == "stm-minute15")
    {
        if(stm_minute15 == nullptr)
        {
            stm_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>();
        }
        return stm_minute15;
    }

    if(child_yang_name == "sonet-hour24")
    {
        if(sonet_hour24 == nullptr)
        {
            sonet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>();
        }
        return sonet_hour24;
    }

    if(child_yang_name == "minute15-path")
    {
        if(minute15_path == nullptr)
        {
            minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>();
        }
        return minute15_path;
    }

    if(child_yang_name == "oc-minute15")
    {
        if(oc_minute15 == nullptr)
        {
            oc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>();
        }
        return oc_minute15;
    }

    if(child_yang_name == "ethernet-second30")
    {
        if(ethernet_second30 == nullptr)
        {
            ethernet_second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>();
        }
        return ethernet_second30;
    }

    if(child_yang_name == "hour24-path")
    {
        if(hour24_path == nullptr)
        {
            hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>();
        }
        return hour24_path;
    }

    if(child_yang_name == "minute15")
    {
        if(minute15 == nullptr)
        {
            minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>();
        }
        return minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stm_hour24 != nullptr)
    {
        _children["stm-hour24"] = stm_hour24;
    }

    if(minute15_gfp != nullptr)
    {
        _children["minute15-gfp"] = minute15_gfp;
    }

    if(sonet_minute15 != nullptr)
    {
        _children["sonet-minute15"] = sonet_minute15;
    }

    if(hour24_gfp != nullptr)
    {
        _children["hour24-gfp"] = hour24_gfp;
    }

    if(ethernet_hour24 != nullptr)
    {
        _children["ethernet-hour24"] = ethernet_hour24;
    }

    if(minute15otn_tcms != nullptr)
    {
        _children["minute15otn-tcms"] = minute15otn_tcms;
    }

    if(oc_hour24 != nullptr)
    {
        _children["oc-hour24"] = oc_hour24;
    }

    if(ethernet_minute15 != nullptr)
    {
        _children["ethernet-minute15"] = ethernet_minute15;
    }

    if(ho_vc_hour24 != nullptr)
    {
        _children["ho-vc-hour24"] = ho_vc_hour24;
    }

    if(second30 != nullptr)
    {
        _children["second30"] = second30;
    }

    if(hour24otn_tcms != nullptr)
    {
        _children["hour24otn-tcms"] = hour24otn_tcms;
    }

    if(sts_minute15 != nullptr)
    {
        _children["sts-minute15"] = sts_minute15;
    }

    if(hour24 != nullptr)
    {
        _children["hour24"] = hour24;
    }

    if(ho_vc_minute15 != nullptr)
    {
        _children["ho-vc-minute15"] = ho_vc_minute15;
    }

    if(sts_hour24 != nullptr)
    {
        _children["sts-hour24"] = sts_hour24;
    }

    if(stm_minute15 != nullptr)
    {
        _children["stm-minute15"] = stm_minute15;
    }

    if(sonet_hour24 != nullptr)
    {
        _children["sonet-hour24"] = sonet_hour24;
    }

    if(minute15_path != nullptr)
    {
        _children["minute15-path"] = minute15_path;
    }

    if(oc_minute15 != nullptr)
    {
        _children["oc-minute15"] = oc_minute15;
    }

    if(ethernet_second30 != nullptr)
    {
        _children["ethernet-second30"] = ethernet_second30;
    }

    if(hour24_path != nullptr)
    {
        _children["hour24-path"] = hour24_path;
    }

    if(minute15 != nullptr)
    {
        _children["minute15"] = minute15;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24" || name == "minute15-gfp" || name == "sonet-minute15" || name == "hour24-gfp" || name == "ethernet-hour24" || name == "minute15otn-tcms" || name == "oc-hour24" || name == "ethernet-minute15" || name == "ho-vc-hour24" || name == "second30" || name == "hour24otn-tcms" || name == "sts-minute15" || name == "hour24" || name == "ho-vc-minute15" || name == "sts-hour24" || name == "stm-minute15" || name == "sonet-hour24" || name == "minute15-path" || name == "oc-minute15" || name == "ethernet-second30" || name == "hour24-path" || name == "minute15")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24()
    :
    stm_hour24_stm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>())
{
    stm_hour24_stm->parent = this;

    yang_name = "stm-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::~StmHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_data() const
{
    if (is_presence_container) return true;
    return (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm")
    {
        if(stm_hour24_stm == nullptr)
        {
            stm_hour24_stm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>();
        }
        return stm_hour24_stm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stm_hour24_stm != nullptr)
    {
        _children["stm-hour24-stm"] = stm_hour24_stm;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24Stm()
    :
    stm_hour24_stm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>())
    , stm_hour24_stm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>())
{
    stm_hour24_stm_reports->parent = this;
    stm_hour24_stm_thresholds->parent = this;

    yang_name = "stm-hour24-stm"; yang_parent_name = "stm-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::~StmHour24Stm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_data() const
{
    if (is_presence_container) return true;
    return (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_data())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_operation())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-reports")
    {
        if(stm_hour24_stm_reports == nullptr)
        {
            stm_hour24_stm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>();
        }
        return stm_hour24_stm_reports;
    }

    if(child_yang_name == "stm-hour24-stm-thresholds")
    {
        if(stm_hour24_stm_thresholds == nullptr)
        {
            stm_hour24_stm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>();
        }
        return stm_hour24_stm_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stm_hour24_stm_reports != nullptr)
    {
        _children["stm-hour24-stm-reports"] = stm_hour24_stm_reports;
    }

    if(stm_hour24_stm_thresholds != nullptr)
    {
        _children["stm-hour24-stm-thresholds"] = stm_hour24_stm_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-reports" || name == "stm-hour24-stm-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReports()
    :
    stm_hour24_stm_report(this, {"stm_report"})
{

    yang_name = "stm-hour24-stm-reports"; yang_parent_name = "stm-hour24-stm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::~StmHour24StmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stm_hour24_stm_report.len(); index++)
    {
        if(stm_hour24_stm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_report.len(); index++)
    {
        if(stm_hour24_stm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport>();
        ent_->parent = this;
        stm_hour24_stm_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stm_hour24_stm_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::StmHour24StmReport()
    :
    stm_report{YType::enumeration, "stm-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "stm-hour24-stm-report"; yang_parent_name = "stm-hour24-stm-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::~StmHour24StmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_data() const
{
    if (is_presence_container) return true;
    return stm_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-report";
    ADD_KEY_TOKEN(stm_report, "stm-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_report.is_set || is_set(stm_report.yfilter)) leaf_name_data.push_back(stm_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-report")
    {
        stm_report = value;
        stm_report.value_namespace = name_space;
        stm_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-report")
    {
        stm_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThresholds()
    :
    stm_hour24_stm_threshold(this, {"stm_threshold"})
{

    yang_name = "stm-hour24-stm-thresholds"; yang_parent_name = "stm-hour24-stm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::~StmHour24StmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stm_hour24_stm_threshold.len(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_threshold.len(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold>();
        ent_->parent = this;
        stm_hour24_stm_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stm_hour24_stm_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::StmHour24StmThreshold()
    :
    stm_threshold{YType::enumeration, "stm-threshold"},
    stm_threshold_value{YType::uint32, "stm-threshold-value"}
{

    yang_name = "stm-hour24-stm-threshold"; yang_parent_name = "stm-hour24-stm-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::~StmHour24StmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_data() const
{
    if (is_presence_container) return true;
    return stm_threshold.is_set
	|| stm_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_threshold.yfilter)
	|| ydk::is_set(stm_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-threshold";
    ADD_KEY_TOKEN(stm_threshold, "stm-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_threshold.is_set || is_set(stm_threshold.yfilter)) leaf_name_data.push_back(stm_threshold.get_name_leafdata());
    if (stm_threshold_value.is_set || is_set(stm_threshold_value.yfilter)) leaf_name_data.push_back(stm_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold = value;
        stm_threshold.value_namespace = name_space;
        stm_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value = value;
        stm_threshold_value.value_namespace = name_space;
        stm_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold.yfilter = yfilter;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-threshold" || name == "stm-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp()
    :
    minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>())
{
    minute15_gfp->parent = this;

    yang_name = "minute15-gfp"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::~Minute15Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_gfp !=  nullptr && minute15_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp == nullptr)
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>();
        }
        return minute15_gfp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_gfp != nullptr)
    {
        _children["minute15-gfp"] = minute15_gfp;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15Gfp_()
    :
    minute15_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>())
    , minute15_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>())
{
    minute15_gfp_reports->parent = this;
    minute15_gfp_thresholds->parent = this;

    yang_name = "minute15-gfp"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::~Minute15Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_data())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_operation())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-reports")
    {
        if(minute15_gfp_reports == nullptr)
        {
            minute15_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>();
        }
        return minute15_gfp_reports;
    }

    if(child_yang_name == "minute15-gfp-thresholds")
    {
        if(minute15_gfp_thresholds == nullptr)
        {
            minute15_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>();
        }
        return minute15_gfp_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_gfp_reports != nullptr)
    {
        _children["minute15-gfp-reports"] = minute15_gfp_reports;
    }

    if(minute15_gfp_thresholds != nullptr)
    {
        _children["minute15-gfp-thresholds"] = minute15_gfp_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-reports" || name == "minute15-gfp-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReports()
    :
    minute15_gfp_report(this, {"gfp_report"})
{

    yang_name = "minute15-gfp-reports"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::~Minute15GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_gfp_report.len(); index++)
    {
        if(minute15_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_report.len(); index++)
    {
        if(minute15_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport>();
        ent_->parent = this;
        minute15_gfp_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_gfp_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::Minute15GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{

    yang_name = "minute15-gfp-report"; yang_parent_name = "minute15-gfp-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::~Minute15GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_data() const
{
    if (is_presence_container) return true;
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-report";
    ADD_KEY_TOKEN(gfp_report, "gfp-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.yfilter)) leaf_name_data.push_back(gfp_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
        gfp_report.value_namespace = name_space;
        gfp_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-report")
    {
        gfp_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThresholds()
    :
    minute15_gfp_threshold(this, {"gfp_threshold"})
{

    yang_name = "minute15-gfp-thresholds"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::~Minute15GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_gfp_threshold.len(); index++)
    {
        if(minute15_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_threshold.len(); index++)
    {
        if(minute15_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold>();
        ent_->parent = this;
        minute15_gfp_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_gfp_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::Minute15GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::uint32, "gfp-threshold-value"}
{

    yang_name = "minute15-gfp-threshold"; yang_parent_name = "minute15-gfp-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::~Minute15GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_data() const
{
    if (is_presence_container) return true;
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_threshold.yfilter)
	|| ydk::is_set(gfp_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-threshold";
    ADD_KEY_TOKEN(gfp_threshold, "gfp-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.yfilter)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.yfilter)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
        gfp_threshold.value_namespace = name_space;
        gfp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
        gfp_threshold_value.value_namespace = name_space;
        gfp_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold.yfilter = yfilter;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-threshold" || name == "gfp-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15()
    :
    sonet_minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>())
    , sonet_minute15_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>())
{
    sonet_minute15_path->parent = this;
    sonet_minute15_ocn->parent = this;

    yang_name = "sonet-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::~SonetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_data())
	|| (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_operation())
	|| (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path")
    {
        if(sonet_minute15_path == nullptr)
        {
            sonet_minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>();
        }
        return sonet_minute15_path;
    }

    if(child_yang_name == "sonet-minute15-ocn")
    {
        if(sonet_minute15_ocn == nullptr)
        {
            sonet_minute15_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>();
        }
        return sonet_minute15_ocn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15_path != nullptr)
    {
        _children["sonet-minute15-path"] = sonet_minute15_path;
    }

    if(sonet_minute15_ocn != nullptr)
    {
        _children["sonet-minute15-ocn"] = sonet_minute15_ocn;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path" || name == "sonet-minute15-ocn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15Path()
    :
    sonet_minute15_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>())
    , sonet_minute15_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>())
{
    sonet_minute15_path_reports->parent = this;
    sonet_minute15_path_thresholds->parent = this;

    yang_name = "sonet-minute15-path"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::~SonetMinute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_data())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_operation())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-reports")
    {
        if(sonet_minute15_path_reports == nullptr)
        {
            sonet_minute15_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>();
        }
        return sonet_minute15_path_reports;
    }

    if(child_yang_name == "sonet-minute15-path-thresholds")
    {
        if(sonet_minute15_path_thresholds == nullptr)
        {
            sonet_minute15_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>();
        }
        return sonet_minute15_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15_path_reports != nullptr)
    {
        _children["sonet-minute15-path-reports"] = sonet_minute15_path_reports;
    }

    if(sonet_minute15_path_thresholds != nullptr)
    {
        _children["sonet-minute15-path-thresholds"] = sonet_minute15_path_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-reports" || name == "sonet-minute15-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReports()
    :
    sonet_minute15_path_report(this, {"path_report"})
{

    yang_name = "sonet-minute15-path-reports"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::~SonetMinute15PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_path_report.len(); index++)
    {
        if(sonet_minute15_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_report.len(); index++)
    {
        if(sonet_minute15_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport>();
        ent_->parent = this;
        sonet_minute15_path_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_path_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::SonetMinute15PathReport()
    :
    path_report{YType::enumeration, "path-report"}
{

    yang_name = "sonet-minute15-path-report"; yang_parent_name = "sonet-minute15-path-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::~SonetMinute15PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_data() const
{
    if (is_presence_container) return true;
    return path_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-report";
    ADD_KEY_TOKEN(path_report, "path-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.yfilter)) leaf_name_data.push_back(path_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-report")
    {
        path_report = value;
        path_report.value_namespace = name_space;
        path_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-report")
    {
        path_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThresholds()
    :
    sonet_minute15_path_threshold(this, {"path_threshold"})
{

    yang_name = "sonet-minute15-path-thresholds"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::~SonetMinute15PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_path_threshold.len(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_threshold.len(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold>();
        ent_->parent = this;
        sonet_minute15_path_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_path_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::SonetMinute15PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::uint32, "path-threshold-value"}
{

    yang_name = "sonet-minute15-path-threshold"; yang_parent_name = "sonet-minute15-path-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::~SonetMinute15PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_data() const
{
    if (is_presence_container) return true;
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_threshold.yfilter)
	|| ydk::is_set(path_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-threshold";
    ADD_KEY_TOKEN(path_threshold, "path-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.yfilter)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.yfilter)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
        path_threshold.value_namespace = name_space;
        path_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
        path_threshold_value.value_namespace = name_space;
        path_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-threshold")
    {
        path_threshold.yfilter = yfilter;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-threshold" || name == "path-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15Ocn()
    :
    sonet_minute15_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>())
    , sonet_minute15_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>())
{
    sonet_minute15_ocn_reports->parent = this;
    sonet_minute15_ocn_thresholds->parent = this;

    yang_name = "sonet-minute15-ocn"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::~SonetMinute15Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_data())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_operation())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-reports")
    {
        if(sonet_minute15_ocn_reports == nullptr)
        {
            sonet_minute15_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>();
        }
        return sonet_minute15_ocn_reports;
    }

    if(child_yang_name == "sonet-minute15-ocn-thresholds")
    {
        if(sonet_minute15_ocn_thresholds == nullptr)
        {
            sonet_minute15_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>();
        }
        return sonet_minute15_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15_ocn_reports != nullptr)
    {
        _children["sonet-minute15-ocn-reports"] = sonet_minute15_ocn_reports;
    }

    if(sonet_minute15_ocn_thresholds != nullptr)
    {
        _children["sonet-minute15-ocn-thresholds"] = sonet_minute15_ocn_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-reports" || name == "sonet-minute15-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReports()
    :
    sonet_minute15_ocn_report(this, {"ocn_report"})
{

    yang_name = "sonet-minute15-ocn-reports"; yang_parent_name = "sonet-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::~SonetMinute15OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_ocn_report.len(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_report.len(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport>();
        ent_->parent = this;
        sonet_minute15_ocn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_ocn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::SonetMinute15OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"}
{

    yang_name = "sonet-minute15-ocn-report"; yang_parent_name = "sonet-minute15-ocn-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::~SonetMinute15OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_data() const
{
    if (is_presence_container) return true;
    return ocn_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-report";
    ADD_KEY_TOKEN(ocn_report, "ocn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThresholds()
    :
    sonet_minute15_ocn_threshold(this, {"ocn_threshold"})
{

    yang_name = "sonet-minute15-ocn-thresholds"; yang_parent_name = "sonet-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::~SonetMinute15OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.len(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.len(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold>();
        ent_->parent = this;
        sonet_minute15_ocn_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_ocn_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::SonetMinute15OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::uint32, "ocn-threshold-value"}
{

    yang_name = "sonet-minute15-ocn-threshold"; yang_parent_name = "sonet-minute15-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::~SonetMinute15OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-threshold";
    ADD_KEY_TOKEN(ocn_threshold, "ocn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp()
    :
    hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>())
{
    hour24_gfp->parent = this;

    yang_name = "hour24-gfp"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::~Hour24Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_data() const
{
    if (is_presence_container) return true;
    return (hour24_gfp !=  nullptr && hour24_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp == nullptr)
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>();
        }
        return hour24_gfp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_gfp != nullptr)
    {
        _children["hour24-gfp"] = hour24_gfp;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24Gfp_()
    :
    hour24_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>())
    , hour24_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>())
{
    hour24_gfp_reports->parent = this;
    hour24_gfp_thresholds->parent = this;

    yang_name = "hour24-gfp"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::~Hour24Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_data() const
{
    if (is_presence_container) return true;
    return (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_data())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_operation())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-reports")
    {
        if(hour24_gfp_reports == nullptr)
        {
            hour24_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>();
        }
        return hour24_gfp_reports;
    }

    if(child_yang_name == "hour24-gfp-thresholds")
    {
        if(hour24_gfp_thresholds == nullptr)
        {
            hour24_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>();
        }
        return hour24_gfp_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_gfp_reports != nullptr)
    {
        _children["hour24-gfp-reports"] = hour24_gfp_reports;
    }

    if(hour24_gfp_thresholds != nullptr)
    {
        _children["hour24-gfp-thresholds"] = hour24_gfp_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-reports" || name == "hour24-gfp-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReports()
    :
    hour24_gfp_report(this, {"gfp_report"})
{

    yang_name = "hour24-gfp-reports"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::~Hour24GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_gfp_report.len(); index++)
    {
        if(hour24_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_report.len(); index++)
    {
        if(hour24_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport>();
        ent_->parent = this;
        hour24_gfp_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_gfp_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::Hour24GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{

    yang_name = "hour24-gfp-report"; yang_parent_name = "hour24-gfp-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::~Hour24GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_data() const
{
    if (is_presence_container) return true;
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-report";
    ADD_KEY_TOKEN(gfp_report, "gfp-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.yfilter)) leaf_name_data.push_back(gfp_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
        gfp_report.value_namespace = name_space;
        gfp_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-report")
    {
        gfp_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThresholds()
    :
    hour24_gfp_threshold(this, {"gfp_threshold"})
{

    yang_name = "hour24-gfp-thresholds"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::~Hour24GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_gfp_threshold.len(); index++)
    {
        if(hour24_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_threshold.len(); index++)
    {
        if(hour24_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold>();
        ent_->parent = this;
        hour24_gfp_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_gfp_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::Hour24GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::uint32, "gfp-threshold-value"}
{

    yang_name = "hour24-gfp-threshold"; yang_parent_name = "hour24-gfp-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::~Hour24GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_data() const
{
    if (is_presence_container) return true;
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_threshold.yfilter)
	|| ydk::is_set(gfp_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-threshold";
    ADD_KEY_TOKEN(gfp_threshold, "gfp-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.yfilter)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.yfilter)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
        gfp_threshold.value_namespace = name_space;
        gfp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
        gfp_threshold_value.value_namespace = name_space;
        gfp_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold.yfilter = yfilter;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-threshold" || name == "gfp-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::EthernetHour24()
    :
    hour24_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>())
{
    hour24_ether->parent = this;

    yang_name = "ethernet-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::~EthernetHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_data() const
{
    if (is_presence_container) return true;
    return (hour24_ether !=  nullptr && hour24_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_ether !=  nullptr && hour24_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether")
    {
        if(hour24_ether == nullptr)
        {
            hour24_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>();
        }
        return hour24_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_ether != nullptr)
    {
        _children["hour24-ether"] = hour24_ether;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24Ether()
    :
    hour24_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>())
    , hour24_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>())
{
    hour24_ether_thresholds->parent = this;
    hour24_ether_reports->parent = this;

    yang_name = "hour24-ether"; yang_parent_name = "ethernet-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::~Hour24Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_data() const
{
    if (is_presence_container) return true;
    return (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_data())
	|| (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_operation())
	|| (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-thresholds")
    {
        if(hour24_ether_thresholds == nullptr)
        {
            hour24_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>();
        }
        return hour24_ether_thresholds;
    }

    if(child_yang_name == "hour24-ether-reports")
    {
        if(hour24_ether_reports == nullptr)
        {
            hour24_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>();
        }
        return hour24_ether_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_ether_thresholds != nullptr)
    {
        _children["hour24-ether-thresholds"] = hour24_ether_thresholds;
    }

    if(hour24_ether_reports != nullptr)
    {
        _children["hour24-ether-reports"] = hour24_ether_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-thresholds" || name == "hour24-ether-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThresholds()
    :
    hour24_ether_threshold(this, {"ether_threshold"})
{

    yang_name = "hour24-ether-thresholds"; yang_parent_name = "hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::~Hour24EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_ether_threshold.len(); index++)
    {
        if(hour24_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_threshold.len(); index++)
    {
        if(hour24_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold>();
        ent_->parent = this;
        hour24_ether_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_ether_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::Hour24EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::uint32, "ether-threshold-value"}
{

    yang_name = "hour24-ether-threshold"; yang_parent_name = "hour24-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::~Hour24EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-threshold";
    ADD_KEY_TOKEN(ether_threshold, "ether-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReports()
    :
    hour24_ether_report(this, {"ether_report"})
{

    yang_name = "hour24-ether-reports"; yang_parent_name = "hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::~Hour24EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_ether_report.len(); index++)
    {
        if(hour24_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_report.len(); index++)
    {
        if(hour24_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport>();
        ent_->parent = this;
        hour24_ether_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_ether_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::Hour24EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "hour24-ether-report"; yang_parent_name = "hour24-ether-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::~Hour24EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_data() const
{
    if (is_presence_container) return true;
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-report";
    ADD_KEY_TOKEN(ether_report, "ether-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcms()
    :
    minute15otn_tcm(this, {"tcm_number"})
{

    yang_name = "minute15otn-tcms"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::~Minute15otnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15otn_tcm.len(); index++)
    {
        if(minute15otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm.len(); index++)
    {
        if(minute15otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-tcm")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm>();
        ent_->parent = this;
        minute15otn_tcm.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15otn_tcm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-tcm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcm()
    :
    tcm_number{YType::uint32, "tcm-number"}
        ,
    min15_otn_tcm_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes>())
    , minute15otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports>())
{
    min15_otn_tcm_threshes->parent = this;
    minute15otn_tcm_reports->parent = this;

    yang_name = "minute15otn-tcm"; yang_parent_name = "minute15otn-tcms"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::~Minute15otnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::has_data() const
{
    if (is_presence_container) return true;
    return tcm_number.is_set
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_data())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcm_number.yfilter)
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_operation())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm";
    ADD_KEY_TOKEN(tcm_number, "tcm-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.yfilter)) leaf_name_data.push_back(tcm_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-tcm-threshes")
    {
        if(min15_otn_tcm_threshes == nullptr)
        {
            min15_otn_tcm_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes>();
        }
        return min15_otn_tcm_threshes;
    }

    if(child_yang_name == "minute15otn-tcm-reports")
    {
        if(minute15otn_tcm_reports == nullptr)
        {
            minute15otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports>();
        }
        return minute15otn_tcm_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min15_otn_tcm_threshes != nullptr)
    {
        _children["min15-otn-tcm-threshes"] = min15_otn_tcm_threshes;
    }

    if(minute15otn_tcm_reports != nullptr)
    {
        _children["minute15otn-tcm-reports"] = minute15otn_tcm_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
        tcm_number.value_namespace = name_space;
        tcm_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcm-number")
    {
        tcm_number.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-tcm-threshes" || name == "minute15otn-tcm-reports" || name == "tcm-number")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThreshes()
    :
    min15_otn_tcm_thresh(this, {"otn_threshold"})
{

    yang_name = "min15-otn-tcm-threshes"; yang_parent_name = "minute15otn-tcm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::~Min15OtnTcmThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<min15_otn_tcm_thresh.len(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_tcm_thresh.len(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-tcm-thresh")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh>();
        ent_->parent = this;
        min15_otn_tcm_thresh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : min15_otn_tcm_thresh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-tcm-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::Min15OtnTcmThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "min15-otn-tcm-thresh"; yang_parent_name = "min15-otn-tcm-threshes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::~Min15OtnTcmThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-thresh";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReports()
    :
    minute15otn_tcm_report(this, {"otn_report"})
{

    yang_name = "minute15otn-tcm-reports"; yang_parent_name = "minute15otn-tcm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::~Minute15otnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15otn_tcm_report.len(); index++)
    {
        if(minute15otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm_report.len(); index++)
    {
        if(minute15otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-tcm-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport>();
        ent_->parent = this;
        minute15otn_tcm_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15otn_tcm_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-tcm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::Minute15otnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15otn-tcm-report"; yang_parent_name = "minute15otn-tcm-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::~Minute15otnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24()
    :
    oc_hour24_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>())
{
    oc_hour24_ocn->parent = this;

    yang_name = "oc-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::~OcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_data() const
{
    if (is_presence_container) return true;
    return (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn")
    {
        if(oc_hour24_ocn == nullptr)
        {
            oc_hour24_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>();
        }
        return oc_hour24_ocn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oc_hour24_ocn != nullptr)
    {
        _children["oc-hour24-ocn"] = oc_hour24_ocn;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24Ocn()
    :
    oc_hour24_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>())
    , oc_hour24_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>())
{
    oc_hour24_ocn_reports->parent = this;
    oc_hour24_ocn_thresholds->parent = this;

    yang_name = "oc-hour24-ocn"; yang_parent_name = "oc-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::~OcHour24Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_data() const
{
    if (is_presence_container) return true;
    return (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_data())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_operation())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-reports")
    {
        if(oc_hour24_ocn_reports == nullptr)
        {
            oc_hour24_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>();
        }
        return oc_hour24_ocn_reports;
    }

    if(child_yang_name == "oc-hour24-ocn-thresholds")
    {
        if(oc_hour24_ocn_thresholds == nullptr)
        {
            oc_hour24_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>();
        }
        return oc_hour24_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oc_hour24_ocn_reports != nullptr)
    {
        _children["oc-hour24-ocn-reports"] = oc_hour24_ocn_reports;
    }

    if(oc_hour24_ocn_thresholds != nullptr)
    {
        _children["oc-hour24-ocn-thresholds"] = oc_hour24_ocn_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-reports" || name == "oc-hour24-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReports()
    :
    oc_hour24_ocn_report(this, {"ocn_report"})
{

    yang_name = "oc-hour24-ocn-reports"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::~OcHour24OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_hour24_ocn_report.len(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_report.len(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport>();
        ent_->parent = this;
        oc_hour24_ocn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oc_hour24_ocn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::OcHour24OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "oc-hour24-ocn-report"; yang_parent_name = "oc-hour24-ocn-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::~OcHour24OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_data() const
{
    if (is_presence_container) return true;
    return ocn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-report";
    ADD_KEY_TOKEN(ocn_report, "ocn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThresholds()
    :
    oc_hour24_ocn_threshold(this, {"ocn_threshold"})
{

    yang_name = "oc-hour24-ocn-thresholds"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::~OcHour24OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.len(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.len(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold>();
        ent_->parent = this;
        oc_hour24_ocn_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oc_hour24_ocn_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::OcHour24OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::uint32, "ocn-threshold-value"}
{

    yang_name = "oc-hour24-ocn-threshold"; yang_parent_name = "oc-hour24-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::~OcHour24OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-threshold";
    ADD_KEY_TOKEN(ocn_threshold, "ocn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::EthernetMinute15()
    :
    minute15_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>())
{
    minute15_ether->parent = this;

    yang_name = "ethernet-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::~EthernetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_ether !=  nullptr && minute15_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether !=  nullptr && minute15_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether")
    {
        if(minute15_ether == nullptr)
        {
            minute15_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>();
        }
        return minute15_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_ether != nullptr)
    {
        _children["minute15-ether"] = minute15_ether;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15Ether()
    :
    minute15_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>())
    , minute15_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>())
{
    minute15_ether_thresholds->parent = this;
    minute15_ether_reports->parent = this;

    yang_name = "minute15-ether"; yang_parent_name = "ethernet-minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::~Minute15Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_data())
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_operation())
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-thresholds")
    {
        if(minute15_ether_thresholds == nullptr)
        {
            minute15_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>();
        }
        return minute15_ether_thresholds;
    }

    if(child_yang_name == "minute15-ether-reports")
    {
        if(minute15_ether_reports == nullptr)
        {
            minute15_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>();
        }
        return minute15_ether_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_ether_thresholds != nullptr)
    {
        _children["minute15-ether-thresholds"] = minute15_ether_thresholds;
    }

    if(minute15_ether_reports != nullptr)
    {
        _children["minute15-ether-reports"] = minute15_ether_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-thresholds" || name == "minute15-ether-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThresholds()
    :
    minute15_ether_threshold(this, {"ether_threshold"})
{

    yang_name = "minute15-ether-thresholds"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::~Minute15EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_ether_threshold.len(); index++)
    {
        if(minute15_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_threshold.len(); index++)
    {
        if(minute15_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold>();
        ent_->parent = this;
        minute15_ether_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_ether_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::Minute15EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::uint32, "ether-threshold-value"}
{

    yang_name = "minute15-ether-threshold"; yang_parent_name = "minute15-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::~Minute15EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-threshold";
    ADD_KEY_TOKEN(ether_threshold, "ether-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReports()
    :
    minute15_ether_report(this, {"ether_report"})
{

    yang_name = "minute15-ether-reports"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::~Minute15EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_ether_report.len(); index++)
    {
        if(minute15_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_report.len(); index++)
    {
        if(minute15_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport>();
        ent_->parent = this;
        minute15_ether_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_ether_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::Minute15EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "minute15-ether-report"; yang_parent_name = "minute15-ether-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::~Minute15EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_data() const
{
    if (is_presence_container) return true;
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-report";
    ADD_KEY_TOKEN(ether_report, "ether-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24()
    :
    ho_vc_hour24ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc>())
{
    ho_vc_hour24ho_vc->parent = this;

    yang_name = "ho-vc-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::~HoVcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_data() const
{
    if (is_presence_container) return true;
    return (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc")
    {
        if(ho_vc_hour24ho_vc == nullptr)
        {
            ho_vc_hour24ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc>();
        }
        return ho_vc_hour24ho_vc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ho_vc_hour24ho_vc != nullptr)
    {
        _children["ho-vc-hour24ho-vc"] = ho_vc_hour24ho_vc;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVc()
    :
    ho_vc_hour24ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports>())
    , ho_vc_hour24ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds>())
{
    ho_vc_hour24ho_vc_reports->parent = this;
    ho_vc_hour24ho_vc_thresholds->parent = this;

    yang_name = "ho-vc-hour24ho-vc"; yang_parent_name = "ho-vc-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::~HoVcHour24hoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::has_data() const
{
    if (is_presence_container) return true;
    return (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_data())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_operation())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-reports")
    {
        if(ho_vc_hour24ho_vc_reports == nullptr)
        {
            ho_vc_hour24ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports>();
        }
        return ho_vc_hour24ho_vc_reports;
    }

    if(child_yang_name == "ho-vc-hour24ho-vc-thresholds")
    {
        if(ho_vc_hour24ho_vc_thresholds == nullptr)
        {
            ho_vc_hour24ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds>();
        }
        return ho_vc_hour24ho_vc_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ho_vc_hour24ho_vc_reports != nullptr)
    {
        _children["ho-vc-hour24ho-vc-reports"] = ho_vc_hour24ho_vc_reports;
    }

    if(ho_vc_hour24ho_vc_thresholds != nullptr)
    {
        _children["ho-vc-hour24ho-vc-thresholds"] = ho_vc_hour24ho_vc_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-reports" || name == "ho-vc-hour24ho-vc-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReports()
    :
    ho_vc_hour24ho_vc_report(this, {"ho_vc_report"})
{

    yang_name = "ho-vc-hour24ho-vc-reports"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::~HoVcHour24hoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.len(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.len(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport>();
        ent_->parent = this;
        ho_vc_hour24ho_vc_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ho_vc_hour24ho_vc_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::HoVcHour24hoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "ho-vc-hour24ho-vc-report"; yang_parent_name = "ho-vc-hour24ho-vc-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::~HoVcHour24hoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::has_data() const
{
    if (is_presence_container) return true;
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-report";
    ADD_KEY_TOKEN(ho_vc_report, "ho-vc-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.yfilter)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report = value;
        ho_vc_report.value_namespace = name_space;
        ho_vc_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThresholds()
    :
    ho_vc_hour24ho_vc_threshold(this, {"ho_vc_threshold"})
{

    yang_name = "ho-vc-hour24ho-vc-thresholds"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::~HoVcHour24hoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.len(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.len(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold>();
        ent_->parent = this;
        ho_vc_hour24ho_vc_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ho_vc_hour24ho_vc_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::HoVcHour24hoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::uint32, "ho-vc-threshold-value"}
{

    yang_name = "ho-vc-hour24ho-vc-threshold"; yang_parent_name = "ho-vc-hour24ho-vc-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::~HoVcHour24hoVcThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ho_vc_threshold.is_set
	|| ho_vc_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_threshold.yfilter)
	|| ydk::is_set(ho_vc_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-threshold";
    ADD_KEY_TOKEN(ho_vc_threshold, "ho-vc-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.yfilter)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.yfilter)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold = value;
        ho_vc_threshold.value_namespace = name_space;
        ho_vc_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value = value;
        ho_vc_threshold_value.value_namespace = name_space;
        ho_vc_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold.yfilter = yfilter;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-threshold" || name == "ho-vc-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30()
    :
    second30pcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs>())
    , second30fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec>())
    , second30_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>())
    , second30secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif>())
    , second30secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx>())
    , second30otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn>())
    , second30secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx>())
{
    second30pcs->parent = this;
    second30fec->parent = this;
    second30_optics->parent = this;
    second30secyif->parent = this;
    second30secyrx->parent = this;
    second30otn->parent = this;
    second30secytx->parent = this;

    yang_name = "second30"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::~Second30()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_data() const
{
    if (is_presence_container) return true;
    return (second30pcs !=  nullptr && second30pcs->has_data())
	|| (second30fec !=  nullptr && second30fec->has_data())
	|| (second30_optics !=  nullptr && second30_optics->has_data())
	|| (second30secyif !=  nullptr && second30secyif->has_data())
	|| (second30secyrx !=  nullptr && second30secyrx->has_data())
	|| (second30otn !=  nullptr && second30otn->has_data())
	|| (second30secytx !=  nullptr && second30secytx->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_operation() const
{
    return is_set(yfilter)
	|| (second30pcs !=  nullptr && second30pcs->has_operation())
	|| (second30fec !=  nullptr && second30fec->has_operation())
	|| (second30_optics !=  nullptr && second30_optics->has_operation())
	|| (second30secyif !=  nullptr && second30secyif->has_operation())
	|| (second30secyrx !=  nullptr && second30secyrx->has_operation())
	|| (second30otn !=  nullptr && second30otn->has_operation())
	|| (second30secytx !=  nullptr && second30secytx->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs")
    {
        if(second30pcs == nullptr)
        {
            second30pcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs>();
        }
        return second30pcs;
    }

    if(child_yang_name == "second30fec")
    {
        if(second30fec == nullptr)
        {
            second30fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec>();
        }
        return second30fec;
    }

    if(child_yang_name == "second30-optics")
    {
        if(second30_optics == nullptr)
        {
            second30_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>();
        }
        return second30_optics;
    }

    if(child_yang_name == "second30secyif")
    {
        if(second30secyif == nullptr)
        {
            second30secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif>();
        }
        return second30secyif;
    }

    if(child_yang_name == "second30secyrx")
    {
        if(second30secyrx == nullptr)
        {
            second30secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx>();
        }
        return second30secyrx;
    }

    if(child_yang_name == "second30otn")
    {
        if(second30otn == nullptr)
        {
            second30otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn>();
        }
        return second30otn;
    }

    if(child_yang_name == "second30secytx")
    {
        if(second30secytx == nullptr)
        {
            second30secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx>();
        }
        return second30secytx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30pcs != nullptr)
    {
        _children["second30pcs"] = second30pcs;
    }

    if(second30fec != nullptr)
    {
        _children["second30fec"] = second30fec;
    }

    if(second30_optics != nullptr)
    {
        _children["second30-optics"] = second30_optics;
    }

    if(second30secyif != nullptr)
    {
        _children["second30secyif"] = second30secyif;
    }

    if(second30secyrx != nullptr)
    {
        _children["second30secyrx"] = second30secyrx;
    }

    if(second30otn != nullptr)
    {
        _children["second30otn"] = second30otn;
    }

    if(second30secytx != nullptr)
    {
        _children["second30secytx"] = second30secytx;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs" || name == "second30fec" || name == "second30-optics" || name == "second30secyif" || name == "second30secyrx" || name == "second30otn" || name == "second30secytx")
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

