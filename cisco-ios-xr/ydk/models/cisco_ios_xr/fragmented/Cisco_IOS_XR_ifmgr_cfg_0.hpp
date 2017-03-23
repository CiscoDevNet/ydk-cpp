#ifndef _CISCO_IOS_XR_IFMGR_CFG_0_
#define _CISCO_IOS_XR_IFMGR_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {

class GlobalInterfaceConfiguration : public Entity
{
    public:
        GlobalInterfaceConfiguration();
        ~GlobalInterfaceConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf link_status; //type: LinkStatusEnumEnum



}; // GlobalInterfaceConfiguration

class InterfaceConfigurations : public Entity
{
    public:
        InterfaceConfigurations();
        ~InterfaceConfigurations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class InterfaceConfiguration; //type: InterfaceConfigurations::InterfaceConfiguration

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration> > interface_configuration;


}; // InterfaceConfigurations


class InterfaceConfigurations::InterfaceConfiguration : public Entity
{
    public:
        InterfaceConfiguration();
        ~InterfaceConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: string
        YLeaf interface_name; //type: string
        YLeaf shutdown; //type: empty
        YLeaf interface_virtual; //type: empty
        YLeaf secondary_admin_state; //type: SecondaryAdminStateEnumEnum
        YLeaf interface_mode_non_physical; //type: InterfaceModeEnumEnum
        YLeaf bandwidth; //type: uint32
        YLeaf link_status; //type: empty
        YLeaf description; //type: string
        YLeaf maintenance_embargo; //type: boolean
        YLeaf vrf; //type: string
        YLeaf mac_addr; //type: string
        YLeaf track_name; //type: string
        YLeaf laser_squelch; //type: empty
        YLeaf perf_mon_disable; //type: empty

        class Dampening; //type: InterfaceConfigurations::InterfaceConfiguration::Dampening
        class Mtus; //type: InterfaceConfigurations::InterfaceConfiguration::Mtus
        class Encapsulation; //type: InterfaceConfigurations::InterfaceConfiguration::Encapsulation
        class PseudowireEther; //type: InterfaceConfigurations::InterfaceConfiguration::PseudowireEther
        class PseudowireIw; //type: InterfaceConfigurations::InterfaceConfiguration::PseudowireIw
        class Bvi; //type: InterfaceConfigurations::InterfaceConfiguration::Bvi
        class L2Transport; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport
        class VlanSubConfiguration; //type: InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration
        class EthernetService; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetService
        class EthernetBng; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetBng
        class MacAccounting; //type: InterfaceConfigurations::InterfaceConfiguration::MacAccounting
        class EthernetFeatures; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures
        class CarrierDelay; //type: InterfaceConfigurations::InterfaceConfiguration::CarrierDelay
        class VlanTrunkConfiguration; //type: InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration
        class Pbr; //type: InterfaceConfigurations::InterfaceConfiguration::Pbr
        class Dwdm; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm
        class Ethernet; //type: InterfaceConfigurations::InterfaceConfiguration::Ethernet
        class CiscoIosXrPppMaFsmCfg_Ppp; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp
        class Afs; //type: InterfaceConfigurations::InterfaceConfiguration::Afs
        class Nve; //type: InterfaceConfigurations::InterfaceConfiguration::Nve
        class Ipv6Neighbor; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor
        class NetFlow; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow
        class Lldp; //type: InterfaceConfigurations::InterfaceConfiguration::Lldp
        class Atm; //type: InterfaceConfigurations::InterfaceConfiguration::Atm
        class Subscriber; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber
        class Dagrs; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs
        class Ipv4Arp; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp
        class ClientPort; //type: InterfaceConfigurations::InterfaceConfiguration::ClientPort
        class TunnelTeAttributes; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes
        class TransportProfileTunnel; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel
        class MteTunnelAttributes; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes
        class TunnelIp; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp
        class SsrpSession; //type: InterfaceConfigurations::InterfaceConfiguration::SsrpSession
        class NvSatelliteAccess; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess
        class NvSatelliteFabricLink; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink
        class NvSatelliteFabricNetwork; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork
        class SpanMonitorSessions; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions
        class CiscoIosXrPppMaCfg_Ppp; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp
        class Ipv4Network; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network
        class Ipv4NetworkForwarding; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding
        class PerformanceManagement; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement
        class Macsec; //type: InterfaceConfigurations::InterfaceConfiguration::Macsec
        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::Qos
        class Optics; //type: InterfaceConfigurations::InterfaceConfiguration::Optics
        class Bfd; //type: InterfaceConfigurations::InterfaceConfiguration::Bfd
        class Bundle; //type: InterfaceConfigurations::InterfaceConfiguration::Bundle
        class Lacp; //type: InterfaceConfigurations::InterfaceConfiguration::Lacp
        class BundleMember; //type: InterfaceConfigurations::InterfaceConfiguration::BundleMember
        class Mlacp; //type: InterfaceConfigurations::InterfaceConfiguration::Mlacp
        class CiscoIosXrPppMaIpcpiwCfg_Ppp; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp
        class CiscoIosXrPppMaLcpCfg_Ppp; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp
        class Wanphy; //type: InterfaceConfigurations::InterfaceConfiguration::Wanphy
        class Statistics; //type: InterfaceConfigurations::InterfaceConfiguration::Statistics
        class Ipv6Network; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network
        class Pppoe; //type: InterfaceConfigurations::InterfaceConfiguration::Pppoe
        class CiscoIosXrPppMaIpcpCfg_Ppp; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp
        class AaaTable; //type: InterfaceConfigurations::InterfaceConfiguration::AaaTable
        class Otu; //type: InterfaceConfigurations::InterfaceConfiguration::Otu
        class EthernetControl; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetControl
        class Cdp; //type: InterfaceConfigurations::InterfaceConfiguration::Cdp
        class Ipv6PacketFilter; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter
        class EsPacketFilter; //type: InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter
        class Ipv4PacketFilter; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter
        class ServicePolicies; //type: InterfaceConfigurations::InterfaceConfiguration::ServicePolicies

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::AaaTable> aaa_table;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle> bundle;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::BundleMember> bundle_member;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bvi> bvi;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Cdp> cdp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp> cisco_ios_xr_ppp_ma_cfg_ppp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp> cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp> cisco_ios_xr_ppp_ma_ipcp_cfg_ppp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp> cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp> cisco_ios_xr_ppp_ma_lcp_cfg_ppp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort> client_port;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs> dagrs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dampening> dampening;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm> dwdm;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter> es_packet_filter;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetBng> ethernet_bng;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetControl> ethernet_control;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures> ethernet_features;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService> ethernet_service;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network> ipv4_network;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding> ipv4_network_forwarding;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter> ipv4_packet_filter;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp> ipv4arp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor> ipv6_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network> ipv6_network;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter> ipv6_packet_filter;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport> l2_transport;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lacp> lacp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp> lldp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MacAccounting> mac_accounting;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Macsec> macsec;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Mlacp> mlacp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes> mte_tunnel_attributes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Mtus> mtus;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow> net_flow;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess> nv_satellite_access;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink> nv_satellite_fabric_link;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork> nv_satellite_fabric_network;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve> nve;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics> optics;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu> otu;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Pbr> pbr;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement> performance_management;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos> qos;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ServicePolicies> service_policies;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions> span_monitor_sessions;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SsrpSession> ssrp_session;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber> subscriber;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel> transport_profile_tunnel;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp> tunnel_ip;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes> tunnel_te_attributes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration> vlan_sub_configuration;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration> vlan_trunk_configuration;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Wanphy> wanphy;


}; // InterfaceConfigurations::InterfaceConfiguration


