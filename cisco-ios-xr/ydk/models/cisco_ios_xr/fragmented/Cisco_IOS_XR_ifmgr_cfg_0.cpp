
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
    maintenance_embargo{YType::boolean, "Cisco-IOS-XR-dwdm-ui-cfg:maintenance-embargo"},
    track_name{YType::str, "Cisco-IOS-XR-manageability-object-tracking-cfg:track-name"},
    fast_shutdown{YType::empty, "Cisco-IOS-XR-mdrv-lib-cfg:fast-shutdown"},
    mac_addr{YType::str, "Cisco-IOS-XR-mdrv-lib-cfg:mac-addr"},
    laser_squelch{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:laser-squelch"},
    holdoff_time{YType::uint32, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:holdoff-time"},
    perf_mon_disable{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:perf-mon-disable"}
        ,
    dampening(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>())
    , mtus(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus>())
    , encapsulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Encapsulation>())
    , ipv4_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network>())
    , ipv4_network_forwarding(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding>())
    , nve(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>())
    , afs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>())
    , cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp>())
    , otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>())
    , mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls>())
    , pppoe(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>())
    , ipv4_flow_spec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec>())
    , ipv6_flow_spec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec>())
    , pseudowire_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>())
    , pseudowire_iw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>())
    , bvi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bvi>())
    , l2_transport(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport>())
    , cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp>())
    , cdp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>())
    , ptp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp>())
    , statistics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>())
    , vlan_sub_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration>())
    , ethernet_service(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService>())
    , ethernet_bng(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng>())
    , mac_accounting(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>())
    , ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures>())
    , carrier_delay(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CarrierDelay>())
    , vlan_trunk_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration>())
    , cisco_ios_xr_ppp_ma_lcp_cfg_ppp__(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp>())
    , frequency_synchronization(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization>())
    , ipv6_neighbor(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>())
    , aaa_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>())
    , dwdm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>())
    , ssrp_session(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>())
    , dot1x_interface(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface>())
    , subscriber(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>())
    , bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd>())
    , bundle(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle>())
    , lacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp>())
    , bundle_member(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember>())
    , mlacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>())
    , portmode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Portmode>())
    , tunnel_ip(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>())
    , optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>())
    , qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>())
    , lldp(nullptr) // presence node
    , ipv6_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter>())
    , es_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter>())
    , ipv4_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter>())
    , span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>())
    , nv_satellite_access(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess>())
    , nv_satellite_fabric_link(nullptr) // presence node
    , nv_satellite_fabric_network(nullptr) // presence node
    , service_policies(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>())
    , cisco_ios_xr_ppp_ma_cfg_ppp___(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp>())
    , performance_management(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>())
    , dagrs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>())
    , ipv4arp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4arp>())
    , net_flow(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>())
    , tunnel_te_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes>())
    , transport_profile_tunnel(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel>())
    , mte_tunnel_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes>())
    , pbr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>())
    , loopbacks(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks>())
    , macsec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>())
    , ethernet(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>())
    , cisco_ios_xr_ppp_ma_fsm_cfg_ppp____(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp>())
    , ipv6_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>())
    , wanphy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Wanphy>())
{
    dampening->parent = this;
    mtus->parent = this;
    encapsulation->parent = this;
    ipv4_network->parent = this;
    ipv4_network_forwarding->parent = this;
    nve->parent = this;
    afs->parent = this;
    cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->parent = this;
    otu->parent = this;
    mpls->parent = this;
    pppoe->parent = this;
    ipv4_flow_spec->parent = this;
    ipv6_flow_spec->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;
    bvi->parent = this;
    l2_transport->parent = this;
    cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_->parent = this;
    cdp->parent = this;
    ptp->parent = this;
    statistics->parent = this;
    vlan_sub_configuration->parent = this;
    ethernet_service->parent = this;
    ethernet_bng->parent = this;
    mac_accounting->parent = this;
    ethernet_features->parent = this;
    carrier_delay->parent = this;
    vlan_trunk_configuration->parent = this;
    cisco_ios_xr_ppp_ma_lcp_cfg_ppp__->parent = this;
    frequency_synchronization->parent = this;
    ipv6_neighbor->parent = this;
    aaa_table->parent = this;
    dwdm->parent = this;
    ssrp_session->parent = this;
    dot1x_interface->parent = this;
    subscriber->parent = this;
    bfd->parent = this;
    bundle->parent = this;
    lacp->parent = this;
    bundle_member->parent = this;
    mlacp->parent = this;
    portmode->parent = this;
    tunnel_ip->parent = this;
    optics->parent = this;
    qos->parent = this;
    ipv6_packet_filter->parent = this;
    es_packet_filter->parent = this;
    ipv4_packet_filter->parent = this;
    span_monitor_sessions->parent = this;
    nv_satellite_access->parent = this;
    service_policies->parent = this;
    cisco_ios_xr_ppp_ma_cfg_ppp___->parent = this;
    performance_management->parent = this;
    dagrs->parent = this;
    ipv4arp->parent = this;
    net_flow->parent = this;
    tunnel_te_attributes->parent = this;
    transport_profile_tunnel->parent = this;
    mte_tunnel_attributes->parent = this;
    pbr->parent = this;
    loopbacks->parent = this;
    macsec->parent = this;
    ethernet->parent = this;
    cisco_ios_xr_ppp_ma_fsm_cfg_ppp____->parent = this;
    ipv6_network->parent = this;
    wanphy->parent = this;

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
	|| maintenance_embargo.is_set
	|| track_name.is_set
	|| fast_shutdown.is_set
	|| mac_addr.is_set
	|| laser_squelch.is_set
	|| holdoff_time.is_set
	|| perf_mon_disable.is_set
	|| (dampening !=  nullptr && dampening->has_data())
	|| (mtus !=  nullptr && mtus->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_data())
	|| (nve !=  nullptr && nve->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (ipv4_flow_spec !=  nullptr && ipv4_flow_spec->has_data())
	|| (ipv6_flow_spec !=  nullptr && ipv6_flow_spec->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (bvi !=  nullptr && bvi->has_data())
	|| (l2_transport !=  nullptr && l2_transport->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_ !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (ptp !=  nullptr && ptp->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_data())
	|| (ethernet_service !=  nullptr && ethernet_service->has_data())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_data())
	|| (mac_accounting !=  nullptr && mac_accounting->has_data())
	|| (ethernet_features !=  nullptr && ethernet_features->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_data())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp__ !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp__->has_data())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (aaa_table !=  nullptr && aaa_table->has_data())
	|| (dwdm !=  nullptr && dwdm->has_data())
	|| (ssrp_session !=  nullptr && ssrp_session->has_data())
	|| (dot1x_interface !=  nullptr && dot1x_interface->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bundle !=  nullptr && bundle->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (bundle_member !=  nullptr && bundle_member->has_data())
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (portmode !=  nullptr && portmode->has_data())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_data())
	|| (optics !=  nullptr && optics->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_data())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_data())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_data())
	|| (service_policies !=  nullptr && service_policies->has_data())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp___ !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp___->has_data())
	|| (performance_management !=  nullptr && performance_management->has_data())
	|| (dagrs !=  nullptr && dagrs->has_data())
	|| (ipv4arp !=  nullptr && ipv4arp->has_data())
	|| (net_flow !=  nullptr && net_flow->has_data())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_data())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_data())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (loopbacks !=  nullptr && loopbacks->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp____ !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp____->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
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
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(maintenance_embargo.yfilter)
	|| ydk::is_set(track_name.yfilter)
	|| ydk::is_set(fast_shutdown.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(laser_squelch.yfilter)
	|| ydk::is_set(holdoff_time.yfilter)
	|| ydk::is_set(perf_mon_disable.yfilter)
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (mtus !=  nullptr && mtus->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_operation())
	|| (nve !=  nullptr && nve->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ipv4_flow_spec !=  nullptr && ipv4_flow_spec->has_operation())
	|| (ipv6_flow_spec !=  nullptr && ipv6_flow_spec->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (bvi !=  nullptr && bvi->has_operation())
	|| (l2_transport !=  nullptr && l2_transport->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_ !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_operation())
	|| (ethernet_service !=  nullptr && ethernet_service->has_operation())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_operation())
	|| (mac_accounting !=  nullptr && mac_accounting->has_operation())
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_operation())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp__ !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp__->has_operation())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (aaa_table !=  nullptr && aaa_table->has_operation())
	|| (dwdm !=  nullptr && dwdm->has_operation())
	|| (ssrp_session !=  nullptr && ssrp_session->has_operation())
	|| (dot1x_interface !=  nullptr && dot1x_interface->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (bundle_member !=  nullptr && bundle_member->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (portmode !=  nullptr && portmode->has_operation())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_operation())
	|| (optics !=  nullptr && optics->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_operation())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_operation())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_operation())
	|| (service_policies !=  nullptr && service_policies->has_operation())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp___ !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp___->has_operation())
	|| (performance_management !=  nullptr && performance_management->has_operation())
	|| (dagrs !=  nullptr && dagrs->has_operation())
	|| (ipv4arp !=  nullptr && ipv4arp->has_operation())
	|| (net_flow !=  nullptr && net_flow->has_operation())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_operation())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_operation())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (loopbacks !=  nullptr && loopbacks->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp____ !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp____->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
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
    if (maintenance_embargo.is_set || is_set(maintenance_embargo.yfilter)) leaf_name_data.push_back(maintenance_embargo.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (fast_shutdown.is_set || is_set(fast_shutdown.yfilter)) leaf_name_data.push_back(fast_shutdown.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (laser_squelch.is_set || is_set(laser_squelch.yfilter)) leaf_name_data.push_back(laser_squelch.get_name_leafdata());
    if (holdoff_time.is_set || is_set(holdoff_time.yfilter)) leaf_name_data.push_back(holdoff_time.get_name_leafdata());
    if (perf_mon_disable.is_set || is_set(perf_mon_disable.yfilter)) leaf_name_data.push_back(perf_mon_disable.get_name_leafdata());

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

    if(child_yang_name == "Cisco-IOS-XR-tunnel-nve-cfg:nve")
    {
        if(nve == nullptr)
        {
            nve = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>();
        }
        return nve;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-rsi-cfg:afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-controller-otu-cfg:otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-io-cfg:mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-pppoe-ma-cmd-cfg:pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>();
        }
        return pppoe;
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

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcp-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_ == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_;
    }

    if(child_yang_name == "Cisco-IOS-XR-cdp-cfg:cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ptp-cfg:ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp>();
        }
        return ptp;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-statsd-cfg:statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>();
        }
        return statistics;
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

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-lcp-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp__ == nullptr)
        {
            cisco_ios_xr_ppp_ma_lcp_cfg_ppp__ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_lcp_cfg_ppp__;
    }

    if(child_yang_name == "Cisco-IOS-XR-freqsync-cfg:frequency-synchronization")
    {
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table")
    {
        if(aaa_table == nullptr)
        {
            aaa_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>();
        }
        return aaa_table;
    }

    if(child_yang_name == "Cisco-IOS-XR-dwdm-ui-cfg:dwdm")
    {
        if(dwdm == nullptr)
        {
            dwdm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>();
        }
        return dwdm;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session")
    {
        if(ssrp_session == nullptr)
        {
            ssrp_session = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>();
        }
        return ssrp_session;
    }

    if(child_yang_name == "Cisco-IOS-XR-dot1x-if-cfg:dot1x-interface")
    {
        if(dot1x_interface == nullptr)
        {
            dot1x_interface = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface>();
        }
        return dot1x_interface;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-ipsub-cfg:subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>();
        }
        return subscriber;
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

    if(child_yang_name == "Cisco-IOS-XR-ncs5500-coherent-portmode-cfg:portmode")
    {
        if(portmode == nullptr)
        {
            portmode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Portmode>();
        }
        return portmode;
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

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-cfg:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-lldp-cfg:lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp>();
        }
        return lldp;
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

    if(child_yang_name == "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
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

    if(child_yang_name == "Cisco-IOS-XR-iedge4710-cfg:service-policies")
    {
        if(service_policies == nullptr)
        {
            service_policies = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>();
        }
        return service_policies;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_cfg_ppp___ == nullptr)
        {
            cisco_ios_xr_ppp_ma_cfg_ppp___ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_cfg_ppp___;
    }

    if(child_yang_name == "Cisco-IOS-XR-pmengine-cfg:performance-management")
    {
        if(performance_management == nullptr)
        {
            performance_management = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>();
        }
        return performance_management;
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

    if(child_yang_name == "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow")
    {
        if(net_flow == nullptr)
        {
            net_flow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>();
        }
        return net_flow;
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

    if(child_yang_name == "Cisco-IOS-XR-pbr-cfg:pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:loopbacks")
    {
        if(loopbacks == nullptr)
        {
            loopbacks = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks>();
        }
        return loopbacks;
    }

    if(child_yang_name == "Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "Cisco-IOS-XR-drivers-media-eth-cfg:ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-fsm-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp____ == nullptr)
        {
            cisco_ios_xr_ppp_ma_fsm_cfg_ppp____ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_fsm_cfg_ppp____;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>();
        }
        return ipv6_network;
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

    if(ipv4_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-io-cfg:ipv4-network"] = ipv4_network;
    }

    if(ipv4_network_forwarding != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-io-cfg:ipv4-network-forwarding"] = ipv4_network_forwarding;
    }

    if(nve != nullptr)
    {
        _children["Cisco-IOS-XR-tunnel-nve-cfg:nve"] = nve;
    }

    if(afs != nullptr)
    {
        _children["Cisco-IOS-XR-infra-rsi-cfg:afs"] = afs;
    }

    if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:ppp"] = cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
    }

    if(otu != nullptr)
    {
        _children["Cisco-IOS-XR-controller-otu-cfg:otu"] = otu;
    }

    if(mpls != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-io-cfg:mpls"] = mpls;
    }

    if(pppoe != nullptr)
    {
        _children["Cisco-IOS-XR-subscriber-pppoe-ma-cmd-cfg:pppoe"] = pppoe;
    }

    if(ipv4_flow_spec != nullptr)
    {
        _children["Cisco-IOS-XR-flowspec-cfg:ipv4-flow-spec"] = ipv4_flow_spec;
    }

    if(ipv6_flow_spec != nullptr)
    {
        _children["Cisco-IOS-XR-flowspec-cfg:ipv6-flow-spec"] = ipv6_flow_spec;
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

    if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_ != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-ipcp-cfg:ppp"] = cisco_ios_xr_ppp_ma_ipcp_cfg_ppp_;
    }

    if(cdp != nullptr)
    {
        _children["Cisco-IOS-XR-cdp-cfg:cdp"] = cdp;
    }

    if(ptp != nullptr)
    {
        _children["Cisco-IOS-XR-ptp-cfg:ptp"] = ptp;
    }

    if(statistics != nullptr)
    {
        _children["Cisco-IOS-XR-infra-statsd-cfg:statistics"] = statistics;
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

    if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp__ != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-lcp-cfg:ppp"] = cisco_ios_xr_ppp_ma_lcp_cfg_ppp__;
    }

    if(frequency_synchronization != nullptr)
    {
        _children["Cisco-IOS-XR-freqsync-cfg:frequency-synchronization"] = frequency_synchronization;
    }

    if(ipv6_neighbor != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor"] = ipv6_neighbor;
    }

    if(aaa_table != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table"] = aaa_table;
    }

    if(dwdm != nullptr)
    {
        _children["Cisco-IOS-XR-dwdm-ui-cfg:dwdm"] = dwdm;
    }

    if(ssrp_session != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session"] = ssrp_session;
    }

    if(dot1x_interface != nullptr)
    {
        _children["Cisco-IOS-XR-dot1x-if-cfg:dot1x-interface"] = dot1x_interface;
    }

    if(subscriber != nullptr)
    {
        _children["Cisco-IOS-XR-subscriber-ipsub-cfg:subscriber"] = subscriber;
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

    if(portmode != nullptr)
    {
        _children["Cisco-IOS-XR-ncs5500-coherent-portmode-cfg:portmode"] = portmode;
    }

    if(tunnel_ip != nullptr)
    {
        _children["Cisco-IOS-XR-tunnel-gre-cfg:tunnel-ip"] = tunnel_ip;
    }

    if(optics != nullptr)
    {
        _children["Cisco-IOS-XR-controller-optics-cfg:optics"] = optics;
    }

    if(qos != nullptr)
    {
        _children["Cisco-IOS-XR-qos-ma-cfg:qos"] = qos;
    }

    if(lldp != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-lldp-cfg:lldp"] = lldp;
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

    if(span_monitor_sessions != nullptr)
    {
        _children["Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions"] = span_monitor_sessions;
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

    if(service_policies != nullptr)
    {
        _children["Cisco-IOS-XR-iedge4710-cfg:service-policies"] = service_policies;
    }

    if(cisco_ios_xr_ppp_ma_cfg_ppp___ != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-cfg:ppp"] = cisco_ios_xr_ppp_ma_cfg_ppp___;
    }

    if(performance_management != nullptr)
    {
        _children["Cisco-IOS-XR-pmengine-cfg:performance-management"] = performance_management;
    }

    if(dagrs != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-arp-cfg:dagrs"] = dagrs;
    }

    if(ipv4arp != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp"] = ipv4arp;
    }

    if(net_flow != nullptr)
    {
        _children["Cisco-IOS-XR-traffmon-netflow-cfg:net-flow"] = net_flow;
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

    if(pbr != nullptr)
    {
        _children["Cisco-IOS-XR-pbr-cfg:pbr"] = pbr;
    }

    if(loopbacks != nullptr)
    {
        _children["Cisco-IOS-XR-drivers-icpe-ethernet-cfg:loopbacks"] = loopbacks;
    }

    if(macsec != nullptr)
    {
        _children["Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec"] = macsec;
    }

    if(ethernet != nullptr)
    {
        _children["Cisco-IOS-XR-drivers-media-eth-cfg:ethernet"] = ethernet;
    }

    if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp____ != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-fsm-cfg:ppp"] = cisco_ios_xr_ppp_ma_fsm_cfg_ppp____;
    }

    if(ipv6_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network"] = ipv6_network;
    }

    if(wanphy != nullptr)
    {
        _children["Cisco-IOS-XR-wanphy-ui-cfg:wanphy"] = wanphy;
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
}

bool InterfaceConfigurations::InterfaceConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening" || name == "mtus" || name == "encapsulation" || name == "ipv4-network" || name == "ipv4-network-forwarding" || name == "nve" || name == "afs" || name == "ppp" || name == "otu" || name == "mpls" || name == "pppoe" || name == "ipv4-flow-spec" || name == "ipv6-flow-spec" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "bvi" || name == "l2-transport" || name == "ppp" || name == "cdp" || name == "ptp" || name == "statistics" || name == "vlan-sub-configuration" || name == "ethernet-service" || name == "ethernet-bng" || name == "mac-accounting" || name == "ethernet-features" || name == "carrier-delay" || name == "vlan-trunk-configuration" || name == "ppp" || name == "frequency-synchronization" || name == "ipv6-neighbor" || name == "aaa-table" || name == "dwdm" || name == "ssrp-session" || name == "dot1x-interface" || name == "subscriber" || name == "bfd" || name == "bundle" || name == "lacp" || name == "bundle-member" || name == "mlacp" || name == "portmode" || name == "tunnel-ip" || name == "optics" || name == "qos" || name == "lldp" || name == "ipv6-packet-filter" || name == "es-packet-filter" || name == "ipv4-packet-filter" || name == "span-monitor-sessions" || name == "nv-satellite-access" || name == "nv-satellite-fabric-link" || name == "nv-satellite-fabric-network" || name == "service-policies" || name == "ppp" || name == "performance-management" || name == "dagrs" || name == "ipv4arp" || name == "net-flow" || name == "tunnel-te-attributes" || name == "transport-profile-tunnel" || name == "mte-tunnel-attributes" || name == "pbr" || name == "loopbacks" || name == "macsec" || name == "ethernet" || name == "ppp" || name == "ipv6-network" || name == "wanphy" || name == "active" || name == "interface-name" || name == "shutdown" || name == "interface-virtual" || name == "secondary-admin-state" || name == "interface-mode-non-physical" || name == "bandwidth" || name == "link-status" || name == "description" || name == "vrf" || name == "maintenance-embargo" || name == "track-name" || name == "fast-shutdown" || name == "mac-addr" || name == "laser-squelch" || name == "holdoff-time" || name == "perf-mon-disable")
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

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Ipv4Network()
    :
    forwarding_enable{YType::empty, "forwarding-enable"},
    icmp_mask_reply{YType::empty, "icmp-mask-reply"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"},
    point_to_point{YType::empty, "point-to-point"},
    mtu{YType::uint32, "mtu"}
        ,
    bgp_pa(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>())
    , verify(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>())
    , bgp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>())
    , addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>())
    , helper_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>())
{
    bgp_pa->parent = this;
    verify->parent = this;
    bgp->parent = this;
    addresses->parent = this;
    helper_addresses->parent = this;

    yang_name = "ipv4-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::~Ipv4Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_data() const
{
    if (is_presence_container) return true;
    return forwarding_enable.is_set
	|| icmp_mask_reply.is_set
	|| tcp_mss_adjust_enable.is_set
	|| ttl_propagate_disable.is_set
	|| point_to_point.is_set
	|| mtu.is_set
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_enable.yfilter)
	|| ydk::is_set(icmp_mask_reply.yfilter)
	|| ydk::is_set(tcp_mss_adjust_enable.yfilter)
	|| ydk::is_set(ttl_propagate_disable.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
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
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.yfilter)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.yfilter)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa == nullptr)
        {
            bgp_pa = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>();
        }
        return bgp_pa;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>();
        }
        return helper_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_pa != nullptr)
    {
        _children["bgp-pa"] = bgp_pa;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    if(helper_addresses != nullptr)
    {
        _children["helper-addresses"] = helper_addresses;
    }

    return _children;
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
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable.yfilter = yfilter;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-pa" || name == "verify" || name == "bgp" || name == "addresses" || name == "helper-addresses" || name == "forwarding-enable" || name == "icmp-mask-reply" || name == "tcp-mss-adjust-enable" || name == "ttl-propagate-disable" || name == "point-to-point" || name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::BgpPa()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>())
    , output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "bgp-pa"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::~BgpPa()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::Input()
    :
    source_accounting{YType::boolean, "source-accounting"},
    destination_accounting{YType::boolean, "destination-accounting"}
{

    yang_name = "input"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_data() const
{
    if (is_presence_container) return true;
    return source_accounting.is_set
	|| destination_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_accounting.yfilter)
	|| ydk::is_set(destination_accounting.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-accounting" || name == "destination-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::Output()
    :
    source_accounting{YType::boolean, "source-accounting"},
    destination_accounting{YType::boolean, "destination-accounting"}
{

    yang_name = "output"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_data() const
{
    if (is_presence_container) return true;
    return source_accounting.is_set
	|| destination_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_accounting.yfilter)
	|| ydk::is_set(destination_accounting.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-accounting" || name == "destination-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::Verify()
    :
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"},
    default_ping{YType::enumeration, "default-ping"}
{

    yang_name = "verify"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_data() const
{
    if (is_presence_container) return true;
    return reachable.is_set
	|| self_ping.is_set
	|| default_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable.yfilter)
	|| ydk::is_set(self_ping.yfilter)
	|| ydk::is_set(default_ping.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable.is_set || is_set(reachable.yfilter)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.yfilter)) leaf_name_data.push_back(self_ping.get_name_leafdata());
    if (default_ping.is_set || is_set(default_ping.yfilter)) leaf_name_data.push_back(default_ping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable")
    {
        reachable = value;
        reachable.value_namespace = name_space;
        reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-ping")
    {
        self_ping = value;
        self_ping.value_namespace = name_space;
        self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-ping")
    {
        default_ping = value;
        default_ping.value_namespace = name_space;
        default_ping.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable")
    {
        reachable.yfilter = yfilter;
    }
    if(value_path == "self-ping")
    {
        self_ping.yfilter = yfilter;
    }
    if(value_path == "default-ping")
    {
        default_ping.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable" || name == "self-ping" || name == "default-ping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Bgp()
    :
    qppb(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>())
    , flow_tag(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>())
{
    qppb->parent = this;
    flow_tag->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::~Bgp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (qppb !=  nullptr && qppb->has_data())
	|| (flow_tag !=  nullptr && flow_tag->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (qppb !=  nullptr && qppb->has_operation())
	|| (flow_tag !=  nullptr && flow_tag->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qppb")
    {
        if(qppb == nullptr)
        {
            qppb = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>();
        }
        return qppb;
    }

    if(child_yang_name == "flow-tag")
    {
        if(flow_tag == nullptr)
        {
            flow_tag = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>();
        }
        return flow_tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qppb != nullptr)
    {
        _children["qppb"] = qppb;
    }

    if(flow_tag != nullptr)
    {
        _children["flow-tag"] = flow_tag;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qppb" || name == "flow-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Qppb()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>())
{
    input->parent = this;

    yang_name = "qppb"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::~Qppb()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qppb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::Input()
    :
    source{YType::enumeration, "source"},
    destination{YType::enumeration, "destination"}
{

    yang_name = "input"; yang_parent_name = "qppb"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTag()
    :
    flow_tag_input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>())
{
    flow_tag_input->parent = this;

    yang_name = "flow-tag"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::~FlowTag()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_data() const
{
    if (is_presence_container) return true;
    return (flow_tag_input !=  nullptr && flow_tag_input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_operation() const
{
    return is_set(yfilter)
	|| (flow_tag_input !=  nullptr && flow_tag_input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-tag-input")
    {
        if(flow_tag_input == nullptr)
        {
            flow_tag_input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>();
        }
        return flow_tag_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_tag_input != nullptr)
    {
        _children["flow-tag-input"] = flow_tag_input;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-tag-input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::FlowTagInput()
    :
    source{YType::boolean, "source"},
    destination{YType::boolean, "destination"}
{

    yang_name = "flow-tag-input"; yang_parent_name = "flow-tag"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::~FlowTagInput()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Addresses()
    :
    unnumbered{YType::str, "unnumbered"},
    dhcp{YType::empty, "dhcp"}
        ,
    secondaries(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>())
    , primary(nullptr) // presence node
{
    secondaries->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_data() const
{
    if (is_presence_container) return true;
    return unnumbered.is_set
	|| dhcp.is_set
	|| (secondaries !=  nullptr && secondaries->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (secondaries !=  nullptr && secondaries->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
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

    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondaries")
    {
        if(secondaries == nullptr)
        {
            secondaries = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>();
        }
        return secondaries;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary>();
        }
        return primary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secondaries != nullptr)
    {
        _children["secondaries"] = secondaries;
    }

    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondaries" || name == "primary" || name == "unnumbered" || name == "dhcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondaries()
    :
    secondary(this, {"address"})
{

    yang_name = "secondaries"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::~Secondaries()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::Secondary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "secondary"; yang_parent_name = "secondaries"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::~Secondary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::Primary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "primary"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::~Primary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddresses()
    :
    helper_address(this, {"address", "vrf_name"})
{

    yang_name = "helper-addresses"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::~HelperAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress>();
        ent_->parent = this;
        helper_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : helper_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "helper-address"; yang_parent_name = "helper-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vrf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vrf-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::Ipv4NetworkForwarding()
    :
    directed_broadcast{YType::empty, "directed-broadcast"},
    unreachables{YType::empty, "unreachables"},
    redirects{YType::empty, "redirects"}
{

    yang_name = "ipv4-network-forwarding"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::~Ipv4NetworkForwarding()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_data() const
{
    if (is_presence_container) return true;
    return directed_broadcast.is_set
	|| unreachables.is_set
	|| redirects.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(redirects.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network-forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directed_broadcast.is_set || is_set(directed_broadcast.yfilter)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
        directed_broadcast.value_namespace = name_space;
        directed_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "directed-broadcast" || name == "unreachables" || name == "redirects")
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
    , otn_send_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>())
    , otn_expected_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>())
    , proactive_protection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>())
    , network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>())
    , otn_send_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>())
    , otn_expected_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>())
    , otn_send_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>())
    , prbs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs>())
    , otn_expected_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>())
    , otn_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otn_send_ttitcmos != nullptr)
    {
        _children["otn-send-ttitcmos"] = otn_send_ttitcmos;
    }

    if(otn_send_ttitcmdapi != nullptr)
    {
        _children["otn-send-ttitcmdapi"] = otn_send_ttitcmdapi;
    }

    if(otn_expected_ttisapi != nullptr)
    {
        _children["otn-expected-ttisapi"] = otn_expected_ttisapi;
    }

    if(proactive_protection != nullptr)
    {
        _children["proactive-protection"] = proactive_protection;
    }

    if(network_srlgs != nullptr)
    {
        _children["network-srlgs"] = network_srlgs;
    }

    if(otn_send_tti != nullptr)
    {
        _children["otn-send-tti"] = otn_send_tti;
    }

    if(otn_expected_ttitcmdapi != nullptr)
    {
        _children["otn-expected-ttitcmdapi"] = otn_expected_ttitcmdapi;
    }

    if(otn_send_ttisapi != nullptr)
    {
        _children["otn-send-ttisapi"] = otn_send_ttisapi;
    }

    if(prbs != nullptr)
    {
        _children["prbs"] = prbs;
    }

    if(otn_expected_ttitcmos != nullptr)
    {
        _children["otn-expected-ttitcmos"] = otn_expected_ttitcmos;
    }

    if(otn_expected_tti != nullptr)
    {
        _children["otn-expected-tti"] = otn_expected_tti;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , revert_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>())
    , trigger_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>())
    , revert_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger_threshold != nullptr)
    {
        _children["trigger-threshold"] = trigger_threshold;
    }

    if(revert_window != nullptr)
    {
        _children["revert-window"] = revert_window;
    }

    if(trigger_window != nullptr)
    {
        _children["trigger-window"] = trigger_window;
    }

    if(revert_threshold != nullptr)
    {
        _children["revert-threshold"] = revert_threshold;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    network_srlg(this, {"set_id"})
{

    yang_name = "network-srlgs"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_srlg.len(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg>();
        ent_->parent = this;
        network_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "network-srlg";
    ADD_KEY_TOKEN(set_id, "set-id");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Mpls::Mpls()
    :
    mtu{YType::uint32, "mtu"}
        ,
    label_security(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity>())
{
    label_security->parent = this;

    yang_name = "mpls"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::~Mpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return mtu.is_set
	|| (label_security !=  nullptr && label_security->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (label_security !=  nullptr && label_security->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-io-cfg:mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-security")
    {
        if(label_security == nullptr)
        {
            label_security = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity>();
        }
        return label_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_security != nullptr)
    {
        _children["label-security"] = label_security;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-security" || name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::LabelSecurity()
    :
    multi_label_drop{YType::empty, "multi-label-drop"},
    rpf{YType::empty, "rpf"}
{

    yang_name = "label-security"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::~LabelSecurity()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::has_data() const
{
    if (is_presence_container) return true;
    return multi_label_drop.is_set
	|| rpf.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_label_drop.yfilter)
	|| ydk::is_set(rpf.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_label_drop.is_set || is_set(multi_label_drop.yfilter)) leaf_name_data.push_back(multi_label_drop.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-label-drop")
    {
        multi_label_drop = value;
        multi_label_drop.value_namespace = name_space;
        multi_label_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-label-drop")
    {
        multi_label_drop.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-label-drop" || name == "rpf")
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

InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::Ipv4FlowSpec()
    :
    enabled{YType::empty, "enabled"}
{

    yang_name = "ipv4-flow-spec"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::~Ipv4FlowSpec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-cfg:ipv4-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::Ipv6FlowSpec()
    :
    enabled{YType::empty, "enabled"}
{

    yang_name = "ipv6-flow-spec"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::~Ipv6FlowSpec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-cfg:ipv6-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
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
    l2_protocols(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>())
    , l2_ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>())
    , pac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>())
    , cac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>())
    , span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>())
{
    l2_protocols->parent = this;
    l2_ethernet_features->parent = this;
    pac->parent = this;
    cac->parent = this;
    span_monitor_sessions->parent = this;

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
	|| (l2_protocols !=  nullptr && l2_protocols->has_data())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_data())
	|| (pac !=  nullptr && pac->has_data())
	|| (cac !=  nullptr && cac->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(propagate_remote_status.yfilter)
	|| (l2_protocols !=  nullptr && l2_protocols->has_operation())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_operation())
	|| (pac !=  nullptr && pac->has_operation())
	|| (cac !=  nullptr && cac->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation());
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

    if(child_yang_name == "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

    if(span_monitor_sessions != nullptr)
    {
        _children["Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions"] = span_monitor_sessions;
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
    if(name == "l2-protocols" || name == "l2-ethernet-features" || name == "pac" || name == "cac" || name == "span-monitor-sessions" || name == "enabled" || name == "propagate-remote-status")
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

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::CiscoIOSXRPppMaIpcpCfgPpp()
    :
    ipcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp>())
{
    ipcp->parent = this;

    yang_name = "ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::~CiscoIOSXRPppMaIpcpCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "Cisco-IOS-XR-ppp-ma-ipcp-cfg:ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipcp != nullptr)
    {
        _children["ipcp"] = ipcp;
    }

    return _children;
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
    peer_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress>())
    , dns(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns>())
{
    peer_address->parent = this;
    dns->parent = this;

    yang_name = "ipcp"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::~Ipcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_route_disable.is_set
	|| (peer_address !=  nullptr && peer_address->has_data())
	|| (dns !=  nullptr && dns->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_route_disable.yfilter)
	|| (peer_address !=  nullptr && peer_address->has_operation())
	|| (dns !=  nullptr && dns->has_operation());
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address")
    {
        if(peer_address == nullptr)
        {
            peer_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress>();
        }
        return peer_address;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns>();
        }
        return dns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_address != nullptr)
    {
        _children["peer-address"] = peer_address;
    }

    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    return _children;
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
    if(name == "peer-address" || name == "dns" || name == "neighbor-route-disable")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dns_addresses != nullptr)
    {
        _children["dns-addresses"] = dns_addresses;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    ipv4ttl{YType::uint32, "ipv4ttl"},
    port_state{YType::enumeration, "port-state"},
    delay_response_timeout{YType::uint32, "delay-response-timeout"},
    local_priority{YType::uint32, "local-priority"},
    delay_response_grant_duration{YType::uint32, "delay-response-grant-duration"},
    event_cos{YType::uint32, "event-cos"},
    dscp{YType::uint32, "dscp"},
    ipv6_hop_limit{YType::uint32, "ipv6-hop-limit"},
    general_dscp{YType::uint32, "general-dscp"},
    clock_operation{YType::enumeration, "clock-operation"},
    announce_grant_duration{YType::uint32, "announce-grant-duration"},
    unicast_grant_invalid_request{YType::enumeration, "unicast-grant-invalid-request"},
    event_dscp{YType::uint32, "event-dscp"}
        ,
    source_ipv6_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address>())
    , announce_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval>())
    , interop(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop>())
    , source_ipv4_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address>())
    , slaves(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves>())
    , sync_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval>())
    , masters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters>())
    , communication(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication>())
    , delay_request_minimum_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval>())
{
    source_ipv6_address->parent = this;
    announce_interval->parent = this;
    interop->parent = this;
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
    if (is_presence_container) return true;
    return sync_grant_duration.is_set
	|| general_cos.is_set
	|| enable.is_set
	|| sync_timeout.is_set
	|| transport.is_set
	|| profile.is_set
	|| announce_timeout.is_set
	|| cos.is_set
	|| ipv4ttl.is_set
	|| port_state.is_set
	|| delay_response_timeout.is_set
	|| local_priority.is_set
	|| delay_response_grant_duration.is_set
	|| event_cos.is_set
	|| dscp.is_set
	|| ipv6_hop_limit.is_set
	|| general_dscp.is_set
	|| clock_operation.is_set
	|| announce_grant_duration.is_set
	|| unicast_grant_invalid_request.is_set
	|| event_dscp.is_set
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_data())
	|| (announce_interval !=  nullptr && announce_interval->has_data())
	|| (interop !=  nullptr && interop->has_data())
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
	|| ydk::is_set(ipv4ttl.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(delay_response_timeout.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(delay_response_grant_duration.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(ipv6_hop_limit.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(clock_operation.yfilter)
	|| ydk::is_set(announce_grant_duration.yfilter)
	|| ydk::is_set(unicast_grant_invalid_request.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_operation())
	|| (announce_interval !=  nullptr && announce_interval->has_operation())
	|| (interop !=  nullptr && interop->has_operation())
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
    if (ipv4ttl.is_set || is_set(ipv4ttl.yfilter)) leaf_name_data.push_back(ipv4ttl.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (delay_response_timeout.is_set || is_set(delay_response_timeout.yfilter)) leaf_name_data.push_back(delay_response_timeout.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (delay_response_grant_duration.is_set || is_set(delay_response_grant_duration.yfilter)) leaf_name_data.push_back(delay_response_grant_duration.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (ipv6_hop_limit.is_set || is_set(ipv6_hop_limit.yfilter)) leaf_name_data.push_back(ipv6_hop_limit.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (clock_operation.is_set || is_set(clock_operation.yfilter)) leaf_name_data.push_back(clock_operation.get_name_leafdata());
    if (announce_grant_duration.is_set || is_set(announce_grant_duration.yfilter)) leaf_name_data.push_back(announce_grant_duration.get_name_leafdata());
    if (unicast_grant_invalid_request.is_set || is_set(unicast_grant_invalid_request.yfilter)) leaf_name_data.push_back(unicast_grant_invalid_request.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "interop")
    {
        if(interop == nullptr)
        {
            interop = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop>();
        }
        return interop;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_ipv6_address != nullptr)
    {
        _children["source-ipv6-address"] = source_ipv6_address;
    }

    if(announce_interval != nullptr)
    {
        _children["announce-interval"] = announce_interval;
    }

    if(interop != nullptr)
    {
        _children["interop"] = interop;
    }

    if(source_ipv4_address != nullptr)
    {
        _children["source-ipv4-address"] = source_ipv4_address;
    }

    if(slaves != nullptr)
    {
        _children["slaves"] = slaves;
    }

    if(sync_interval != nullptr)
    {
        _children["sync-interval"] = sync_interval;
    }

    if(masters != nullptr)
    {
        _children["masters"] = masters;
    }

    if(communication != nullptr)
    {
        _children["communication"] = communication;
    }

    if(delay_request_minimum_interval != nullptr)
    {
        _children["delay-request-minimum-interval"] = delay_request_minimum_interval;
    }

    return _children;
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
    if(value_path == "ipv4ttl")
    {
        ipv4ttl = value;
        ipv4ttl.value_namespace = name_space;
        ipv4ttl.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit = value;
        ipv6_hop_limit.value_namespace = name_space;
        ipv6_hop_limit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4ttl")
    {
        ipv4ttl.yfilter = yfilter;
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
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit.yfilter = yfilter;
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
    if(name == "source-ipv6-address" || name == "announce-interval" || name == "interop" || name == "source-ipv4-address" || name == "slaves" || name == "sync-interval" || name == "masters" || name == "communication" || name == "delay-request-minimum-interval" || name == "sync-grant-duration" || name == "general-cos" || name == "enable" || name == "sync-timeout" || name == "transport" || name == "profile" || name == "announce-timeout" || name == "cos" || name == "ipv4ttl" || name == "port-state" || name == "delay-response-timeout" || name == "local-priority" || name == "delay-response-grant-duration" || name == "event-cos" || name == "dscp" || name == "ipv6-hop-limit" || name == "general-dscp" || name == "clock-operation" || name == "announce-grant-duration" || name == "unicast-grant-invalid-request" || name == "event-dscp")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::Interop()
    :
    profile{YType::enumeration, "profile"},
    domain{YType::uint32, "domain"}
        ,
    egress_conversion(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion>())
    , ingress_conversion(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion>())
{
    egress_conversion->parent = this;
    ingress_conversion->parent = this;

    yang_name = "interop"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::~Interop()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set
	|| domain.is_set
	|| (egress_conversion !=  nullptr && egress_conversion->has_data())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (egress_conversion !=  nullptr && egress_conversion->has_operation())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-conversion")
    {
        if(egress_conversion == nullptr)
        {
            egress_conversion = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion>();
        }
        return egress_conversion;
    }

    if(child_yang_name == "ingress-conversion")
    {
        if(ingress_conversion == nullptr)
        {
            ingress_conversion = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion>();
        }
        return ingress_conversion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(egress_conversion != nullptr)
    {
        _children["egress-conversion"] = egress_conversion;
    }

    if(ingress_conversion != nullptr)
    {
        _children["ingress-conversion"] = ingress_conversion;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-conversion" || name == "ingress-conversion" || name == "profile" || name == "domain")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::EgressConversion()
    :
    clock_accuracy{YType::uint32, "clock-accuracy"},
    priority2{YType::uint32, "priority2"},
    clock_class_default{YType::uint32, "clock-class-default"},
    offset_scaled_log_variance{YType::uint32, "offset-scaled-log-variance"},
    priority1{YType::uint32, "priority1"}
        ,
    clock_class_mappings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings>())
{
    clock_class_mappings->parent = this;

    yang_name = "egress-conversion"; yang_parent_name = "interop"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::~EgressConversion()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::has_data() const
{
    if (is_presence_container) return true;
    return clock_accuracy.is_set
	|| priority2.is_set
	|| clock_class_default.is_set
	|| offset_scaled_log_variance.is_set
	|| priority1.is_set
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_accuracy.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(clock_class_default.yfilter)
	|| ydk::is_set(offset_scaled_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_accuracy.is_set || is_set(clock_accuracy.yfilter)) leaf_name_data.push_back(clock_accuracy.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (clock_class_default.is_set || is_set(clock_class_default.yfilter)) leaf_name_data.push_back(clock_class_default.get_name_leafdata());
    if (offset_scaled_log_variance.is_set || is_set(offset_scaled_log_variance.yfilter)) leaf_name_data.push_back(offset_scaled_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mappings")
    {
        if(clock_class_mappings == nullptr)
        {
            clock_class_mappings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings>();
        }
        return clock_class_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_class_mappings != nullptr)
    {
        _children["clock-class-mappings"] = clock_class_mappings;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy = value;
        clock_accuracy.value_namespace = name_space;
        clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default = value;
        clock_class_default.value_namespace = name_space;
        clock_class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance = value;
        offset_scaled_log_variance.value_namespace = name_space;
        offset_scaled_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default.yfilter = yfilter;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mappings" || name == "clock-accuracy" || name == "priority2" || name == "clock-class-default" || name == "offset-scaled-log-variance" || name == "priority1")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMappings()
    :
    clock_class_mapping(this, {"clock_class_from"})
{

    yang_name = "clock-class-mappings"; yang_parent_name = "egress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::~ClockClassMappings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::has_operation() const
{
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mapping")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping>();
        ent_->parent = this;
        clock_class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clock_class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mapping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::ClockClassMapping()
    :
    clock_class_from{YType::uint32, "clock-class-from"},
    clock_class_to{YType::uint32, "clock-class-to"}
{

    yang_name = "clock-class-mapping"; yang_parent_name = "clock-class-mappings"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::~ClockClassMapping()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return clock_class_from.is_set
	|| clock_class_to.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_class_from.yfilter)
	|| ydk::is_set(clock_class_to.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mapping";
    ADD_KEY_TOKEN(clock_class_from, "clock-class-from");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_class_from.is_set || is_set(clock_class_from.yfilter)) leaf_name_data.push_back(clock_class_from.get_name_leafdata());
    if (clock_class_to.is_set || is_set(clock_class_to.yfilter)) leaf_name_data.push_back(clock_class_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from = value;
        clock_class_from.value_namespace = name_space;
        clock_class_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to = value;
        clock_class_to.value_namespace = name_space;
        clock_class_to.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from.yfilter = yfilter;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-from" || name == "clock-class-to")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::IngressConversion()
    :
    clock_accuracy{YType::uint32, "clock-accuracy"},
    priority2{YType::uint32, "priority2"},
    clock_class_default{YType::uint32, "clock-class-default"},
    offset_scaled_log_variance{YType::uint32, "offset-scaled-log-variance"},
    priority1{YType::uint32, "priority1"}
        ,
    clock_class_mappings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings>())
{
    clock_class_mappings->parent = this;

    yang_name = "ingress-conversion"; yang_parent_name = "interop"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::~IngressConversion()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::has_data() const
{
    if (is_presence_container) return true;
    return clock_accuracy.is_set
	|| priority2.is_set
	|| clock_class_default.is_set
	|| offset_scaled_log_variance.is_set
	|| priority1.is_set
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_accuracy.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(clock_class_default.yfilter)
	|| ydk::is_set(offset_scaled_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_accuracy.is_set || is_set(clock_accuracy.yfilter)) leaf_name_data.push_back(clock_accuracy.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (clock_class_default.is_set || is_set(clock_class_default.yfilter)) leaf_name_data.push_back(clock_class_default.get_name_leafdata());
    if (offset_scaled_log_variance.is_set || is_set(offset_scaled_log_variance.yfilter)) leaf_name_data.push_back(offset_scaled_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mappings")
    {
        if(clock_class_mappings == nullptr)
        {
            clock_class_mappings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings>();
        }
        return clock_class_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_class_mappings != nullptr)
    {
        _children["clock-class-mappings"] = clock_class_mappings;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy = value;
        clock_accuracy.value_namespace = name_space;
        clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default = value;
        clock_class_default.value_namespace = name_space;
        clock_class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance = value;
        offset_scaled_log_variance.value_namespace = name_space;
        offset_scaled_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default.yfilter = yfilter;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mappings" || name == "clock-accuracy" || name == "priority2" || name == "clock-class-default" || name == "offset-scaled-log-variance" || name == "priority1")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMappings()
    :
    clock_class_mapping(this, {"clock_class_from"})
{

    yang_name = "clock-class-mappings"; yang_parent_name = "ingress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::~ClockClassMappings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::has_operation() const
{
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mapping")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping>();
        ent_->parent = this;
        clock_class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clock_class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mapping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::ClockClassMapping()
    :
    clock_class_from{YType::uint32, "clock-class-from"},
    clock_class_to{YType::uint32, "clock-class-to"}
{

    yang_name = "clock-class-mapping"; yang_parent_name = "clock-class-mappings"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::~ClockClassMapping()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return clock_class_from.is_set
	|| clock_class_to.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_class_from.yfilter)
	|| ydk::is_set(clock_class_to.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mapping";
    ADD_KEY_TOKEN(clock_class_from, "clock-class-from");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_class_from.is_set || is_set(clock_class_from.yfilter)) leaf_name_data.push_back(clock_class_from.get_name_leafdata());
    if (clock_class_to.is_set || is_set(clock_class_to.yfilter)) leaf_name_data.push_back(clock_class_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from = value;
        clock_class_from.value_namespace = name_space;
        clock_class_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to = value;
        clock_class_to.value_namespace = name_space;
        clock_class_to.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from.yfilter = yfilter;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-from" || name == "clock-class-to")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    slave(this, {"transport"})
{

    yang_name = "slaves"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::~Slaves()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slave.len(); index++)
    {
        if(slave[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_operation() const
{
    for (std::size_t index=0; index<slave.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave>();
        ent_->parent = this;
        slave.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slave.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
        ,
    ethernet(this, {"slave_mac_address"})
    , ipv4_or_ipv6(this, {"slave_ip_address"})
{

    yang_name = "slave"; yang_parent_name = "slaves"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::~Slave()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_operation() const
{
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
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
    path_buffer << "slave";
    ADD_KEY_TOKEN(transport, "transport");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet>();
        ent_->parent = this;
        ethernet.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6>();
        ent_->parent = this;
        ipv4_or_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_or_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ethernet";
    ADD_KEY_TOKEN(slave_mac_address, "slave-mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_mac_address.is_set || is_set(slave_mac_address.yfilter)) leaf_name_data.push_back(slave_mac_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ipv4-or-ipv6";
    ADD_KEY_TOKEN(slave_ip_address, "slave-ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_ip_address.is_set || is_set(slave_ip_address.yfilter)) leaf_name_data.push_back(slave_ip_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    master(this, {"transport"})
{

    yang_name = "masters"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::~Masters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<master.len(); index++)
    {
        if(master[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_operation() const
{
    for (std::size_t index=0; index<master.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master>();
        ent_->parent = this;
        master.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : master.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
        ,
    ethernet(this, {"master_mac_address"})
    , ipv4_or_ipv6(this, {"master_ip_address"})
{

    yang_name = "master"; yang_parent_name = "masters"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::~Master()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_operation() const
{
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
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
    path_buffer << "master";
    ADD_KEY_TOKEN(transport, "transport");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet>();
        ent_->parent = this;
        ethernet.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6>();
        ent_->parent = this;
        ipv4_or_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_or_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ethernet";
    ADD_KEY_TOKEN(master_mac_address, "master-mac-address");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay_asymmetry != nullptr)
    {
        _children["delay-asymmetry"] = delay_asymmetry;
    }

    return _children;
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

    yang_name = "delay-asymmetry"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::~DelayAsymmetry()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ipv4-or-ipv6";
    ADD_KEY_TOKEN(master_ip_address, "master-ip-address");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay_asymmetry != nullptr)
    {
        _children["delay-asymmetry"] = delay_asymmetry;
    }

    return _children;
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

    yang_name = "delay-asymmetry"; yang_parent_name = "ipv4-or-ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::~DelayAsymmetry()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanSubConfiguration()
    :
    vlan_identifier(nullptr) // presence node
{

    yang_name = "vlan-sub-configuration"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::~VlanSubConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_identifier !=  nullptr && vlan_identifier->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_identifier !=  nullptr && vlan_identifier->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-sub-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-identifier")
    {
        if(vlan_identifier == nullptr)
        {
            vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier>();
        }
        return vlan_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_identifier != nullptr)
    {
        _children["vlan-identifier"] = vlan_identifier;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-identifier")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::VlanIdentifier()
    :
    vlan_type{YType::enumeration, "vlan-type"},
    first_tag{YType::uint32, "first-tag"},
    second_tag{YType::str, "second-tag"}
{

    yang_name = "vlan-identifier"; yang_parent_name = "vlan-sub-configuration"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::~VlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return vlan_type.is_set
	|| first_tag.is_set
	|| second_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| ydk::is_set(first_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());
    if (first_tag.is_set || is_set(first_tag.yfilter)) leaf_name_data.push_back(first_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-tag")
    {
        first_tag = value;
        first_tag.value_namespace = name_space;
        first_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
    if(value_path == "first-tag")
    {
        first_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-type" || name == "first-tag" || name == "second-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::EthernetService()
    :
    local_traffic_default_encapsulation(nullptr) // presence node
    , encapsulation(nullptr) // presence node
    , rewrite(nullptr) // presence node
{

    yang_name = "ethernet-service"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::~EthernetService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_data() const
{
    if (is_presence_container) return true;
    return (local_traffic_default_encapsulation !=  nullptr && local_traffic_default_encapsulation->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_operation() const
{
    return is_set(yfilter)
	|| (local_traffic_default_encapsulation !=  nullptr && local_traffic_default_encapsulation->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-traffic-default-encapsulation")
    {
        if(local_traffic_default_encapsulation == nullptr)
        {
            local_traffic_default_encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation>();
        }
        return local_traffic_default_encapsulation;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation>();
        }
        return encapsulation;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_traffic_default_encapsulation != nullptr)
    {
        _children["local-traffic-default-encapsulation"] = local_traffic_default_encapsulation;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(rewrite != nullptr)
    {
        _children["rewrite"] = rewrite;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-traffic-default-encapsulation" || name == "encapsulation" || name == "rewrite")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::LocalTrafficDefaultEncapsulation()
    :
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_vlan_id{YType::uint32, "outer-vlan-id"},
    inner_vlan_id{YType::uint32, "inner-vlan-id"}
{

    yang_name = "local-traffic-default-encapsulation"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::~LocalTrafficDefaultEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag_type.is_set
	|| outer_vlan_id.is_set
	|| inner_vlan_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_vlan_id.yfilter)
	|| ydk::is_set(inner_vlan_id.yfilter);
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

    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.yfilter)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.yfilter)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
        inner_vlan_id.value_namespace = name_space;
        inner_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag-type" || name == "outer-vlan-id" || name == "inner-vlan-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::Encapsulation()
    :
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_range1_low{YType::str, "outer-range1-low"},
    outer_range1_high{YType::str, "outer-range1-high"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    inner_range1_low{YType::str, "inner-range1-low"},
    inner_range1_high{YType::uint32, "inner-range1-high"},
    additional_range1_low{YType::str, "additional-range1-low"},
    additional_range1_high{YType::uint32, "additional-range1-high"},
    additional_range2_low{YType::str, "additional-range2-low"},
    additional_range2_high{YType::uint32, "additional-range2-high"},
    additional_range3_low{YType::str, "additional-range3-low"},
    additional_range3_high{YType::uint32, "additional-range3-high"},
    additional_range4_low{YType::str, "additional-range4-low"},
    additional_range4_high{YType::uint32, "additional-range4-high"},
    additional_range5_low{YType::str, "additional-range5-low"},
    additional_range5_high{YType::uint32, "additional-range5-high"},
    additional_range6_low{YType::str, "additional-range6-low"},
    additional_range6_high{YType::uint32, "additional-range6-high"},
    additional_range7_low{YType::str, "additional-range7-low"},
    additional_range7_high{YType::uint32, "additional-range7-high"},
    additional_range8_low{YType::str, "additional-range8-low"},
    additional_range8_high{YType::uint32, "additional-range8-high"},
    outer_class_of_service{YType::uint32, "outer-class-of-service"},
    inner_class_of_service{YType::uint32, "inner-class-of-service"},
    payload_ethertype_match{YType::enumeration, "payload-ethertype-match"},
    ingress_source_mac{YType::str, "ingress-source-mac"},
    ingress_destination_mac{YType::str, "ingress-destination-mac"},
    exact{YType::empty, "exact"}
{

    yang_name = "encapsulation"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::~Encapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag_type.is_set
	|| outer_range1_low.is_set
	|| outer_range1_high.is_set
	|| inner_tag_type.is_set
	|| inner_range1_low.is_set
	|| inner_range1_high.is_set
	|| additional_range1_low.is_set
	|| additional_range1_high.is_set
	|| additional_range2_low.is_set
	|| additional_range2_high.is_set
	|| additional_range3_low.is_set
	|| additional_range3_high.is_set
	|| additional_range4_low.is_set
	|| additional_range4_high.is_set
	|| additional_range5_low.is_set
	|| additional_range5_high.is_set
	|| additional_range6_low.is_set
	|| additional_range6_high.is_set
	|| additional_range7_low.is_set
	|| additional_range7_high.is_set
	|| additional_range8_low.is_set
	|| additional_range8_high.is_set
	|| outer_class_of_service.is_set
	|| inner_class_of_service.is_set
	|| payload_ethertype_match.is_set
	|| ingress_source_mac.is_set
	|| ingress_destination_mac.is_set
	|| exact.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_range1_low.yfilter)
	|| ydk::is_set(outer_range1_high.yfilter)
	|| ydk::is_set(inner_tag_type.yfilter)
	|| ydk::is_set(inner_range1_low.yfilter)
	|| ydk::is_set(inner_range1_high.yfilter)
	|| ydk::is_set(additional_range1_low.yfilter)
	|| ydk::is_set(additional_range1_high.yfilter)
	|| ydk::is_set(additional_range2_low.yfilter)
	|| ydk::is_set(additional_range2_high.yfilter)
	|| ydk::is_set(additional_range3_low.yfilter)
	|| ydk::is_set(additional_range3_high.yfilter)
	|| ydk::is_set(additional_range4_low.yfilter)
	|| ydk::is_set(additional_range4_high.yfilter)
	|| ydk::is_set(additional_range5_low.yfilter)
	|| ydk::is_set(additional_range5_high.yfilter)
	|| ydk::is_set(additional_range6_low.yfilter)
	|| ydk::is_set(additional_range6_high.yfilter)
	|| ydk::is_set(additional_range7_low.yfilter)
	|| ydk::is_set(additional_range7_high.yfilter)
	|| ydk::is_set(additional_range8_low.yfilter)
	|| ydk::is_set(additional_range8_high.yfilter)
	|| ydk::is_set(outer_class_of_service.yfilter)
	|| ydk::is_set(inner_class_of_service.yfilter)
	|| ydk::is_set(payload_ethertype_match.yfilter)
	|| ydk::is_set(ingress_source_mac.yfilter)
	|| ydk::is_set(ingress_destination_mac.yfilter)
	|| ydk::is_set(exact.yfilter);
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

    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.yfilter)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.yfilter)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.yfilter)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.yfilter)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.yfilter)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.yfilter)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range1_high.is_set || is_set(additional_range1_high.yfilter)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.yfilter)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.yfilter)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.yfilter)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.yfilter)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.yfilter)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.yfilter)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.yfilter)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.yfilter)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.yfilter)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.yfilter)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.yfilter)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.yfilter)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.yfilter)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.yfilter)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.yfilter)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.yfilter)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.yfilter)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.yfilter)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.yfilter)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
        outer_range1_low.value_namespace = name_space;
        outer_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
        outer_range1_high.value_namespace = name_space;
        outer_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
        inner_tag_type.value_namespace = name_space;
        inner_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
        inner_range1_low.value_namespace = name_space;
        inner_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
        inner_range1_high.value_namespace = name_space;
        inner_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
        additional_range1_low.value_namespace = name_space;
        additional_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
        additional_range1_high.value_namespace = name_space;
        additional_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
        additional_range2_low.value_namespace = name_space;
        additional_range2_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
        additional_range2_high.value_namespace = name_space;
        additional_range2_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
        additional_range3_low.value_namespace = name_space;
        additional_range3_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
        additional_range3_high.value_namespace = name_space;
        additional_range3_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
        additional_range4_low.value_namespace = name_space;
        additional_range4_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
        additional_range4_high.value_namespace = name_space;
        additional_range4_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
        additional_range5_low.value_namespace = name_space;
        additional_range5_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
        additional_range5_high.value_namespace = name_space;
        additional_range5_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
        additional_range6_low.value_namespace = name_space;
        additional_range6_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
        additional_range6_high.value_namespace = name_space;
        additional_range6_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
        additional_range7_low.value_namespace = name_space;
        additional_range7_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
        additional_range7_high.value_namespace = name_space;
        additional_range7_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
        additional_range8_low.value_namespace = name_space;
        additional_range8_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
        additional_range8_high.value_namespace = name_space;
        additional_range8_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
        outer_class_of_service.value_namespace = name_space;
        outer_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
        inner_class_of_service.value_namespace = name_space;
        inner_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
        payload_ethertype_match.value_namespace = name_space;
        payload_ethertype_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
        ingress_source_mac.value_namespace = name_space;
        ingress_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
        ingress_destination_mac.value_namespace = name_space;
        ingress_destination_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low.yfilter = yfilter;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high.yfilter = yfilter;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type.yfilter = yfilter;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low.yfilter = yfilter;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low.yfilter = yfilter;
    }
    if(value_path == "additional-range1-high")
    {
        additional_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low.yfilter = yfilter;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high.yfilter = yfilter;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low.yfilter = yfilter;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high.yfilter = yfilter;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low.yfilter = yfilter;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high.yfilter = yfilter;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low.yfilter = yfilter;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high.yfilter = yfilter;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low.yfilter = yfilter;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high.yfilter = yfilter;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low.yfilter = yfilter;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high.yfilter = yfilter;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low.yfilter = yfilter;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high.yfilter = yfilter;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service.yfilter = yfilter;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service.yfilter = yfilter;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match.yfilter = yfilter;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac.yfilter = yfilter;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag-type" || name == "outer-range1-low" || name == "outer-range1-high" || name == "inner-tag-type" || name == "inner-range1-low" || name == "inner-range1-high" || name == "additional-range1-low" || name == "additional-range1-high" || name == "additional-range2-low" || name == "additional-range2-high" || name == "additional-range3-low" || name == "additional-range3-high" || name == "additional-range4-low" || name == "additional-range4-high" || name == "additional-range5-low" || name == "additional-range5-high" || name == "additional-range6-low" || name == "additional-range6-high" || name == "additional-range7-low" || name == "additional-range7-high" || name == "additional-range8-low" || name == "additional-range8-high" || name == "outer-class-of-service" || name == "inner-class-of-service" || name == "payload-ethertype-match" || name == "ingress-source-mac" || name == "ingress-destination-mac" || name == "exact")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::Rewrite()
    :
    rewrite_type{YType::enumeration, "rewrite-type"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_tag_value{YType::uint32, "outer-tag-value"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    inner_tag_value{YType::uint32, "inner-tag-value"}
{

    yang_name = "rewrite"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::~Rewrite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_data() const
{
    if (is_presence_container) return true;
    return rewrite_type.is_set
	|| outer_tag_type.is_set
	|| outer_tag_value.is_set
	|| inner_tag_type.is_set
	|| inner_tag_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rewrite_type.yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_tag_value.yfilter)
	|| ydk::is_set(inner_tag_type.yfilter)
	|| ydk::is_set(inner_tag_value.yfilter);
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

    if (rewrite_type.is_set || is_set(rewrite_type.yfilter)) leaf_name_data.push_back(rewrite_type.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_tag_value.is_set || is_set(outer_tag_value.yfilter)) leaf_name_data.push_back(outer_tag_value.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.yfilter)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (inner_tag_value.is_set || is_set(inner_tag_value.yfilter)) leaf_name_data.push_back(inner_tag_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rewrite-type")
    {
        rewrite_type = value;
        rewrite_type.value_namespace = name_space;
        rewrite_type.value_namespace_prefix = name_space_prefix;
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
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rewrite-type")
    {
        rewrite_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag-value")
    {
        outer_tag_value.yfilter = yfilter;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type.yfilter = yfilter;
    }
    if(value_path == "inner-tag-value")
    {
        inner_tag_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-type" || name == "outer-tag-type" || name == "outer-tag-value" || name == "inner-tag-type" || name == "inner-tag-value")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ambiguous_encapsulation != nullptr)
    {
        _children["ambiguous-encapsulation"] = ambiguous_encapsulation;
    }

    return _children;
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
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_range1_low{YType::str, "outer-range1-low"},
    outer_range1_high{YType::str, "outer-range1-high"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    inner_range1_low{YType::str, "inner-range1-low"},
    inner_range1_high{YType::uint32, "inner-range1-high"},
    additional_range1_low{YType::str, "additional-range1-low"},
    additional_range1_high{YType::uint32, "additional-range1-high"},
    additional_range2_low{YType::str, "additional-range2-low"},
    additional_range2_high{YType::uint32, "additional-range2-high"},
    additional_range3_low{YType::str, "additional-range3-low"},
    additional_range3_high{YType::uint32, "additional-range3-high"},
    additional_range4_low{YType::str, "additional-range4-low"},
    additional_range4_high{YType::uint32, "additional-range4-high"},
    additional_range5_low{YType::str, "additional-range5-low"},
    additional_range5_high{YType::uint32, "additional-range5-high"},
    additional_range6_low{YType::str, "additional-range6-low"},
    additional_range6_high{YType::uint32, "additional-range6-high"},
    additional_range7_low{YType::str, "additional-range7-low"},
    additional_range7_high{YType::uint32, "additional-range7-high"},
    additional_range8_low{YType::str, "additional-range8-low"},
    additional_range8_high{YType::uint32, "additional-range8-high"},
    outer_class_of_service{YType::uint32, "outer-class-of-service"},
    inner_class_of_service{YType::uint32, "inner-class-of-service"},
    payload_ethertype_match{YType::enumeration, "payload-ethertype-match"},
    ingress_source_mac{YType::str, "ingress-source-mac"},
    ingress_destination_mac{YType::str, "ingress-destination-mac"},
    exact{YType::empty, "exact"}
{

    yang_name = "ambiguous-encapsulation"; yang_parent_name = "ethernet-bng"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::~AmbiguousEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag_type.is_set
	|| outer_range1_low.is_set
	|| outer_range1_high.is_set
	|| inner_tag_type.is_set
	|| inner_range1_low.is_set
	|| inner_range1_high.is_set
	|| additional_range1_low.is_set
	|| additional_range1_high.is_set
	|| additional_range2_low.is_set
	|| additional_range2_high.is_set
	|| additional_range3_low.is_set
	|| additional_range3_high.is_set
	|| additional_range4_low.is_set
	|| additional_range4_high.is_set
	|| additional_range5_low.is_set
	|| additional_range5_high.is_set
	|| additional_range6_low.is_set
	|| additional_range6_high.is_set
	|| additional_range7_low.is_set
	|| additional_range7_high.is_set
	|| additional_range8_low.is_set
	|| additional_range8_high.is_set
	|| outer_class_of_service.is_set
	|| inner_class_of_service.is_set
	|| payload_ethertype_match.is_set
	|| ingress_source_mac.is_set
	|| ingress_destination_mac.is_set
	|| exact.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_range1_low.yfilter)
	|| ydk::is_set(outer_range1_high.yfilter)
	|| ydk::is_set(inner_tag_type.yfilter)
	|| ydk::is_set(inner_range1_low.yfilter)
	|| ydk::is_set(inner_range1_high.yfilter)
	|| ydk::is_set(additional_range1_low.yfilter)
	|| ydk::is_set(additional_range1_high.yfilter)
	|| ydk::is_set(additional_range2_low.yfilter)
	|| ydk::is_set(additional_range2_high.yfilter)
	|| ydk::is_set(additional_range3_low.yfilter)
	|| ydk::is_set(additional_range3_high.yfilter)
	|| ydk::is_set(additional_range4_low.yfilter)
	|| ydk::is_set(additional_range4_high.yfilter)
	|| ydk::is_set(additional_range5_low.yfilter)
	|| ydk::is_set(additional_range5_high.yfilter)
	|| ydk::is_set(additional_range6_low.yfilter)
	|| ydk::is_set(additional_range6_high.yfilter)
	|| ydk::is_set(additional_range7_low.yfilter)
	|| ydk::is_set(additional_range7_high.yfilter)
	|| ydk::is_set(additional_range8_low.yfilter)
	|| ydk::is_set(additional_range8_high.yfilter)
	|| ydk::is_set(outer_class_of_service.yfilter)
	|| ydk::is_set(inner_class_of_service.yfilter)
	|| ydk::is_set(payload_ethertype_match.yfilter)
	|| ydk::is_set(ingress_source_mac.yfilter)
	|| ydk::is_set(ingress_destination_mac.yfilter)
	|| ydk::is_set(exact.yfilter);
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

    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.yfilter)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.yfilter)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.yfilter)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.yfilter)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.yfilter)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.yfilter)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range1_high.is_set || is_set(additional_range1_high.yfilter)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.yfilter)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.yfilter)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.yfilter)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.yfilter)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.yfilter)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.yfilter)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.yfilter)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.yfilter)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.yfilter)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.yfilter)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.yfilter)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.yfilter)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.yfilter)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.yfilter)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.yfilter)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.yfilter)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.yfilter)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.yfilter)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.yfilter)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
        outer_range1_low.value_namespace = name_space;
        outer_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
        outer_range1_high.value_namespace = name_space;
        outer_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
        inner_tag_type.value_namespace = name_space;
        inner_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
        inner_range1_low.value_namespace = name_space;
        inner_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
        inner_range1_high.value_namespace = name_space;
        inner_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
        additional_range1_low.value_namespace = name_space;
        additional_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
        additional_range1_high.value_namespace = name_space;
        additional_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
        additional_range2_low.value_namespace = name_space;
        additional_range2_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
        additional_range2_high.value_namespace = name_space;
        additional_range2_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
        additional_range3_low.value_namespace = name_space;
        additional_range3_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
        additional_range3_high.value_namespace = name_space;
        additional_range3_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
        additional_range4_low.value_namespace = name_space;
        additional_range4_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
        additional_range4_high.value_namespace = name_space;
        additional_range4_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
        additional_range5_low.value_namespace = name_space;
        additional_range5_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
        additional_range5_high.value_namespace = name_space;
        additional_range5_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
        additional_range6_low.value_namespace = name_space;
        additional_range6_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
        additional_range6_high.value_namespace = name_space;
        additional_range6_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
        additional_range7_low.value_namespace = name_space;
        additional_range7_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
        additional_range7_high.value_namespace = name_space;
        additional_range7_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
        additional_range8_low.value_namespace = name_space;
        additional_range8_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
        additional_range8_high.value_namespace = name_space;
        additional_range8_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
        outer_class_of_service.value_namespace = name_space;
        outer_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
        inner_class_of_service.value_namespace = name_space;
        inner_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
        payload_ethertype_match.value_namespace = name_space;
        payload_ethertype_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
        ingress_source_mac.value_namespace = name_space;
        ingress_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
        ingress_destination_mac.value_namespace = name_space;
        ingress_destination_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low.yfilter = yfilter;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high.yfilter = yfilter;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type.yfilter = yfilter;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low.yfilter = yfilter;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low.yfilter = yfilter;
    }
    if(value_path == "additional-range1-high")
    {
        additional_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low.yfilter = yfilter;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high.yfilter = yfilter;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low.yfilter = yfilter;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high.yfilter = yfilter;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low.yfilter = yfilter;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high.yfilter = yfilter;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low.yfilter = yfilter;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high.yfilter = yfilter;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low.yfilter = yfilter;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high.yfilter = yfilter;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low.yfilter = yfilter;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high.yfilter = yfilter;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low.yfilter = yfilter;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high.yfilter = yfilter;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service.yfilter = yfilter;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service.yfilter = yfilter;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match.yfilter = yfilter;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac.yfilter = yfilter;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag-type" || name == "outer-range1-low" || name == "outer-range1-high" || name == "inner-tag-type" || name == "inner-range1-low" || name == "inner-range1-high" || name == "additional-range1-low" || name == "additional-range1-high" || name == "additional-range2-low" || name == "additional-range2-high" || name == "additional-range3-low" || name == "additional-range3-high" || name == "additional-range4-low" || name == "additional-range4-high" || name == "additional-range5-low" || name == "additional-range5-high" || name == "additional-range6-low" || name == "additional-range6-high" || name == "additional-range7-low" || name == "additional-range7-high" || name == "additional-range8-low" || name == "additional-range8-high" || name == "outer-class-of-service" || name == "inner-class-of-service" || name == "payload-ethertype-match" || name == "ingress-source-mac" || name == "ingress-destination-mac" || name == "exact")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::MacAccounting()
    :
    ingress{YType::empty, "ingress"},
    egress{YType::empty, "egress"}
{

    yang_name = "mac-accounting"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::~MacAccounting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_data() const
{
    if (is_presence_container) return true;
    return ingress.is_set
	|| egress.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(egress.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:mac-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MacAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MacAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EthernetFeatures()
    :
    filtering{YType::enumeration, "filtering"},
    ether_link_oam_enable{YType::empty, "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam-enable"}
        ,
    cfm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm>())
    , ether_link_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>())
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
    if (is_presence_container) return true;
    return filtering.is_set
	|| ether_link_oam_enable.is_set
	|| (cfm !=  nullptr && cfm->has_data())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filtering.yfilter)
	|| ydk::is_set(ether_link_oam_enable.yfilter)
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

    if (filtering.is_set || is_set(filtering.yfilter)) leaf_name_data.push_back(filtering.get_name_leafdata());
    if (ether_link_oam_enable.is_set || is_set(ether_link_oam_enable.yfilter)) leaf_name_data.push_back(ether_link_oam_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-ethernet-cfm-cfg:cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam")
    {
        if(ether_link_oam == nullptr)
        {
            ether_link_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>();
        }
        return ether_link_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cfm != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-cfm-cfg:cfm"] = cfm;
    }

    if(ether_link_oam != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam"] = ether_link_oam;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filtering")
    {
        filtering = value;
        filtering.value_namespace = name_space;
        filtering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam-enable")
    {
        ether_link_oam_enable = value;
        ether_link_oam_enable.value_namespace = name_space;
        ether_link_oam_enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filtering")
    {
        filtering.yfilter = yfilter;
    }
    if(value_path == "ether-link-oam-enable")
    {
        ether_link_oam_enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm" || name == "ether-link-oam" || name == "filtering" || name == "ether-link-oam-enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Cfm()
    :
    domains(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>())
    , ais_up(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>())
{
    domains->parent = this;
    ais_up->parent = this;

    yang_name = "cfm"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::~Cfm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return (domains !=  nullptr && domains->has_data())
	|| (ais_up !=  nullptr && ais_up->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (domains !=  nullptr && domains->has_operation())
	|| (ais_up !=  nullptr && ais_up->has_operation());
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domains")
    {
        if(domains == nullptr)
        {
            domains = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>();
        }
        return domains;
    }

    if(child_yang_name == "ais-up")
    {
        if(ais_up == nullptr)
        {
            ais_up = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>();
        }
        return ais_up;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domains != nullptr)
    {
        _children["domains"] = domains;
    }

    if(ais_up != nullptr)
    {
        _children["ais-up"] = ais_up;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domains" || name == "ais-up")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domains()
    :
    domain(this, {"domain"})
{

    yang_name = "domains"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::~Domains()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain>();
        ent_->parent = this;
        domain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "domain";
    ADD_KEY_TOKEN(domain, "domain");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mep != nullptr)
    {
        _children["mep"] = mep;
    }

    return _children;
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
    sla_profile_target_mep_ids(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds>())
    , mep_properties(nullptr) // presence node
    , loss_measurement_counters(nullptr) // presence node
{
    sla_profile_target_mep_ids->parent = this;

    yang_name = "mep"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::~Mep()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_data() const
{
    if (is_presence_container) return true;
    return cos.is_set
	|| (sla_profile_target_mep_ids !=  nullptr && sla_profile_target_mep_ids->has_data())
	|| (mep_properties !=  nullptr && mep_properties->has_data())
	|| (loss_measurement_counters !=  nullptr && loss_measurement_counters->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| (sla_profile_target_mep_ids !=  nullptr && sla_profile_target_mep_ids->has_operation())
	|| (mep_properties !=  nullptr && mep_properties->has_operation())
	|| (loss_measurement_counters !=  nullptr && loss_measurement_counters->has_operation());
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-profile-target-mep-ids")
    {
        if(sla_profile_target_mep_ids == nullptr)
        {
            sla_profile_target_mep_ids = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds>();
        }
        return sla_profile_target_mep_ids;
    }

    if(child_yang_name == "mep-properties")
    {
        if(mep_properties == nullptr)
        {
            mep_properties = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties>();
        }
        return mep_properties;
    }

    if(child_yang_name == "loss-measurement-counters")
    {
        if(loss_measurement_counters == nullptr)
        {
            loss_measurement_counters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters>();
        }
        return loss_measurement_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sla_profile_target_mep_ids != nullptr)
    {
        _children["sla-profile-target-mep-ids"] = sla_profile_target_mep_ids;
    }

    if(mep_properties != nullptr)
    {
        _children["mep-properties"] = mep_properties;
    }

    if(loss_measurement_counters != nullptr)
    {
        _children["loss-measurement-counters"] = loss_measurement_counters;
    }

    return _children;
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
    if(name == "sla-profile-target-mep-ids" || name == "mep-properties" || name == "loss-measurement-counters" || name == "cos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepIds()
    :
    sla_profile_target_mep_id(this, {"profile", "target_mep_id"})
    , sla_profile_target_mac_address(this, {"profile", "target_mac_address"})
{

    yang_name = "sla-profile-target-mep-ids"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::~SlaProfileTargetMepIds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sla_profile_target_mep_id.len(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mac_address.len(); index++)
    {
        if(sla_profile_target_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_operation() const
{
    for (std::size_t index=0; index<sla_profile_target_mep_id.len(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mac_address.len(); index++)
    {
        if(sla_profile_target_mac_address[index]->has_operation())
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-profile-target-mep-id")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId>();
        ent_->parent = this;
        sla_profile_target_mep_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sla-profile-target-mac-address")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress>();
        ent_->parent = this;
        sla_profile_target_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sla_profile_target_mep_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sla_profile_target_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sla-profile-target-mep-id" || name == "sla-profile-target-mac-address")
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
    if (is_presence_container) return true;
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
    path_buffer << "sla-profile-target-mep-id";
    ADD_KEY_TOKEN(profile, "profile");
    ADD_KEY_TOKEN(target_mep_id, "target-mep-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mep_id.is_set || is_set(target_mep_id.yfilter)) leaf_name_data.push_back(target_mep_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "sla-profile-target-mac-address";
    ADD_KEY_TOKEN(profile, "profile");
    ADD_KEY_TOKEN(target_mac_address, "target-mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mac_address.is_set || is_set(target_mac_address.yfilter)) leaf_name_data.push_back(target_mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::MepProperties()
    :
    service{YType::str, "service"},
    mep_id{YType::uint32, "mep-id"}
{

    yang_name = "mep-properties"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::~MepProperties()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_data() const
{
    if (is_presence_container) return true;
    return service.is_set
	|| mep_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(mep_id.yfilter);
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

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "mep-id")
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

    yang_name = "loss-measurement-counters"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::~LossMeasurementCounters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transmission != nullptr)
    {
        _children["transmission"] = transmission;
    }

    return _children;
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