class InterfaceConfigurations::InterfaceConfiguration::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf args; //type: ArgsEnum
        YLeaf half_life; //type: uint32
        YLeaf reuse_threshold; //type: uint32
        YLeaf suppress_threshold; //type: uint32
        YLeaf suppress_time; //type: uint32
        YLeaf restart_penalty; //type: uint32

        class ArgsEnum;


}; // InterfaceConfigurations::InterfaceConfiguration::Dampening


class InterfaceConfigurations::InterfaceConfiguration::Mtus : public Entity
{
    public:
        Mtus();
        ~Mtus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mtu; //type: InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu> > mtu;


}; // InterfaceConfigurations::InterfaceConfiguration::Mtus


class InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu : public Entity
{
    public:
        Mtu();
        ~Mtu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner; //type: string
        YLeaf mtu; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu


class InterfaceConfigurations::InterfaceConfiguration::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf encapsulation; //type: string
        YLeaf capsulation_options; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::Encapsulation


class InterfaceConfigurations::InterfaceConfiguration::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_interface_list; //type: string
        YLeaf l2_overhead; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::PseudowireEther


class InterfaceConfigurations::InterfaceConfiguration::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2_overhead; //type: uint32
        YLeaf generic_interface_list; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::PseudowireIw


class InterfaceConfigurations::InterfaceConfiguration::Bvi : public Entity
{
    public:
        Bvi();
        ~Bvi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf host_routing; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Bvi


class InterfaceConfigurations::InterfaceConfiguration::L2Transport : public Entity
{
    public:
        L2Transport();
        ~L2Transport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: empty
        YLeaf propagate_remote_status; //type: empty

        class L2Protocols; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols
        class L2EthernetFeatures; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures
        class AtmPortModeParameters; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters
        class SpanMonitorSessions; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions
        class Pac; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac
        class Cac; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters> atm_port_mode_parameters;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac> cac;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures> l2_ethernet_features;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols> l2_protocols;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac> pac;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions> span_monitor_sessions;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols : public Entity
{
    public:
        L2Protocols();
        ~L2Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2Protocol; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol> > l2_protocol;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol : public Entity
{
    public:
        L2Protocol();
        ~L2Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2_protocol_name; //type: L2ProtocolNameEnum
        YLeaf mode; //type: L2ProtocolModeEnum
        YLeaf mpls_exp_bits_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures : public Entity
{
    public:
        L2EthernetFeatures();
        ~L2EthernetFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf egress_filtering; //type: EgressFilteringEnum
        YLeaf source_bypass_egress_filtering; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters : public Entity
{
    public:
        AtmPortModeParameters();
        ~AtmPortModeParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CellPacking; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking> cell_packing; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking : public Entity
{
    public:
        CellPacking();
        ~CellPacking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_cells_packed; //type: uint32
        YLeaf cell_packing_timer_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions : public Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpanMonitorSession; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession : public Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_class; //type: SpanSessionClassEnum
        YLeaf mirror_first; //type: uint32
        YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
        YLeaf acl; //type: empty

        class Attachment; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment : public Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_name; //type: string
        YLeaf direction; //type: SpanTrafficDirectionEnum
        YLeaf port_level_enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac : public Entity
{
    public:
        Pac();
        ~Pac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos> qos;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy
        class ServicePolicyQos; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy> > service_policy;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos> > service_policy_qos;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string
        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos : public Entity
{
    public:
        ServicePolicyQos();
        ~ServicePolicyQos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string

        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent> subscriber_parent;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames : public Entity
{
    public:
        SubscriberGroupNames();
        ~SubscriberGroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName> > subscriber_group_name;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public Entity
{
    public:
        SubscriberGroupName();
        ~SubscriberGroupName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subscriber_group_string; //type: string
        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf policy_merge; //type: QosFieldNotSupportedEnum
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent : public Entity
{
    public:
        SubscriberParent();
        ~SubscriberParent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf policy_merge; //type: QosFieldNotSupportedEnum
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy
        class ServicePolicyQos; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy> > service_policy;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos> > service_policy_qos;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string
        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos : public Entity
{
    public:
        ServicePolicyQos();
        ~ServicePolicyQos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string

        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent> subscriber_parent;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames : public Entity
{
    public:
        SubscriberGroupNames();
        ~SubscriberGroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName> > subscriber_group_name;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public Entity
{
    public:
        SubscriberGroupName();
        ~SubscriberGroupName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subscriber_group_string; //type: string
        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf policy_merge; //type: QosFieldNotSupportedEnum
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent : public Entity
{
    public:
        SubscriberParent();
        ~SubscriberParent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf policy_merge; //type: QosFieldNotSupportedEnum
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac : public Entity
{
    public:
        Cac();
        ~Cac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos> qos;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy
        class ServicePolicyQos; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy> > service_policy;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos> > service_policy_qos;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string
        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos : public Entity
{
    public:
        ServicePolicyQos();
        ~ServicePolicyQos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string

        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent> subscriber_parent;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames : public Entity
{
    public:
        SubscriberGroupNames();
        ~SubscriberGroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName> > subscriber_group_name;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public Entity
{
    public:
        SubscriberGroupName();
        ~SubscriberGroupName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subscriber_group_string; //type: string
        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf policy_merge; //type: QosFieldNotSupportedEnum
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent : public Entity
{
    public:
        SubscriberParent();
        ~SubscriberParent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf policy_merge; //type: QosFieldNotSupportedEnum
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy
        class ServicePolicyQos; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy> > service_policy;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos> > service_policy_qos;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string
        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos : public Entity
{
    public:
        ServicePolicyQos();
        ~ServicePolicyQos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string

        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent> subscriber_parent;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames : public Entity
{
    public:
        SubscriberGroupNames();
        ~SubscriberGroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName> > subscriber_group_name;


}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public Entity
{
    public:
        SubscriberGroupName();
        ~SubscriberGroupName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subscriber_group_string; //type: string
        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf policy_merge; //type: QosFieldNotSupportedEnum
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent : public Entity
{
    public:
        SubscriberParent();
        ~SubscriberParent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf account_type; //type: QosPolicyAccountEnum
        YLeaf l1_user_defined; //type: int32
        YLeaf spi_name; //type: string
        YLeaf policy_merge; //type: QosFieldNotSupportedEnum
        YLeaf subscriber_parent_policy; //type: boolean
        YLeaf resource_id; //type: uint32
        YLeaf service_fragment_parent_policy; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration : public Entity
{
    public:
        VlanSubConfiguration();
        ~VlanSubConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VlanIdentifier; //type: InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier> vlan_identifier; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration


class InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier : public Entity
{
    public:
        VlanIdentifier();
        ~VlanIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vlan_type; //type: VlanEnum
        YLeaf first_tag; //type: uint32
        YLeaf second_tag; //type: one of uint32, enumeration



}; // InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier


class InterfaceConfigurations::InterfaceConfiguration::EthernetService : public Entity
{
    public:
        EthernetService();
        ~EthernetService();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocalTrafficDefaultEncapsulation; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation
        class Encapsulation; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation
        class Rewrite; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation> encapsulation; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation> local_traffic_default_encapsulation; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite> rewrite; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetService


class InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation : public Entity
{
    public:
        LocalTrafficDefaultEncapsulation();
        ~LocalTrafficDefaultEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outer_tag_type; //type: VlanEnum
        YLeaf outer_vlan_id; //type: uint32
        YLeaf inner_vlan_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation


class InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outer_tag_type; //type: MatchEnum
        YLeaf outer_range1_low; //type: one of uint32, enumeration
        YLeaf outer_range1_high; //type: one of uint32, enumeration
        YLeaf inner_tag_type; //type: MatchEnum
        YLeaf inner_range1_low; //type: one of uint32, enumeration
        YLeaf inner_range1_high; //type: uint32
        YLeaf additional_range1_low; //type: one of uint32, enumeration
        YLeaf additional_range1_high; //type: uint32
        YLeaf additional_range2_low; //type: one of uint32, enumeration
        YLeaf additional_range2_high; //type: uint32
        YLeaf additional_range3_low; //type: one of uint32, enumeration
        YLeaf additional_range3_high; //type: uint32
        YLeaf additional_range4_low; //type: one of uint32, enumeration
        YLeaf additional_range4_high; //type: uint32
        YLeaf additional_range5_low; //type: one of uint32, enumeration
        YLeaf additional_range5_high; //type: uint32
        YLeaf additional_range6_low; //type: one of uint32, enumeration
        YLeaf additional_range6_high; //type: uint32
        YLeaf additional_range7_low; //type: one of uint32, enumeration
        YLeaf additional_range7_high; //type: uint32
        YLeaf additional_range8_low; //type: one of uint32, enumeration
        YLeaf additional_range8_high; //type: uint32
        YLeaf outer_class_of_service; //type: uint32
        YLeaf inner_class_of_service; //type: uint32
        YLeaf payload_ethertype_match; //type: EthertypeMatchEnum
        YLeaf ingress_source_mac; //type: string
        YLeaf ingress_destination_mac; //type: string
        YLeaf exact; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation


class InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite : public Entity
{
    public:
        Rewrite();
        ~Rewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rewrite_type; //type: RewriteEnum
        YLeaf outer_tag_type; //type: MatchEnum
        YLeaf outer_tag_value; //type: uint32
        YLeaf inner_tag_type; //type: MatchEnum
        YLeaf inner_tag_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite


class InterfaceConfigurations::InterfaceConfiguration::EthernetBng : public Entity
{
    public:
        EthernetBng();
        ~EthernetBng();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AmbiguousEncapsulation; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation> ambiguous_encapsulation; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetBng


class InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation : public Entity
{
    public:
        AmbiguousEncapsulation();
        ~AmbiguousEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outer_tag_type; //type: MatchEnum
        YLeaf outer_range1_low; //type: one of uint32, enumeration
        YLeaf outer_range1_high; //type: one of uint32, enumeration
        YLeaf inner_tag_type; //type: MatchEnum
        YLeaf inner_range1_low; //type: one of uint32, enumeration
        YLeaf inner_range1_high; //type: uint32
        YLeaf additional_range1_low; //type: one of uint32, enumeration
        YLeaf additional_range1_high; //type: uint32
        YLeaf additional_range2_low; //type: one of uint32, enumeration
        YLeaf additional_range2_high; //type: uint32
        YLeaf additional_range3_low; //type: one of uint32, enumeration
        YLeaf additional_range3_high; //type: uint32
        YLeaf additional_range4_low; //type: one of uint32, enumeration
        YLeaf additional_range4_high; //type: uint32
        YLeaf additional_range5_low; //type: one of uint32, enumeration
        YLeaf additional_range5_high; //type: uint32
        YLeaf additional_range6_low; //type: one of uint32, enumeration
        YLeaf additional_range6_high; //type: uint32
        YLeaf additional_range7_low; //type: one of uint32, enumeration
        YLeaf additional_range7_high; //type: uint32
        YLeaf additional_range8_low; //type: one of uint32, enumeration
        YLeaf additional_range8_high; //type: uint32
        YLeaf outer_class_of_service; //type: uint32
        YLeaf inner_class_of_service; //type: uint32
        YLeaf payload_ethertype_match; //type: EthertypeMatchEnum
        YLeaf ingress_source_mac; //type: string
        YLeaf ingress_destination_mac; //type: string
        YLeaf exact; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation


class InterfaceConfigurations::InterfaceConfiguration::MacAccounting : public Entity
{
    public:
        MacAccounting();
        ~MacAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ingress; //type: empty
        YLeaf egress; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::MacAccounting


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures : public Entity
{
    public:
        EthernetFeatures();
        ~EthernetFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf filtering; //type: FilteringEnum
        YLeaf ether_link_oam_enable; //type: empty

        class Cfm; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm
        class EtherLinkOam; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm> cfm;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam> ether_link_oam;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm : public Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Domains; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains
        class AisUp; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp> ais_up;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains> domains;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains : public Entity
{
    public:
        Domains();
        ~Domains();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Domain; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain> > domain;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain; //type: string

        class Mep; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep> mep;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep : public Entity
{
    public:
        Mep();
        ~Mep();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cos; //type: uint32

        class SlaProfileTargetMepIds; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds
        class MepProperties; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties
        class LossMeasurementCounters; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters> loss_measurement_counters; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties> mep_properties; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds> sla_profile_target_mep_ids;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds : public Entity
{
    public:
        SlaProfileTargetMepIds();
        ~SlaProfileTargetMepIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SlaProfileTargetMepId; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId
        class SlaProfileTargetMacAddress; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress> > sla_profile_target_mac_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId> > sla_profile_target_mep_id;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId : public Entity
{
    public:
        SlaProfileTargetMepId();
        ~SlaProfileTargetMepId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile; //type: string
        YLeaf target_mep_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress : public Entity
{
    public:
        SlaProfileTargetMacAddress();
        ~SlaProfileTargetMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile; //type: string
        YLeaf target_mac_address; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties : public Entity
{
    public:
        MepProperties();
        ~MepProperties();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: string
        YLeaf mep_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters : public Entity
{
    public:
        LossMeasurementCounters();
        ~LossMeasurementCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cfg_type; //type: CfmLmCountersCfgEnum
        YLeaf cos0; //type: uint32
        YLeaf cos1; //type: uint32
        YLeaf cos2; //type: uint32
        YLeaf cos3; //type: uint32
        YLeaf cos4; //type: uint32
        YLeaf cos5; //type: uint32
        YLeaf cos6; //type: uint32
        YLeaf cos7; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp : public Entity
{
    public:
        AisUp();
        ~AisUp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Transmission; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission> transmission; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission : public Entity
{
    public:
        Transmission();
        ~Transmission();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ais_interval; //type: CfmAisIntervalEnum
        YLeaf cos; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam : public Entity
{
    public:
        EtherLinkOam();
        ~EtherLinkOam();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timeout; //type: uint32
        YLeaf mode; //type: EtherLinkOamModeEnumEnum
        YLeaf mib_retrieval; //type: boolean
        YLeaf profile_name; //type: string
        YLeaf remote_loopback; //type: boolean
        YLeaf hello_interval; //type: EtherLinkOamHelloIntervalEnumEnum
        YLeaf udlf; //type: boolean

        class Action; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action
        class RequireRemote; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote
        class LinkMonitoring; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action> action;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring> link_monitoring;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote> require_remote;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dying_gasp; //type: EtherLinkOamEventActionEnumEnum
        YLeaf link_fault; //type: EtherLinkOamEventActionEnumEfdEnum
        YLeaf capabilities_conflict; //type: EtherLinkOamEventActionEnumEfdEnum
        YLeaf session_up; //type: EtherLinkOamEventActionPrimEnumEnum
        YLeaf critical_event; //type: EtherLinkOamEventActionEnumEnum
        YLeaf remote_loopback; //type: EtherLinkOamEventActionPrimEnumEnum
        YLeaf wiring_conflict; //type: EtherLinkOamEventActionEnumEfdEnum
        YLeaf high_threshold; //type: EtherLinkOamEventActionEnumEnum
        YLeaf discovery_timeout; //type: EtherLinkOamEventActionEnumEfdEnum
        YLeaf session_down; //type: EtherLinkOamEventActionEnumEfdEnum



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote : public Entity
{
    public:
        RequireRemote();
        ~RequireRemote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode; //type: EtherLinkOamRequireModeEnumEnum
        YLeaf mib_retrieval; //type: boolean
        YLeaf remote_loopback; //type: boolean
        YLeaf link_monitoring; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring : public Entity
{
    public:
        LinkMonitoring();
        ~LinkMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitoring; //type: boolean

        class SymbolPeriod; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod
        class FramePeriod; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod
        class FrameSeconds; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds
        class Frame; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame> frame;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod> frame_period;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds> frame_seconds;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod> symbol_period;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod : public Entity
{
    public:
        SymbolPeriod();
        ~SymbolPeriod();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Window; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window
        class Threshold; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold> threshold;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window> window; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window : public Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf window; //type: uint32
        YLeaf units; //type: EtherLinkOamWindowUnitsSymbolsEnumEnum
        YLeaf multiplier; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf threshold_low; //type: uint32
        YLeaf threshold_high; //type: uint32
        YLeaf units; //type: EtherLinkOamThresholdUnitsSymbolsEnumEnum
        YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum
        YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod : public Entity
{
    public:
        FramePeriod();
        ~FramePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Window; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window
        class Threshold; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold> threshold;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window> window; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window : public Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf window; //type: uint32
        YLeaf units; //type: EtherLinkOamWindowUnitsFramesEnumEnum
        YLeaf multiplier; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf threshold_low; //type: uint32
        YLeaf threshold_high; //type: uint32
        YLeaf units; //type: EtherLinkOamThresholdUnitsFramesEnumEnum
        YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum
        YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds : public Entity
{
    public:
        FrameSeconds();
        ~FrameSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf window; //type: uint32

        class Threshold; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold> threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf threshold_low; //type: uint32
        YLeaf threshold_high; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame : public Entity
{
    public:
        Frame();
        ~Frame();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf window; //type: uint32

        class Threshold; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold> threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf threshold_low; //type: uint32
        YLeaf threshold_high; //type: uint32
        YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum
        YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold


class InterfaceConfigurations::InterfaceConfiguration::CarrierDelay : public Entity
{
    public:
        CarrierDelay();
        ~CarrierDelay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf carrier_delay_up; //type: uint32
        YLeaf carrier_delay_down; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::CarrierDelay


class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration : public Entity
{
    public:
        VlanTrunkConfiguration();
        ~VlanTrunkConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunneling_ethertype; //type: TunnelingEthertypeEnum

        class NativeVlanIdentifier; //type: InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier> native_vlan_identifier; // presence node
        class TunnelingEthertypeEnum;


}; // InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration


class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier : public Entity
{
    public:
        NativeVlanIdentifier();
        ~NativeVlanIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vlan_type; //type: VlanEnum
        YLeaf vlan_identifier; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier


class InterfaceConfigurations::InterfaceConfiguration::Pbr : public Entity
{
    public:
        Pbr();
        ~Pbr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_in; //type: string

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy> service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::Pbr


class InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf input; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::Dwdm : public Entity
{
    public:
        Dwdm();
        ~Dwdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable_vtxp; //type: boolean
        YLeaf network_port_id; //type: string
        YLeaf transport_admin_state; //type: DwdmAdminStateEnum
        YLeaf laser; //type: empty
        YLeaf transmit_power; //type: int32
        YLeaf rx_threshold; //type: int32
        YLeaf network_connection_id; //type: string
        YLeaf loopback; //type: DwdmLoopbackEnum

        class NetworkSrlgs; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs
        class G709; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709
        class Wavelength; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709> g709;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs> network_srlgs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength> wavelength; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs : public Entity
{
    public:
        NetworkSrlgs();
        ~NetworkSrlgs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetworkSrlg; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg> > network_srlg;


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg : public Entity
{
    public:
        NetworkSrlg();
        ~NetworkSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_id; //type: uint32
        YLeaf srlg1; //type: uint32
        YLeaf srlg2; //type: uint32
        YLeaf srlg3; //type: uint32
        YLeaf srlg4; //type: uint32
        YLeaf srlg5; //type: uint32
        YLeaf srlg6; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709 : public Entity
{
    public:
        G709();
        ~G709();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf proactive; //type: ProactiveEnum
        YLeaf bdi_to_gais; //type: empty
        YLeaf tim_to_gais; //type: empty
        YLeaf proactive_logging_file; //type: string
        YLeaf tti_processing; //type: empty
        YLeaf enable; //type: boolean
        YLeaf framing; //type: FramingEnum

        class Odu; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu
        class Otu; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu
        class Prbs; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs
        class Fec; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec> fec; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu> odu;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu> otu;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs> prbs; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu : public Entity
{
    public:
        Odu();
        ~Odu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduReports; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports
        class OduThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds
        class OduExpectedTti; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti
        class OduTxTti; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti> odu_expected_tti;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports> odu_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds> odu_thresholds;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti> odu_tx_tti;


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports : public Entity
{
    public:
        OduReports();
        ~OduReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduReport; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport> > odu_report;


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport : public Entity
{
    public:
        OduReport();
        ~OduReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf alarm; //type: OduAlarmEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds : public Entity
{
    public:
        OduThresholds();
        ~OduThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold> > odu_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold : public Entity
{
    public:
        OduThreshold();
        ~OduThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf threshold; //type: OduThresholdEnum
        YLeaf threshold_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti : public Entity
{
    public:
        OduExpectedTti();
        ~OduExpectedTti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: ExpectedTtiEnum
        YLeaf ascii_string; //type: string
        YLeaf hex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti : public Entity
{
    public:
        OduTxTti();
        ~OduTxTti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: TxTtiEnum
        YLeaf ascii_string; //type: string
        YLeaf hex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu : public Entity
{
    public:
        Otu();
        ~Otu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuExpectedTti; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti
        class OtuThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds
        class Frr; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr
        class OtuReports; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports
        class OtuTxTti; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr> frr;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti> otu_expected_tti;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports> otu_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds> otu_thresholds;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti> otu_tx_tti;


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti : public Entity
{
    public:
        OtuExpectedTti();
        ~OtuExpectedTti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: ExpectedTtiEnum
        YLeaf ascii_string; //type: string
        YLeaf hex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds : public Entity
{
    public:
        OtuThresholds();
        ~OtuThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold> > otu_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold : public Entity
{
    public:
        OtuThreshold();
        ~OtuThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf threshold; //type: OtuThresholdEnum
        YLeaf threshold_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr : public Entity
{
    public:
        Frr();
        ~Frr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TriggerWindow; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow
        class RevertThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold
        class TriggerThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold
        class RevertWindow; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold> revert_threshold; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow> revert_window; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold> trigger_threshold; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow> trigger_window; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow : public Entity
{
    public:
        TriggerWindow();
        ~TriggerWindow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf window; //type: uint32
        YLeaf dummy; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold : public Entity
{
    public:
        RevertThreshold();
        ~RevertThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ber_base; //type: uint32
        YLeaf ber_power; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold : public Entity
{
    public:
        TriggerThreshold();
        ~TriggerThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ber_base; //type: uint32
        YLeaf ber_power; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow : public Entity
{
    public:
        RevertWindow();
        ~RevertWindow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf window; //type: uint32
        YLeaf dummy; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports : public Entity
{
    public:
        OtuReports();
        ~OtuReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuReport; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport> > otu_report;


}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport : public Entity
{
    public:
        OtuReport();
        ~OtuReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf alarm; //type: OtuAlarmEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti : public Entity
{
    public:
        OtuTxTti();
        ~OtuTxTti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: TxTtiEnum
        YLeaf ascii_string; //type: string
        YLeaf hex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs : public Entity
{
    public:
        Prbs();
        ~Prbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prbs_mode; //type: PrbsModeEnum
        YLeaf prbs_pattern; //type: PrbsPatternEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec : public Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_mode; //type: FecEnum
        YLeaf efec_mode; //type: EfecEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength : public Entity
{
    public:
        Wavelength();
        ~Wavelength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wave_channel; //type: uint32
        YLeaf wave_channel_number; //type: WaveChannelNumEnum
        YLeaf prog_frequency; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength


class InterfaceConfigurations::InterfaceConfiguration::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf duplex; //type: EthernetDuplexEnum
        YLeaf auto_negotiation; //type: EthernetAutoNegotiationEnum
        YLeaf flow_control; //type: EthernetFlowCtrlEnum
        YLeaf forward_error_correction; //type: EthernetFecEnum
        YLeaf priority_flow_control; //type: EthernetPfcEnum
        YLeaf loopback; //type: EthernetLoopbackEnum
        YLeaf speed; //type: EthernetSpeedEnum
        YLeaf inter_packet_gap; //type: EthernetIpgEnum

        class SignalFailBitErrorRate; //type: InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate
        class SignalDegradeBitErrorRate; //type: InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate
        class CarrierDelay; //type: InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate> signal_degrade_bit_error_rate;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate> signal_fail_bit_error_rate;


}; // InterfaceConfigurations::InterfaceConfiguration::Ethernet


class InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate : public Entity
{
    public:
        SignalFailBitErrorRate();
        ~SignalFailBitErrorRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signal_remote_fault; //type: empty
        YLeaf signal_fail_threshold; //type: uint32
        YLeaf signal_fail_report_disable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate


class InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate : public Entity
{
    public:
        SignalDegradeBitErrorRate();
        ~SignalDegradeBitErrorRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signal_degrade_threshold; //type: uint32
        YLeaf signal_degrade_report; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate


class InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay : public Entity
{
    public:
        CarrierDelay();
        ~CarrierDelay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf carrier_delay_up; //type: uint32
        YLeaf carrier_delay_down; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp : public Entity
{
    public:
        CiscoIosXrPppMaFsmCfg_Ppp();
        ~CiscoIosXrPppMaFsmCfg_Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fsm; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm> fsm;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm : public Entity
{
    public:
        Fsm();
        ~Fsm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf retry_timeout; //type: uint32
        YLeaf max_unacknowledged_term_requests; //type: uint32
        YLeaf max_consecutive_conf_naks; //type: uint32
        YLeaf max_unacknowledged_conf_requests; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm


class InterfaceConfigurations::InterfaceConfiguration::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Af; //type: InterfaceConfigurations::InterfaceConfiguration::Afs::Af
        class AfTopologyName; //type: InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Afs::Af> > af;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName> > af_topology_name;


}; // InterfaceConfigurations::InterfaceConfiguration::Afs


class InterfaceConfigurations::InterfaceConfiguration::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: VrfAddressFamilyEnum
        YLeaf saf_name; //type: VrfSubAddressFamilyEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Afs::Af


class InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName : public Entity
{
    public:
        AfTopologyName();
        ~AfTopologyName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topology_name; //type: string
        YLeaf af_name; //type: VrfAddressFamilyEnum
        YLeaf saf_name; //type: VrfSubAddressFamilyEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName


class InterfaceConfigurations::InterfaceConfiguration::Nve : public Entity
{
    public:
        Nve();
        ~Nve();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vx_lan_udp_port; //type: VxlanUdpPortEnumEnum
        YLeaf overlay_encapsulation; //type: OverlayEncapEnumEnum
        YLeaf source_interface; //type: string

        class Anycast; //type: InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast
        class Redundancy; //type: InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy
        class MemberVnis; //type: InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast> anycast;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis> member_vnis;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy> redundancy;


}; // InterfaceConfigurations::InterfaceConfiguration::Nve


class InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast : public Entity
{
    public:
        Anycast();
        ~Anycast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_interface; //type: string
        YLeaf sync_group; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast


class InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class BackboneVxLan; //type: InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan
        class BackboneMpls; //type: InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls> backbone_mpls;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan> backbone_vx_lan;


}; // InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy


class InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan : public Entity
{
    public:
        BackboneVxLan();
        ~BackboneVxLan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf backbone_vx_laniccp; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan


class InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls : public Entity
{
    public:
        BackboneMpls();
        ~BackboneMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backbone_mplsiccp; //type: int32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls


class InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis : public Entity
{
    public:
        MemberVnis();
        ~MemberVnis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MemberVni; //type: InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni> > member_vni;


}; // InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis


class InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni : public Entity
{
    public:
        MemberVni();
        ~MemberVni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vni_start; //type: uint32
        YLeaf vni_end; //type: uint32
        YLeaf host_reachability; //type: HostReachProtocolEnum
        YLeaf vrf; //type: string
        YLeaf unknown_unicast_flooding; //type: UnknownUnicastFloodingEnumEnum
        YLeaf load_balance_per_evi; //type: LoadBalanceEnumEnum
        YLeaf enable; //type: empty

        class Multicast; //type: InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast> multicast; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni


class InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf multicast_group_min; //type: string
        YLeaf multicast_group_max; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor : public Entity
{
    public:
        Ipv6Neighbor();
        ~Ipv6Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reachable_time; //type: uint32
        YLeaf ra_unspecify_hoplimit; //type: empty
        YLeaf dad_attempts; //type: uint32
        YLeaf srp_multicast_encapsulation; //type: Ipv6SrpEncapsulationEnum
        YLeaf ns_interval; //type: uint32
        YLeaf cache_limit; //type: uint32
        YLeaf redirect; //type: empty
        YLeaf srp_unicast_encapsulation; //type: Ipv6SrpEncapsulationEnum
        YLeaf ramtu_suppress; //type: empty
        YLeaf managed_config; //type: empty
        YLeaf ra_unicast; //type: empty
        YLeaf ra_lifetime; //type: uint32
        YLeaf other_config; //type: empty
        YLeaf ra_suppress; //type: empty
        YLeaf router_preference; //type: Ipv6NdRouterPrefEnum

        class RaspecificRouteS; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS
        class RadnsSearches; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches
        class RadnsServers; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers
        class RaInterval; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval
        class Ipv6Prefixes; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes> ipv6_prefixes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval> ra_interval; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches> radns_searches;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers> radns_servers;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS> raspecific_route_s;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS : public Entity
{
    public:
        RaspecificRouteS();
        ~RaspecificRouteS();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RaspecificRoute; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute> > raspecific_route;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute : public Entity
{
    public:
        RaspecificRoute();
        ~RaspecificRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf specific_route; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf lifetime; //type: uint32
        YLeaf preference; //type: Ipv6NdRouterPrefEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches : public Entity
{
    public:
        RadnsSearches();
        ~RadnsSearches();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RadnsSearch; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch> > radns_search;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch : public Entity
{
    public:
        RadnsSearch();
        ~RadnsSearch();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dns_search_list; //type: string
        YLeaf lifetime; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers : public Entity
{
    public:
        RadnsServers();
        ~RadnsServers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RadnsServer; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer> > radns_server;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer : public Entity
{
    public:
        RadnsServer();
        ~RadnsServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dns_server; //type: string
        YLeaf lifetime; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval : public Entity
{
    public:
        RaInterval();
        ~RaInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum; //type: uint32
        YLeaf minimum; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes : public Entity
{
    public:
        Ipv6Prefixes();
        ~Ipv6Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6Prefix; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix> > ipv6_prefix;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix : public Entity
{
    public:
        Ipv6Prefix();
        ~Ipv6Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_zone; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf valid_lifetime; //type: uint32
        YLeaf preferred_lifetime; //type: uint32
        YLeaf off_link; //type: boolean
        YLeaf no_auto_config; //type: boolean
        YLeaf no_advertize; //type: boolean
        YLeaf expiry_month; //type: Ipv6NdMonthEnum
        YLeaf expiry_date; //type: uint32
        YLeaf expiry_year; //type: uint32
        YLeaf expiry_hour; //type: uint32
        YLeaf expiry_minute; //type: uint32
        YLeaf pref_expiry_month; //type: Ipv6NdMonthEnum
        YLeaf pref_expiry_date; //type: uint32
        YLeaf pref_expiry_year; //type: uint32
        YLeaf pref_expiry_hour; //type: uint32
        YLeaf pref_expiry_minute; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix


class InterfaceConfigurations::InterfaceConfiguration::NetFlow : public Entity
{
    public:
        NetFlow();
        ~NetFlow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DataLinkFrameSection; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection
        class Mpls; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls
        class Ipv6; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6
        class Ipv4; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection> data_link_frame_section;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls> mpls;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection : public Entity
{
    public:
        DataLinkFrameSection();
        ~DataLinkFrameSection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorMap; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap> flow_monitor_map;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap : public Entity
{
    public:
        FlowMonitorMap();
        ~FlowMonitorMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ingress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress
        class Egress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress> egress;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress> ingress;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress : public Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName : public Entity
{
    public:
        FlowMonitorName();
        ~FlowMonitorName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor_map_name; //type: string
        YLeaf sampler_map_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress : public Entity
{
    public:
        Egress();
        ~Egress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName : public Entity
{
    public:
        FlowMonitorName();
        ~FlowMonitorName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor_map_name; //type: string
        YLeaf sampler_map_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorMap; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap> flow_monitor_map;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap : public Entity
{
    public:
        FlowMonitorMap();
        ~FlowMonitorMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ingress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress
        class Egress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress> egress;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress> ingress;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress : public Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress

class InterfaceModeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf point_to_point;
        static const Enum::YLeaf multipoint;
        static const Enum::YLeaf l2_transport;

};

class SecondaryAdminStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf maintenance;

};

class LinkStatusEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf disable;
        static const Enum::YLeaf software_interfaces;

};

class InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum : public Enum
{
    public:
        static const Enum::YLeaf default_values;
        static const Enum::YLeaf specify_half_life;
        static const Enum::YLeaf specify_all;
        static const Enum::YLeaf specify_rp;

};

class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0x9100;
        static const Enum::YLeaf Y_0x9200;

};


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_0_ */

