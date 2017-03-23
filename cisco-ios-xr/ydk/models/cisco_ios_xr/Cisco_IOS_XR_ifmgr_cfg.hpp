#ifndef _CISCO_IOS_XR_IFMGR_CFG_
#define _CISCO_IOS_XR_IFMGR_CFG_

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


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress : public Entity
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



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorMap; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap> flow_monitor_map;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap : public Entity
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



        class Ingress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress
        class Egress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress> egress;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress> ingress;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress : public Entity
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



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress : public Entity
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



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorMap; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap> flow_monitor_map;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap : public Entity
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



        class Ingress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress
        class Egress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress> egress;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress> ingress;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress : public Entity
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



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress : public Entity
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



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::Lldp : public Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lldp_intf_enter; //type: boolean

        class Transmit; //type: InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit
        class Receive; //type: InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive> receive;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit> transmit;


}; // InterfaceConfigurations::InterfaceConfiguration::Lldp


class InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit : public Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit


class InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive


class InterfaceConfigurations::InterfaceConfiguration::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_vpi_bits; //type: AtmVpiBitsModeEnum
        YLeaf vc_class; //type: string

        class Pvps; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps
        class Pvcs; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs
        class MaximumCellPackingTimers; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers
        class VpTunnels; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers> maximum_cell_packing_timers; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs> pvcs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps> pvps;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels> vp_tunnels;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps : public Entity
{
    public:
        Pvps();
        ~Pvps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pvp; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp> > pvp;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp : public Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpi; //type: uint32
        YLeaf enable; //type: empty
        YLeaf test_mode; //type: AtmPvpTestModeEnum
        YLeaf oam_segment_endpoint; //type: empty

        class Shape; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape
        class CellPacking; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking> cell_packing; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape> shape;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: AtmPvcShapingEnum
        YLeaf peak_cell_rate; //type: uint32
        YLeaf sustained_cell_rate; //type: uint32
        YLeaf burst_size; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs : public Entity
{
    public:
        Pvcs();
        ~Pvcs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pvc; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc> > pvc;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc : public Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpi; //type: uint32
        YLeaf vci; //type: uint32
        YLeaf pv_ctype; //type: AtmPvcDataEnum
        YLeaf vc_class; //type: string
        YLeaf encapsulation; //type: AtmPvcEncapsulationEnum
        YLeaf enable; //type: empty
        YLeaf test_mode; //type: AtmPvcTestModeEnum
        YLeaf oam_segment_endpoint; //type: empty

        class Shape; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape
        class OamEmulation; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation
        class CellPacking; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking> cell_packing; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation> oam_emulation;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape> shape;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: AtmPvcShapingEnum
        YLeaf peak_cell_rate; //type: uint32
        YLeaf sustained_cell_rate; //type: uint32
        YLeaf burst_size; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation : public Entity
{
    public:
        OamEmulation();
        ~OamEmulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf ais_transmit_rate; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking


class InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers : public Entity
{
    public:
        MaximumCellPackingTimers();
        ~MaximumCellPackingTimers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cell_packing_timer1; //type: uint32
        YLeaf cell_packing_timer2; //type: uint32
        YLeaf cell_packing_timer3; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers


class InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels : public Entity
{
    public:
        VpTunnels();
        ~VpTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VpTunnel; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel> > vp_tunnel;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels


class InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel : public Entity
{
    public:
        VpTunnel();
        ~VpTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpi; //type: uint32
        YLeaf enable_hierarchical_shaping; //type: empty
        YLeaf enable; //type: empty
        YLeaf disable_f4oam; //type: empty

        class Shape; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape> shape;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel


class InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: AtmVpShapingEnum
        YLeaf peak_cell_rate; //type: uint32
        YLeaf sustained_cell_rate; //type: uint32
        YLeaf burst_size; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape


class InterfaceConfigurations::InterfaceConfiguration::Subscriber : public Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IpSubscriber; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber> ip_subscriber;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber : public Entity
{
    public:
        IpSubscriber();
        ~IpSubscriber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subscriber_templates; //type: uint32
        YLeaf interface; //type: empty

        class Ipv4; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4
        class SessionLimit; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit
        class Ipv6; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit> session_limit;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2Connected; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected
        class Routed; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected> l2_connected;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed> routed;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected : public Entity
{
    public:
        L2Connected();
        ~L2Connected();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator> initiator;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator : public Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dhcp; //type: empty

        class UnclassifiedSourceFsol; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol> unclassified_source_fsol; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol : public Entity
{
    public:
        UnclassifiedSourceFsol();
        ~UnclassifiedSourceFsol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf address_unique; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed : public Entity
{
    public:
        Routed();
        ~Routed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator> initiator;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator : public Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unclassified_ip; //type: empty
        YLeaf dhcp; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit : public Entity
{
    public:
        SessionLimit();
        ~SessionLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Total; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total
        class UnclassifiedSource; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total> total;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource> unclassified_source;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf per_vlan; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource : public Entity
{
    public:
        UnclassifiedSource();
        ~UnclassifiedSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf per_vlan; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2Connected; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected
        class Routed; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected> l2_connected;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed> routed;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected : public Entity
{
    public:
        L2Connected();
        ~L2Connected();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator> initiator;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator : public Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dhcp; //type: empty

        class UnclassifiedSourceFsol; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol> unclassified_source_fsol; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol : public Entity
{
    public:
        UnclassifiedSourceFsol();
        ~UnclassifiedSourceFsol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf address_unique; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed : public Entity
{
    public:
        Routed();
        ~Routed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator> initiator;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator : public Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unclassified_ip; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Dagrs : public Entity
{
    public:
        Dagrs();
        ~Dagrs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Dagr; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr> > dagr;


}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr : public Entity
{
    public:
        Dagr();
        ~Dagr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_addr; //type: string
        YLeaf enter; //type: empty

        class Sub; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub> sub;


}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub : public Entity
{
    public:
        Sub();
        ~Sub();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority_timeout; //type: uint32

        class Metric; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric
        class Timers; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers
        class Distance; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance> distance;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric> metric;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers> timers;


}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_norm; //type: uint32
        YLeaf metric_prio; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf query_time; //type: uint32
        YLeaf sby_time; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dist_norm; //type: uint32
        YLeaf dist_prio; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp : public Entity
{
    public:
        Ipv4Arp();
        ~Ipv4Arp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf learning_local; //type: empty
        YLeaf gratuitous_ignore; //type: empty
        YLeaf proxy_arp; //type: empty
        YLeaf purge_delay; //type: uint32
        YLeaf learning_disable; //type: empty
        YLeaf local_proxy_arp; //type: empty
        YLeaf timeout; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp


class InterfaceConfigurations::InterfaceConfiguration::ClientPort : public Entity
{
    public:
        ClientPort();
        ~ClientPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LogicalChannelAssignments; //type: InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments
        class Channels; //type: InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels> channels;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments> logical_channel_assignments;


}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort


class InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments : public Entity
{
    public:
        LogicalChannelAssignments();
        ~LogicalChannelAssignments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LogicalChannelAssignment; //type: InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment> > logical_channel_assignment;


}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments


class InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment : public Entity
{
    public:
        LogicalChannelAssignment();
        ~LogicalChannelAssignment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf assignment_index; //type: int32
        YLeaf allocation; //type: int32
        YLeaf logical_channel_id; //type: int32
        YLeaf description; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment


class InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels : public Entity
{
    public:
        Channels();
        ~Channels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Channel; //type: InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel> > channel;


}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels


class InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel : public Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: int32
        YLeaf channel_description; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes : public Entity
{
    public:
        TunnelTeAttributes();
        ~TunnelTeAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_protection; //type: empty
        YLeaf forward_class; //type: uint32
        YLeaf destination; //type: string
        YLeaf record_route; //type: empty
        YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
        YLeaf soft_preemption; //type: empty
        YLeaf load_share; //type: uint32
        YLeaf signalled_name; //type: string

        class BackupBandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth
        class BfdOverLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp
        class BindingSegmentIdMpls; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls
        class ForwardingAdjacency; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency
        class PathOptionProtects; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects
        class Bidirectional; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional
        class AdminMode; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode
        class Switching; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching
        class Pce; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce
        class TunnelPathSelection; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection
        class AutoBandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth
        class Priority; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority
        class AffinityMask; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask
        class Logging; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging
        class Bandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth
        class Autoroute; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute
        class PolicyClasses; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses
        class NewStyleAffinityAffinityTypes; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes
        class FastReroute; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode> admin_mode;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth> auto_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute> autoroute;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth> backup_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth> bandwidth; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp> bfd_over_lsp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional> bidirectional;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls> binding_segment_id_mpls;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute> fast_reroute; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency> forwarding_adjacency;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects> path_option_protects;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce> pce;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses> policy_classes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority> priority; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching> switching;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection> tunnel_path_selection;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth : public Entity
{
    public:
        BackupBandwidth();
        ~BackupBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
        YLeaf pool_type; //type: MplsTeBackupBandwidthPoolEnum
        YLeaf class_type; //type: MplsTeBackupBandwidthClassEnum
        YLeaf limit_type; //type: MplsTeBandwidthLimitEnum
        YLeaf backup_bandwidth; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp : public Entity
{
    public:
        BfdOverLsp();
        ~BfdOverLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dampening_initial_wait; //type: uint32
        YLeaf fast_detect; //type: MplsTebfdSessionEnum
        YLeaf enable; //type: empty
        YLeaf multiplier; //type: uint32
        YLeaf bringup_timeout; //type: uint32
        YLeaf periodic_ping_disable; //type: empty
        YLeaf dampening_secondary_wait; //type: uint32
        YLeaf periodic_ping_interval; //type: uint32
        YLeaf dampening_maximum_wait; //type: uint32
        YLeaf minimum_interval; //type: uint32
        YLeaf encap_mode; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls : public Entity
{
    public:
        BindingSegmentIdMpls();
        ~BindingSegmentIdMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf segment_id_type; //type: BindingSegmentIdEnum
        YLeaf label_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency : public Entity
{
    public:
        ForwardingAdjacency();
        ~ForwardingAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf include_ipv6; //type: empty
        YLeaf hold_time; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects : public Entity
{
    public:
        PathOptionProtects();
        ~PathOptionProtects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOptionProtect; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect> > path_option_protect;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect : public Entity
{
    public:
        PathOptionProtect();
        ~PathOptionProtect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protection; //type: MplsTePathOptionProtectionEnum

        class PathOptions; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions> path_options;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions : public Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOption; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption> > path_option;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption : public Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf preference_level; //type: uint32
        YLeaf path_type; //type: MplsTePathOptionEnum
        YLeaf path_id; //type: uint32
        YLeaf path_name; //type: string
        YLeaf path_property; //type: int32
        YLeaf interface; //type: string
        YLeaf output_label; //type: int32
        YLeaf destination; //type: string
        YLeaf lockdown; //type: MplsTePathOptionPropertyEnum
        YLeaf verbatim; //type: MplsTePathOptionPropertyEnum
        YLeaf pce; //type: MplsTePathOptionPropertyEnum
        YLeaf pce_address; //type: string
        YLeaf igp_type; //type: MplsTeIgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: int32
        YLeaf igp_area_ip_address_id; //type: string
        YLeaf path_option_attribute_set_name; //type: string
        YLeaf protected_by_preference_level; //type: uint32
        YLeaf segment_routing; //type: MplsTePathOptionPropertyEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional : public Entity
{
    public:
        Bidirectional();
        ~Bidirectional();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: empty

        class AssociationCoroutedType; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType
        class AssociationParameters; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType> association_corouted_type;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters> association_parameters; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType : public Entity
{
    public:
        AssociationCoroutedType();
        ~AssociationCoroutedType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wrap_protection_enable; //type: empty
        YLeaf enable; //type: empty

        class FaultOam; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam> fault_oam;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam : public Entity
{
    public:
        FaultOam();
        ~FaultOam();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters : public Entity
{
    public:
        AssociationParameters();
        ~AssociationParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf association_id; //type: uint32
        YLeaf association_source_address; //type: string
        YLeaf association_is_global_id_configured; //type: boolean
        YLeaf association_global_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode : public Entity
{
    public:
        AdminMode();
        ~AdminMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf deactivate_tunnel; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching : public Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Transit; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit
        class Endpoint; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint> endpoint; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit> transit; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit : public Entity
{
    public:
        Transit();
        ~Transit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capability; //type: MplsTeSwitchingCapEnum
        YLeaf encoding; //type: MplsTeSwitchingEncodeEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint : public Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capability; //type: MplsTeSwitchingCapEnum
        YLeaf encoding; //type: MplsTeSwitchingEncodeEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce : public Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf delegation; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection : public Entity
{
    public:
        TunnelPathSelection();
        ~TunnelPathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tiebreaker; //type: MplsTePathSelectionTiebreakerEnum
        YLeaf path_selection_hop_limit; //type: uint32
        YLeaf path_selection_cost_limit; //type: uint32

        class Invalidation; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation> invalidation; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation : public Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_invalidation_action; //type: PathInvalidationActionEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth : public Entity
{
    public:
        AutoBandwidth();
        ~AutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf underflow_enable; //type: boolean
        YLeaf enabled; //type: boolean
        YLeaf application_frequency; //type: uint32
        YLeaf overflow_enable; //type: boolean
        YLeaf collection_only; //type: empty

        class Underflow; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow
        class Overflow; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow
        class BandwidthLimits; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits
        class AdjustmentThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold> adjustment_threshold; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits> bandwidth_limits; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow> overflow; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow> underflow; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow : public Entity
{
    public:
        Underflow();
        ~Underflow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf underflow_threshold_percent; //type: uint32
        YLeaf underflow_threshold_value; //type: uint32
        YLeaf underflow_threshold_limit; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow : public Entity
{
    public:
        Overflow();
        ~Overflow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf overflow_threshold_percent; //type: uint32
        YLeaf overflow_threshold_value; //type: uint32
        YLeaf overflow_threshold_limit; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits : public Entity
{
    public:
        BandwidthLimits();
        ~BandwidthLimits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_min_limit; //type: uint32
        YLeaf bandwidth_max_limit; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold : public Entity
{
    public:
        AdjustmentThreshold();
        ~AdjustmentThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adjustment_threshold_percent; //type: uint32
        YLeaf adjustment_threshold_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_priority; //type: uint32
        YLeaf hold_priority; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask : public Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity; //type: string
        YLeaf mask; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_switch_over_change_message; //type: empty
        YLeaf all; //type: empty
        YLeaf record_route_messsage; //type: empty
        YLeaf bfd_state_message; //type: empty
        YLeaf bandwidth_change_message; //type: empty
        YLeaf reoptimize_attempts_message; //type: empty
        YLeaf reroute_messsage; //type: empty
        YLeaf state_message; //type: empty
        YLeaf insufficient_bw_message; //type: empty
        YLeaf reoptimized_message; //type: empty
        YLeaf pcalc_failure_message; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
        YLeaf class_or_pool_type; //type: uint32
        YLeaf bandwidth; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute : public Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination; //type: empty

        class Metric; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric
        class AutorouteAnnounce; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce
        class DestinationXr; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce> autoroute_announce;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr> destination_xr;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric> metric;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
        YLeaf absolute_metric; //type: uint32
        YLeaf relative_metric; //type: int32
        YLeaf constant_metric; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce : public Entity
{
    public:
        AutorouteAnnounce();
        ~AutorouteAnnounce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf include_ipv6; //type: empty

        class ExcludeTraffic; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic
        class Metric; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic> exclude_traffic;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric> metric;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic : public Entity
{
    public:
        ExcludeTraffic();
        ~ExcludeTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf segment_routing; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
        YLeaf absolute_metric; //type: uint32
        YLeaf relative_metric; //type: int32
        YLeaf constant_metric; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr : public Entity
{
    public:
        DestinationXr();
        ~DestinationXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination> > destination;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses : public Entity
{
    public:
        PolicyClasses();
        ~PolicyClasses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList policy_class; //type: list of  uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes : public Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NewStyleAffinityAffinityType; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string
        YLeaf affinity10; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_protection; //type: uint32
        YLeaf node_protection; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel : public Entity
{
    public:
        TransportProfileTunnel();
        ~TransportProfileTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: string

        class Bfd; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd
        class WorkingLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp
        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination
        class Fault; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault
        class ProtectLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination> destination;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault> fault;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp> working_lsp;


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf enable; //type: empty
        YLeaf multiplier_standby; //type: uint32

        class MinInterval; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval
        class MinIntervalStandby; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval> min_interval;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby> min_interval_standby;


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval : public Entity
{
    public:
        MinInterval();
        ~MinInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval_ms; //type: uint32
        YLeaf interval_us; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby : public Entity
{
    public:
        MinIntervalStandby();
        ~MinIntervalStandby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval_standby_ms; //type: uint32
        YLeaf interval_standby_us; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp : public Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_label; //type: uint32
        YLeaf lockout; //type: empty
        YLeaf lsp_id; //type: uint32

        class OutLabel; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel> out_label; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel : public Entity
{
    public:
        OutLabel();
        ~OutLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf link; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: string
        YLeaf global_id; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault : public Entity
{
    public:
        Fault();
        ~Fault();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class ProtectionTrigger; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger> protection_trigger;


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger : public Entity
{
    public:
        ProtectionTrigger();
        ~ProtectionTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ldi; //type: boolean
        YLeaf ais; //type: boolean
        YLeaf lkr; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp : public Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_label; //type: uint32
        YLeaf lockout; //type: empty
        YLeaf lsp_id; //type: uint32

        class OutLabel; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel> out_label; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel : public Entity
{
    public:
        OutLabel();
        ~OutLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf link; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes : public Entity
{
    public:
        MteTunnelAttributes();
        ~MteTunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf record_route; //type: empty
        YLeaf signalled_name; //type: string
        YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
        YLeaf signalled_payload; //type: string
        YLeaf fast_reroute; //type: empty
        YLeaf impose_explicit_null; //type: empty

        class DestinationLeafs; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs
        class Priority; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority
        class NewStyleAffinities; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities
        class Bandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth
        class AffinityMask; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask
        class Logging; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask> affinity_mask;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs> destination_leafs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities> new_style_affinities;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority> priority;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs : public Entity
{
    public:
        DestinationLeafs();
        ~DestinationLeafs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DestinationLeaf; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf> > destination_leaf;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf : public Entity
{
    public:
        DestinationLeaf();
        ~DestinationLeaf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf destination_disable; //type: empty
        YLeaf destination; //type: empty

        class S2LLogging; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging
        class PathOptions; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions> path_options;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging> s2l_logging;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging : public Entity
{
    public:
        S2LLogging();
        ~S2LLogging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_reroute_messsage; //type: empty
        YLeaf s2l_insufficient_bw_messsage; //type: empty
        YLeaf s2l_pcalc_failure_message; //type: empty
        YLeaf s2l_state_message; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions : public Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOption; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption> > path_option;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption : public Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf preference_level; //type: uint32
        YLeaf path_type; //type: MplsTePathOptionEnum
        YLeaf path_id; //type: uint32
        YLeaf path_name; //type: string
        YLeaf lockdown; //type: MplsTePathOptionPropertyEnum
        YLeaf verbatim; //type: MplsTePathOptionPropertyEnum



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_priority; //type: uint32
        YLeaf hold_priority; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities : public Entity
{
    public:
        NewStyleAffinities();
        ~NewStyleAffinities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NewStyleAffinity; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity> > new_style_affinity;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity : public Entity
{
    public:
        NewStyleAffinity();
        ~NewStyleAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string
        YLeaf affinity10; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
        YLeaf class_or_pool_type; //type: uint32
        YLeaf bandwidth; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask : public Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity; //type: string
        YLeaf mask; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf insufficient_bw_message; //type: empty
        YLeaf reoptimized_message; //type: empty
        YLeaf bandwidth_change_message; //type: empty
        YLeaf all; //type: empty
        YLeaf pcalc_failure_message; //type: empty
        YLeaf state_message; //type: empty
        YLeaf reoptimize_attempts_message; //type: empty
        YLeaf sub_lsp_state_message; //type: empty
        YLeaf reroute_messsage; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp : public Entity
{
    public:
        TunnelIp();
        ~TunnelIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_key; //type: empty
        YLeaf ttl; //type: uint32
        YLeaf tunnel_vrf; //type: string
        YLeaf tos; //type: uint32
        YLeaf disable; //type: int32

        class Mode; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode
        class Source; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source
        class Key; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key
        class Keepalive; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive
        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination> destination;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive> keepalive;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key> key;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode> mode;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source> source;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: int32
        YLeaf decap; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: int32
        YLeaf address; //type: string
        YLeaf interface_name; //type: string
        YLeaf ipv6_address; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entropy; //type: empty
        YLeaf value_; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keep_alive_period; //type: uint32
        YLeaf keep_alive_retries; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: int32
        YLeaf address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf address_mask; //type: string
        YLeaf prefix_list_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination


class InterfaceConfigurations::InterfaceConfiguration::SsrpSession : public Entity
{
    public:
        SsrpSession();
        ~SsrpSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupId; //type: InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId> group_id;


}; // InterfaceConfigurations::InterfaceConfiguration::SsrpSession


class InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId : public Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group; //type: uint32
        YLeaf id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess : public Entity
{
    public:
        NvSatelliteAccess();
        ~NvSatelliteAccess();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos> qos;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos : public Entity
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



        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output : public Entity
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



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input : public Entity
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



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink : public Entity
{
    public:
        NvSatelliteFabricLink();
        ~NvSatelliteFabricLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite; //type: uint32
        YLeaf minimum_required_links; //type: uint32

        class Redundancy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy
        class RemotePorts; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts
        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos
        class EthernetFeatures; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures> ethernet_features;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos> qos;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts> remote_ports;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy : public Entity
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


        YLeaf iccp_group; //type: uint32
        YLeaf minimum_preferred_links; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts : public Entity
{
    public:
        RemotePorts();
        ~RemotePorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RemotePort; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort> > remote_port;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort : public Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_type; //type: string
        YLeaf slot; //type: uint32
        YLeaf sub_slot; //type: uint32
        YLeaf port_range; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos : public Entity
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



        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output : public Entity
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



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input : public Entity
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



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures : public Entity
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



        class Cfm; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm> cfm;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm : public Entity
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


        YLeaf continuity_check_interval; //type: CfmCcmIntervalEnum
        YLeaf level; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork : public Entity
{
    public:
        NvSatelliteFabricNetwork();
        ~NvSatelliteFabricNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Satellites; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites
        class Redundancy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites> satellites;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites : public Entity
{
    public:
        Satellites();
        ~Satellites();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Satellite; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite
        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos> qos;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite> > satellite;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite : public Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint32
        YLeaf enable; //type: empty

        class RemotePorts; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts> remote_ports;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts : public Entity
{
    public:
        RemotePorts();
        ~RemotePorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RemotePort; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort> > remote_port;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort : public Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_type; //type: string
        YLeaf slot; //type: uint32
        YLeaf sub_slot; //type: uint32
        YLeaf port_range; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos : public Entity
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



        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output : public Entity
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



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input : public Entity
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



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy : public Entity
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


        YLeaf iccp_group; //type: uint32
        YLeaf minimum_preferred_links; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions : public Entity
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



        class SpanMonitorSession; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;


}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession : public Entity
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

        class Attachment; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp : public Entity
{
    public:
        CiscoIosXrPppMaCfg_Ppp();
        ~CiscoIosXrPppMaCfg_Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network : public Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf forwarding_enable; //type: empty
        YLeaf icmp_mask_reply; //type: empty
        YLeaf tcp_mss_adjust_enable; //type: empty
        YLeaf ttl_propagate_disable; //type: empty
        YLeaf point_to_point; //type: empty
        YLeaf mtu; //type: uint32

        class BgpPa; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa
        class Verify; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify
        class Bgp; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp
        class Addresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses
        class HelperAddresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa> bgp_pa;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses> helper_addresses;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify> verify;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa : public Entity
{
    public:
        BgpPa();
        ~BgpPa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input
        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input : public Entity
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


        YLeaf source_accounting; //type: boolean
        YLeaf destination_accounting; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output : public Entity
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


        YLeaf source_accounting; //type: boolean
        YLeaf destination_accounting; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify : public Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reachable; //type: Ipv4ReachableEnum
        YLeaf self_ping; //type: Ipv4SelfPingEnum
        YLeaf default_ping; //type: Ipv4DefaultPingEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Qppb; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb
        class FlowTag; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag> flow_tag;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb> qppb;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb : public Entity
{
    public:
        Qppb();
        ~Qppb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input> input;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input : public Entity
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


        YLeaf source; //type: Ipv4InterfaceQppbEnum
        YLeaf destination; //type: Ipv4InterfaceQppbEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag : public Entity
{
    public:
        FlowTag();
        ~FlowTag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowTagInput; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput> flow_tag_input;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput : public Entity
{
    public:
        FlowTagInput();
        ~FlowTagInput();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses : public Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unnumbered; //type: string
        YLeaf dhcp; //type: empty

        class Secondaries; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries
        class Primary; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary> primary; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries> secondaries;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries : public Entity
{
    public:
        Secondaries();
        ~Secondaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Secondary; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary> > secondary;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf netmask; //type: string
        YLeaf route_tag; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf netmask; //type: string
        YLeaf route_tag; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses : public Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelperAddress; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress> > helper_address;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf vrf_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress


class InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding : public Entity
{
    public:
        Ipv4NetworkForwarding();
        ~Ipv4NetworkForwarding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf directed_broadcast; //type: empty
        YLeaf unreachables; //type: empty
        YLeaf redirects; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement : public Entity
{
    public:
        PerformanceManagement();
        ~PerformanceManagement();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24
        class Minute15Gfp; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp
        class SonetMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15
        class Hour24Gfp; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp
        class EthernetHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24
        class Minute15OtnTcms; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms
        class OcHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24
        class EthernetMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15
        class HoVcHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24
        class Second30; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30
        class Hour24OtnTcms; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms
        class StsMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15
        class Hour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24
        class HoVcMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15
        class StsHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24
        class StmMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15
        class SonetHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24
        class Minute15Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path
        class OcMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15
        class EthernetSecond30; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30
        class Hour24Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path
        class Minute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24> ethernet_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15> ethernet_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30> ethernet_second30;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24> ho_vc_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15> ho_vc_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24> hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp> hour24_gfp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path> hour24_path;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms> hour24otn_tcms;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15> minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp> minute15_gfp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path> minute15_path;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms> minute15otn_tcms;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24> oc_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15> oc_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30> second30;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24> sonet_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15> sonet_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24> stm_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15> stm_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24> sts_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15> sts_minute15;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24 : public Entity
{
    public:
        StmHour24();
        ~StmHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24Stm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm> stm_hour24_stm;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm : public Entity
{
    public:
        StmHour24Stm();
        ~StmHour24Stm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24StmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports
        class StmHour24StmThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports> stm_hour24_stm_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds> stm_hour24_stm_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports : public Entity
{
    public:
        StmHour24StmReports();
        ~StmHour24StmReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24StmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport> > stm_hour24_stm_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport : public Entity
{
    public:
        StmHour24StmReport();
        ~StmHour24StmReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stm_report; //type: StmReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds : public Entity
{
    public:
        StmHour24StmThresholds();
        ~StmHour24StmThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24StmThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold> > stm_hour24_stm_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold : public Entity
{
    public:
        StmHour24StmThreshold();
        ~StmHour24StmThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stm_threshold; //type: StmThresholdEnum
        YLeaf stm_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp : public Entity
{
    public:
        Minute15Gfp();
        ~Minute15Gfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15Gfp_; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_> minute15_gfp;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_ : public Entity
{
    public:
        Minute15Gfp_();
        ~Minute15Gfp_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15GfpReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports
        class Minute15GfpThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports> minute15_gfp_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds> minute15_gfp_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports : public Entity
{
    public:
        Minute15GfpReports();
        ~Minute15GfpReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15GfpReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport> > minute15_gfp_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport : public Entity
{
    public:
        Minute15GfpReport();
        ~Minute15GfpReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gfp_report; //type: GfpReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds : public Entity
{
    public:
        Minute15GfpThresholds();
        ~Minute15GfpThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15GfpThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold> > minute15_gfp_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold : public Entity
{
    public:
        Minute15GfpThreshold();
        ~Minute15GfpThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gfp_threshold; //type: GfpThresholdEnum
        YLeaf gfp_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15 : public Entity
{
    public:
        SonetMinute15();
        ~SonetMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path
        class SonetMinute15Ocn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn> sonet_minute15_ocn;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path> sonet_minute15_path;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path : public Entity
{
    public:
        SonetMinute15Path();
        ~SonetMinute15Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15PathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports
        class SonetMinute15PathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports> sonet_minute15_path_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds> sonet_minute15_path_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports : public Entity
{
    public:
        SonetMinute15PathReports();
        ~SonetMinute15PathReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15PathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport> > sonet_minute15_path_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport : public Entity
{
    public:
        SonetMinute15PathReport();
        ~SonetMinute15PathReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_report; //type: PathReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds : public Entity
{
    public:
        SonetMinute15PathThresholds();
        ~SonetMinute15PathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15PathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold> > sonet_minute15_path_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold : public Entity
{
    public:
        SonetMinute15PathThreshold();
        ~SonetMinute15PathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_threshold; //type: PathThresholdEnum
        YLeaf path_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn : public Entity
{
    public:
        SonetMinute15Ocn();
        ~SonetMinute15Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15OcnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports
        class SonetMinute15OcnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports> sonet_minute15_ocn_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds> sonet_minute15_ocn_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports : public Entity
{
    public:
        SonetMinute15OcnReports();
        ~SonetMinute15OcnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15OcnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport> > sonet_minute15_ocn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport : public Entity
{
    public:
        SonetMinute15OcnReport();
        ~SonetMinute15OcnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_report; //type: OcnReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds : public Entity
{
    public:
        SonetMinute15OcnThresholds();
        ~SonetMinute15OcnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15OcnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold> > sonet_minute15_ocn_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold : public Entity
{
    public:
        SonetMinute15OcnThreshold();
        ~SonetMinute15OcnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_threshold; //type: OcnThresholdEnum
        YLeaf ocn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp : public Entity
{
    public:
        Hour24Gfp();
        ~Hour24Gfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24Gfp_; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_> hour24_gfp;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_ : public Entity
{
    public:
        Hour24Gfp_();
        ~Hour24Gfp_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24GfpReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports
        class Hour24GfpThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports> hour24_gfp_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds> hour24_gfp_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports : public Entity
{
    public:
        Hour24GfpReports();
        ~Hour24GfpReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24GfpReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport> > hour24_gfp_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport : public Entity
{
    public:
        Hour24GfpReport();
        ~Hour24GfpReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gfp_report; //type: GfpReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds : public Entity
{
    public:
        Hour24GfpThresholds();
        ~Hour24GfpThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24GfpThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold> > hour24_gfp_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold : public Entity
{
    public:
        Hour24GfpThreshold();
        ~Hour24GfpThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gfp_threshold; //type: GfpThresholdEnum
        YLeaf gfp_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24 : public Entity
{
    public:
        EthernetHour24();
        ~EthernetHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24Ether; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether> hour24_ether;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether : public Entity
{
    public:
        Hour24Ether();
        ~Hour24Ether();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24EtherThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds
        class Hour24EtherReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports> hour24_ether_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds> hour24_ether_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds : public Entity
{
    public:
        Hour24EtherThresholds();
        ~Hour24EtherThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24EtherThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold> > hour24_ether_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold : public Entity
{
    public:
        Hour24EtherThreshold();
        ~Hour24EtherThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_threshold; //type: EtherThresholdEnum
        YLeaf ether_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports : public Entity
{
    public:
        Hour24EtherReports();
        ~Hour24EtherReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24EtherReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport> > hour24_ether_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport : public Entity
{
    public:
        Hour24EtherReport();
        ~Hour24EtherReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_report; //type: EtherReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms : public Entity
{
    public:
        Minute15OtnTcms();
        ~Minute15OtnTcms();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OtnTcm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm> > minute15otn_tcm;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm : public Entity
{
    public:
        Minute15OtnTcm();
        ~Minute15OtnTcm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcm_number; //type: int32

        class Min15OtnTcmThreshes; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes
        class Minute15OtnTcmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes> min15_otn_tcm_threshes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports> minute15otn_tcm_reports;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes : public Entity
{
    public:
        Min15OtnTcmThreshes();
        ~Min15OtnTcmThreshes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Min15OtnTcmThresh; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh> > min15_otn_tcm_thresh;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh : public Entity
{
    public:
        Min15OtnTcmThresh();
        ~Min15OtnTcmThresh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnTcmThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports : public Entity
{
    public:
        Minute15OtnTcmReports();
        ~Minute15OtnTcmReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OtnTcmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport> > minute15otn_tcm_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport : public Entity
{
    public:
        Minute15OtnTcmReport();
        ~Minute15OtnTcmReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnTcmReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24 : public Entity
{
    public:
        OcHour24();
        ~OcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24Ocn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn> oc_hour24_ocn;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn : public Entity
{
    public:
        OcHour24Ocn();
        ~OcHour24Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24OcnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports
        class OcHour24OcnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports> oc_hour24_ocn_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds> oc_hour24_ocn_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports : public Entity
{
    public:
        OcHour24OcnReports();
        ~OcHour24OcnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24OcnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport> > oc_hour24_ocn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport : public Entity
{
    public:
        OcHour24OcnReport();
        ~OcHour24OcnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_report; //type: OcnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds : public Entity
{
    public:
        OcHour24OcnThresholds();
        ~OcHour24OcnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24OcnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold> > oc_hour24_ocn_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold : public Entity
{
    public:
        OcHour24OcnThreshold();
        ~OcHour24OcnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_threshold; //type: OcnThresholdEnum
        YLeaf ocn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15 : public Entity
{
    public:
        EthernetMinute15();
        ~EthernetMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15Ether; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether> minute15_ether;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether : public Entity
{
    public:
        Minute15Ether();
        ~Minute15Ether();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15EtherThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds
        class Minute15EtherReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports> minute15_ether_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds> minute15_ether_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds : public Entity
{
    public:
        Minute15EtherThresholds();
        ~Minute15EtherThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15EtherThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold> > minute15_ether_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold : public Entity
{
    public:
        Minute15EtherThreshold();
        ~Minute15EtherThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_threshold; //type: EtherThresholdEnum
        YLeaf ether_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports : public Entity
{
    public:
        Minute15EtherReports();
        ~Minute15EtherReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15EtherReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport> > minute15_ether_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport : public Entity
{
    public:
        Minute15EtherReport();
        ~Minute15EtherReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_report; //type: EtherReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24 : public Entity
{
    public:
        HoVcHour24();
        ~HoVcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24HoVc; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc> ho_vc_hour24ho_vc;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc : public Entity
{
    public:
        HoVcHour24HoVc();
        ~HoVcHour24HoVc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24HoVcReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports
        class HoVcHour24HoVcThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports> ho_vc_hour24ho_vc_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds> ho_vc_hour24ho_vc_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports : public Entity
{
    public:
        HoVcHour24HoVcReports();
        ~HoVcHour24HoVcReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24HoVcReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport> > ho_vc_hour24ho_vc_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport : public Entity
{
    public:
        HoVcHour24HoVcReport();
        ~HoVcHour24HoVcReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ho_vc_report; //type: HoVcReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds : public Entity
{
    public:
        HoVcHour24HoVcThresholds();
        ~HoVcHour24HoVcThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24HoVcThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold> > ho_vc_hour24ho_vc_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold : public Entity
{
    public:
        HoVcHour24HoVcThreshold();
        ~HoVcHour24HoVcThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ho_vc_threshold; //type: HoVcThresholdEnum
        YLeaf ho_vc_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30 : public Entity
{
    public:
        Second30();
        ~Second30();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30Fec; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec
        class Second30Optics; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics
        class Second30Otn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics> second30_optics;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec> second30fec;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn> second30otn;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec : public Entity
{
    public:
        Second30Fec();
        ~Second30Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30FecThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds
        class Second30FecReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports> second30fec_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds> second30fec_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds : public Entity
{
    public:
        Second30FecThresholds();
        ~Second30FecThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30FecThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold> > second30fec_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold : public Entity
{
    public:
        Second30FecThreshold();
        ~Second30FecThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_threshold; //type: FecThresholdEnum
        YLeaf fec_threshold_value; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports : public Entity
{
    public:
        Second30FecReports();
        ~Second30FecReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30FecReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport> > second30fec_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport : public Entity
{
    public:
        Second30FecReport();
        ~Second30FecReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_report; //type: FecReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics : public Entity
{
    public:
        Second30Optics();
        ~Second30Optics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OpticsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports
        class Second30OpticsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports> second30_optics_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds> second30_optics_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports : public Entity
{
    public:
        Second30OpticsReports();
        ~Second30OpticsReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OpticsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport> > second30_optics_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport : public Entity
{
    public:
        Second30OpticsReport();
        ~Second30OpticsReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_report; //type: OpticsReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds : public Entity
{
    public:
        Second30OpticsThresholds();
        ~Second30OpticsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OpticsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold> > second30_optics_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold : public Entity
{
    public:
        Second30OpticsThreshold();
        ~Second30OpticsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_threshold; //type: OpticsThresholdEnum
        YLeaf optics_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn : public Entity
{
    public:
        Second30Otn();
        ~Second30Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OtnThreshes; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes
        class Second30OtnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes> second30_otn_threshes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports> second30otn_reports;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes : public Entity
{
    public:
        Second30OtnThreshes();
        ~Second30OtnThreshes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OtnThresh; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh> > second30_otn_thresh;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh : public Entity
{
    public:
        Second30OtnThresh();
        ~Second30OtnThresh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports : public Entity
{
    public:
        Second30OtnReports();
        ~Second30OtnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OtnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport> > second30otn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport : public Entity
{
    public:
        Second30OtnReport();
        ~Second30OtnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms : public Entity
{
    public:
        Hour24OtnTcms();
        ~Hour24OtnTcms();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnTcm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm> > hour24otn_tcm;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm : public Entity
{
    public:
        Hour24OtnTcm();
        ~Hour24OtnTcm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcm_number; //type: int32

        class Hour24OtnTcmThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds
        class Hour24OtnTcmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports> hour24otn_tcm_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds> hour24otn_tcm_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds : public Entity
{
    public:
        Hour24OtnTcmThresholds();
        ~Hour24OtnTcmThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnTcmThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold> > hour24otn_tcm_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold : public Entity
{
    public:
        Hour24OtnTcmThreshold();
        ~Hour24OtnTcmThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnTcmThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports : public Entity
{
    public:
        Hour24OtnTcmReports();
        ~Hour24OtnTcmReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnTcmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport> > hour24otn_tcm_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport : public Entity
{
    public:
        Hour24OtnTcmReport();
        ~Hour24OtnTcmReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnTcmReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15 : public Entity
{
    public:
        StsMinute15();
        ~StsMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsMinute15Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path> sts_minute15_path;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path : public Entity
{
    public:
        StsMinute15Path();
        ~StsMinute15Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsMinute15PathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports
        class StsMinute15PathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports> sts_minute15_path_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds> sts_minute15_path_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports : public Entity
{
    public:
        StsMinute15PathReports();
        ~StsMinute15PathReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsMinute15PathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport> > sts_minute15_path_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport : public Entity
{
    public:
        StsMinute15PathReport();
        ~StsMinute15PathReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_report; //type: StsReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds : public Entity
{
    public:
        StsMinute15PathThresholds();
        ~StsMinute15PathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsMinute15PathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold> > sts_minute15_path_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold : public Entity
{
    public:
        StsMinute15PathThreshold();
        ~StsMinute15PathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_threshold; //type: StsThresholdEnum
        YLeaf path_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24 : public Entity
{
    public:
        Hour24();
        ~Hour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24Otn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn
        class Hour24Optics; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics
        class Hour24Fec; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics> hour24_optics;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec> hour24fec;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn> hour24otn;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn : public Entity
{
    public:
        Hour24Otn();
        ~Hour24Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds
        class Hour24OtnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports> hour24otn_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds> hour24otn_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds : public Entity
{
    public:
        Hour24OtnThresholds();
        ~Hour24OtnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold> > hour24otn_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold : public Entity
{
    public:
        Hour24OtnThreshold();
        ~Hour24OtnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports : public Entity
{
    public:
        Hour24OtnReports();
        ~Hour24OtnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport> > hour24otn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport : public Entity
{
    public:
        Hour24OtnReport();
        ~Hour24OtnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics : public Entity
{
    public:
        Hour24Optics();
        ~Hour24Optics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OpticsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds
        class Hour24OpticsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports> hour24_optics_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds> hour24_optics_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds : public Entity
{
    public:
        Hour24OpticsThresholds();
        ~Hour24OpticsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OpticsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold> > hour24_optics_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold : public Entity
{
    public:
        Hour24OpticsThreshold();
        ~Hour24OpticsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_threshold; //type: OpticsThresholdEnum
        YLeaf optics_threshold_value; //type: int32
        YLeaf dbm; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports : public Entity
{
    public:
        Hour24OpticsReports();
        ~Hour24OpticsReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OpticsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport> > hour24_optics_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport : public Entity
{
    public:
        Hour24OpticsReport();
        ~Hour24OpticsReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_report; //type: OpticsReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec : public Entity
{
    public:
        Hour24Fec();
        ~Hour24Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24FecThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds
        class Hour24FecReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports> hour24fec_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds> hour24fec_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds : public Entity
{
    public:
        Hour24FecThresholds();
        ~Hour24FecThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24FecThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold> > hour24fec_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold : public Entity
{
    public:
        Hour24FecThreshold();
        ~Hour24FecThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_threshold; //type: FecThresholdEnum
        YLeaf fec_threshold_value; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports : public Entity
{
    public:
        Hour24FecReports();
        ~Hour24FecReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24FecReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport> > hour24fec_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport : public Entity
{
    public:
        Hour24FecReport();
        ~Hour24FecReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_report; //type: FecReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15 : public Entity
{
    public:
        HoVcMinute15();
        ~HoVcMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15HoVc; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc> ho_vc_minute15ho_vc;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc : public Entity
{
    public:
        HoVcMinute15HoVc();
        ~HoVcMinute15HoVc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15HoVcReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports
        class HoVcMinute15HoVcThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports> ho_vc_minute15ho_vc_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds> ho_vc_minute15ho_vc_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports : public Entity
{
    public:
        HoVcMinute15HoVcReports();
        ~HoVcMinute15HoVcReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15HoVcReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport> > ho_vc_minute15ho_vc_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport : public Entity
{
    public:
        HoVcMinute15HoVcReport();
        ~HoVcMinute15HoVcReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ho_vc_report; //type: HoVcReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds : public Entity
{
    public:
        HoVcMinute15HoVcThresholds();
        ~HoVcMinute15HoVcThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15HoVcThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold> > ho_vc_minute15ho_vc_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold : public Entity
{
    public:
        HoVcMinute15HoVcThreshold();
        ~HoVcMinute15HoVcThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ho_vc_threshold; //type: HoVcThresholdEnum
        YLeaf ho_vc_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24 : public Entity
{
    public:
        StsHour24();
        ~StsHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsHour24Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path> sts_hour24_path;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path : public Entity
{
    public:
        StsHour24Path();
        ~StsHour24Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsHour24PathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds
        class StsHour24PathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports> sts_hour24_path_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds> sts_hour24_path_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds : public Entity
{
    public:
        StsHour24PathThresholds();
        ~StsHour24PathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsHour24PathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold> > sts_hour24_path_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold : public Entity
{
    public:
        StsHour24PathThreshold();
        ~StsHour24PathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_threshold; //type: StsThresholdEnum
        YLeaf path_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports : public Entity
{
    public:
        StsHour24PathReports();
        ~StsHour24PathReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsHour24PathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport> > sts_hour24_path_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport : public Entity
{
    public:
        StsHour24PathReport();
        ~StsHour24PathReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_report; //type: StsReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15 : public Entity
{
    public:
        StmMinute15();
        ~StmMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmMinute15Stm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm> stm_minute15_stm;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm : public Entity
{
    public:
        StmMinute15Stm();
        ~StmMinute15Stm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmMinute15StmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports
        class StmMinute15StmThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports> stm_minute15_stm_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds> stm_minute15_stm_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports : public Entity
{
    public:
        StmMinute15StmReports();
        ~StmMinute15StmReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmMinute15StmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport> > stm_minute15_stm_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport : public Entity
{
    public:
        StmMinute15StmReport();
        ~StmMinute15StmReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stm_report; //type: StmReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds : public Entity
{
    public:
        StmMinute15StmThresholds();
        ~StmMinute15StmThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmMinute15StmThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold> > stm_minute15_stm_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold : public Entity
{
    public:
        StmMinute15StmThreshold();
        ~StmMinute15StmThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stm_threshold; //type: StmThresholdEnum
        YLeaf stm_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24 : public Entity
{
    public:
        SonetHour24();
        ~SonetHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetHour24Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path
        class SonetHour24Ocn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn> sonet_hour24_ocn;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path> sonet_hour24_path;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path : public Entity
{
    public:
        SonetHour24Path();
        ~SonetHour24Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetHour24PathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds
        class SonetHour24PathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports> sonet_hour24_path_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds> sonet_hour24_path_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds : public Entity
{
    public:
        SonetHour24PathThresholds();
        ~SonetHour24PathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetHour24PathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold> > sonet_hour24_path_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold : public Entity
{
    public:
        SonetHour24PathThreshold();
        ~SonetHour24PathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_threshold; //type: PathThresholdEnum
        YLeaf path_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports : public Entity
{
    public:
        SonetHour24PathReports();
        ~SonetHour24PathReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetHour24PathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport> > sonet_hour24_path_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport : public Entity
{
    public:
        SonetHour24PathReport();
        ~SonetHour24PathReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_report; //type: PathReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn : public Entity
{
    public:
        SonetHour24Ocn();
        ~SonetHour24Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetHour24OcnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds
        class SonetHour24OcnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports> sonet_hour24_ocn_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds> sonet_hour24_ocn_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds : public Entity
{
    public:
        SonetHour24OcnThresholds();
        ~SonetHour24OcnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetHour24OcnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold> > sonet_hour24_ocn_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold : public Entity
{
    public:
        SonetHour24OcnThreshold();
        ~SonetHour24OcnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_threshold; //type: OcnThresholdEnum
        YLeaf ocn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports : public Entity
{
    public:
        SonetHour24OcnReports();
        ~SonetHour24OcnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetHour24OcnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport> > sonet_hour24_ocn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport : public Entity
{
    public:
        SonetHour24OcnReport();
        ~SonetHour24OcnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_report; //type: OcnReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path : public Entity
{
    public:
        Minute15Path();
        ~Minute15Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OtnPath; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath> minute15otn_path;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath : public Entity
{
    public:
        Minute15OtnPath();
        ~Minute15OtnPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OtnPathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports
        class Min15OtnPathThreshes; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes> min15_otn_path_threshes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports> minute15otn_path_reports;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports : public Entity
{
    public:
        Minute15OtnPathReports();
        ~Minute15OtnPathReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OtnPathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport> > minute15otn_path_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport : public Entity
{
    public:
        Minute15OtnPathReport();
        ~Minute15OtnPathReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes : public Entity
{
    public:
        Min15OtnPathThreshes();
        ~Min15OtnPathThreshes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Min15OtnPathThresh; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh> > min15_otn_path_thresh;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh : public Entity
{
    public:
        Min15OtnPathThresh();
        ~Min15OtnPathThresh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15 : public Entity
{
    public:
        OcMinute15();
        ~OcMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcMinute15Ocn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn> oc_minute15_ocn;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn : public Entity
{
    public:
        OcMinute15Ocn();
        ~OcMinute15Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcMinute15OcnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports
        class OcMinute15OcnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports> oc_minute15_ocn_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds> oc_minute15_ocn_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports : public Entity
{
    public:
        OcMinute15OcnReports();
        ~OcMinute15OcnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcMinute15OcnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport> > oc_minute15_ocn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport : public Entity
{
    public:
        OcMinute15OcnReport();
        ~OcMinute15OcnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_report; //type: OcnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds : public Entity
{
    public:
        OcMinute15OcnThresholds();
        ~OcMinute15OcnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcMinute15OcnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold> > oc_minute15_ocn_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold : public Entity
{
    public:
        OcMinute15OcnThreshold();
        ~OcMinute15OcnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_threshold; //type: OcnThresholdEnum
        YLeaf ocn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30 : public Entity
{
    public:
        EthernetSecond30();
        ~EthernetSecond30();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30Ether; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether> second30_ether;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether : public Entity
{
    public:
        Second30Ether();
        ~Second30Ether();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30EtherThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds
        class Second30EtherReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports> second30_ether_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds> second30_ether_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds : public Entity
{
    public:
        Second30EtherThresholds();
        ~Second30EtherThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30EtherThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold> > second30_ether_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold : public Entity
{
    public:
        Second30EtherThreshold();
        ~Second30EtherThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_threshold; //type: EtherThresholdEnum
        YLeaf ether_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports : public Entity
{
    public:
        Second30EtherReports();
        ~Second30EtherReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30EtherReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport> > second30_ether_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport : public Entity
{
    public:
        Second30EtherReport();
        ~Second30EtherReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_report; //type: EtherReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path : public Entity
{
    public:
        Hour24Path();
        ~Hour24Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnPath; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath> hour24otn_path;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath : public Entity
{
    public:
        Hour24OtnPath();
        ~Hour24OtnPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnPathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports
        class Hour24OtnPathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports> hour24otn_path_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds> hour24otn_path_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports : public Entity
{
    public:
        Hour24OtnPathReports();
        ~Hour24OtnPathReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnPathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport> > hour24otn_path_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport : public Entity
{
    public:
        Hour24OtnPathReport();
        ~Hour24OtnPathReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds : public Entity
{
    public:
        Hour24OtnPathThresholds();
        ~Hour24OtnPathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnPathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold> > hour24otn_path_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold : public Entity
{
    public:
        Hour24OtnPathThreshold();
        ~Hour24OtnPathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15 : public Entity
{
    public:
        Minute15();
        ~Minute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15Optics; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics
        class Minute15Fec; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec
        class Minute15Otn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics> minute15_optics;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec> minute15fec;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn> minute15otn;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics : public Entity
{
    public:
        Minute15Optics();
        ~Minute15Optics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OpticsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds
        class Minute15OpticsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports> minute15_optics_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds> minute15_optics_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds : public Entity
{
    public:
        Minute15OpticsThresholds();
        ~Minute15OpticsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OpticsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold> > minute15_optics_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold : public Entity
{
    public:
        Minute15OpticsThreshold();
        ~Minute15OpticsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_threshold; //type: OpticsThresholdEnum
        YLeaf optics_threshold_value; //type: int32
        YLeaf dbm; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports : public Entity
{
    public:
        Minute15OpticsReports();
        ~Minute15OpticsReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OpticsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport> > minute15_optics_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport : public Entity
{
    public:
        Minute15OpticsReport();
        ~Minute15OpticsReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_report; //type: OpticsReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec : public Entity
{
    public:
        Minute15Fec();
        ~Minute15Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15FecThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds
        class Minute15FecReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports> minute15fec_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds> minute15fec_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds : public Entity
{
    public:
        Minute15FecThresholds();
        ~Minute15FecThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15FecThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold> > minute15fec_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold : public Entity
{
    public:
        Minute15FecThreshold();
        ~Minute15FecThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_threshold; //type: FecThresholdEnum
        YLeaf fec_threshold_value; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports : public Entity
{
    public:
        Minute15FecReports();
        ~Minute15FecReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15FecReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport> > minute15fec_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport : public Entity
{
    public:
        Minute15FecReport();
        ~Minute15FecReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_report; //type: FecReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn : public Entity
{
    public:
        Minute15Otn();
        ~Minute15Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Min15OtnThreshes; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes
        class Minute15OtnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes> min15_otn_threshes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports> minute15otn_reports;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes : public Entity
{
    public:
        Min15OtnThreshes();
        ~Min15OtnThreshes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Min15OtnThresh; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh> > min15_otn_thresh;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh : public Entity
{
    public:
        Min15OtnThresh();
        ~Min15OtnThresh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports : public Entity
{
    public:
        Minute15OtnReports();
        ~Minute15OtnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OtnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport> > minute15otn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport : public Entity
{
    public:
        Minute15OtnReport();
        ~Minute15OtnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport


class InterfaceConfigurations::InterfaceConfiguration::Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MacsecService; //type: InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService
        class PskKeyChain; //type: InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService> macsec_service; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain> psk_key_chain; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Macsec


class InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService : public Entity
{
    public:
        MacsecService();
        ~MacsecService();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf decrypt_port; //type: string
        YLeaf key_chain; //type: string
        YLeaf policy; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService


class InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain : public Entity
{
    public:
        PskKeyChain();
        ~PskKeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key_chain_name; //type: string
        YLeaf policy_name; //type: string
        YLeaf fallback_key_chain; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain


class InterfaceConfigurations::InterfaceConfiguration::Qos : public Entity
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



        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::Qos


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output : public Entity
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



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy
        class ServicePolicyQos; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy> > service_policy;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos> > service_policy_qos;


}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos : public Entity
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

        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent> subscriber_parent;


}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames : public Entity
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



        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName> > subscriber_group_name;


}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input : public Entity
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



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy
        class ServicePolicyQos; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy> > service_policy;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos> > service_policy_qos;


}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos : public Entity
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

        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent> subscriber_parent;


}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames : public Entity
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



        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName> > subscriber_group_name;


}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::Optics : public Entity
{
    public:
        Optics();
        ~Optics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_transmit_power; //type: int32
        YLeaf optics_ots_channel_power_max_delta; //type: int32
        YLeaf optics_loopback; //type: OpticsLoopbackEnum
        YLeaf optics_ots_osri; //type: boolean
        YLeaf optics_ots_amplifier_gain_degrade_high_threshold; //type: int32
        YLeaf optics_ots_rx_voa_attenuation; //type: int32
        YLeaf optics_fec; //type: OpticsFecEnum
        YLeaf optics_dgd_high_threshold; //type: int32
        YLeaf optics_ots_amplifier_channel_power; //type: int32
        YLeaf optics_ots_amplifier_control_mode; //type: OpticsOtsAmpliControlModeEnum
        YLeaf optics_ots_amplifier_gain; //type: int32
        YLeaf optics_ots_amplifier_gain_range; //type: OpticsOtsAmpliGainRangeEnum
        YLeaf optics_ots_safety_control_mode; //type: OpticsOtsSafetyControlModeEnum
        YLeaf optics_cd_min; //type: int32
        YLeaf optics_ots_tx_voa_attenuation; //type: int32
        YLeaf optics_ots_amplifier_tilt; //type: int32
        YLeaf optics_transmit_shutdown; //type: boolean
        YLeaf optics_description; //type: string
        YLeaf optics_performance_monitoring; //type: boolean
        YLeaf optics_cd_max; //type: int32
        YLeaf optics_lbc_high_threshold; //type: int32
        YLeaf optics_cd_high_threshold; //type: int32
        YLeaf optics_osnr_low_threshold; //type: int32
        YLeaf optics_ots_amplifier_gain_degrade_low_threshold; //type: int32
        YLeaf optics_cd_low_threshold; //type: int32
        YLeaf breakout; //type: string

        class RxThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds
        class OpticsNetworkSrlgs; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs
        class OpticsDwdmCarrier; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier
        class OpticsLanes; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes
        class TxThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier> optics_dwdm_carrier; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes> optics_lanes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs> optics_network_srlgs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds> rx_thresholds;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds> tx_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::Optics


class InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds : public Entity
{
    public:
        RxThresholds();
        ~RxThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RxThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold> > rx_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds


class InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold : public Entity
{
    public:
        RxThreshold();
        ~RxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rx_threshold_type; //type: ThresholdEnum
        YLeaf rx_threshold; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs : public Entity
{
    public:
        OpticsNetworkSrlgs();
        ~OpticsNetworkSrlgs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OpticsNetworkSrlg; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg> > optics_network_srlg;


}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg : public Entity
{
    public:
        OpticsNetworkSrlg();
        ~OpticsNetworkSrlg();

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



}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier : public Entity
{
    public:
        OpticsDwdmCarrier();
        ~OpticsDwdmCarrier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf grid_type; //type: OpticsDwdmCarrierGridEnum
        YLeaf param_type; //type: OpticsDwdmCarrierParamEnum
        YLeaf param_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes : public Entity
{
    public:
        OpticsLanes();
        ~OpticsLanes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OpticsLane; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane> > optics_lane;


}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane : public Entity
{
    public:
        OpticsLane();
        ~OpticsLane();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: int32
        YLeaf description; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane


class InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds : public Entity
{
    public:
        TxThresholds();
        ~TxThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TxThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold> > tx_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds


class InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold : public Entity
{
    public:
        TxThreshold();
        ~TxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_threshold_type; //type: ThresholdEnum
        YLeaf tx_threshold; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold


class InterfaceConfigurations::InterfaceConfiguration::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode; //type: BfdModeEnum

        class AddressFamily; //type: InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily> address_family;


}; // InterfaceConfigurations::InterfaceConfiguration::Bfd


class InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily : public Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6; //type: InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6
        class Ipv4; //type: InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6> ipv6;


}; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily


class InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_destination_address; //type: string
        YLeaf ipv6_detection_multiplier; //type: uint32
        YLeaf ipv6_fast_detect; //type: empty
        YLeaf ipv6_interval; //type: uint32

        class Ipv6Timers; //type: InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers> ipv6_timers;


}; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6


class InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers : public Entity
{
    public:
        Ipv6Timers();
        ~Ipv6Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_nbor_unconfig_timer; //type: uint32
        YLeaf ipv6_start_timer; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers


class InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf fast_detect; //type: empty

        class Echo; //type: InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo
        class Timers; //type: InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo> echo;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers> timers;


}; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4


class InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo : public Entity
{
    public:
        Echo();
        ~Echo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min_interval; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo


class InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nbor_unconfig_timer; //type: uint32
        YLeaf start_timer; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers


class InterfaceConfigurations::InterfaceConfiguration::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lacp_delay; //type: uint32
        YLeaf shutdown; //type: empty
        YLeaf wait_while; //type: uint32

        class BundleLoadBalancing; //type: InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing
        class MinimumActive; //type: InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive
        class MaximumActive; //type: InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing> bundle_load_balancing;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive> maximum_active;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive> minimum_active;


}; // InterfaceConfigurations::InterfaceConfiguration::Bundle


class InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing : public Entity
{
    public:
        BundleLoadBalancing();
        ~BundleLoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf localize_links; //type: uint32

        class HashFunction; //type: InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction> hash_function; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing


class InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction : public Entity
{
    public:
        HashFunction();
        ~HashFunction();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hash_type; //type: BundleLoadBalanceEnum
        YLeaf hash_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction


class InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive : public Entity
{
    public:
        MinimumActive();
        ~MinimumActive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf links; //type: uint32

        class Bandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth> bandwidth; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive


class InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min_bandwidth_range; //type: BundleMinimumBandwidthRangeEnum
        YLeaf bandwidth; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth


class InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive : public Entity
{
    public:
        MaximumActive();
        ~MaximumActive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Links; //type: InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links> links; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive


class InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links : public Entity
{
    public:
        Links();
        ~Links();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf links; //type: uint32
        YLeaf max_active_links_mode; //type: BundleMaximumActiveLinksModeEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links


class InterfaceConfigurations::InterfaceConfiguration::Lacp : public Entity
{
    public:
        Lacp();
        ~Lacp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_priority; //type: uint32
        YLeaf period; //type: one of uint32, enumeration
        YLeaf collector_max_delay; //type: uint32
        YLeaf lacp_nonrevertive; //type: empty
        YLeaf mode; //type: BundleModeEnum
        YLeaf fast_switchover; //type: empty
        YLeaf suppress_flaps; //type: uint32
        YLeaf system_mac; //type: string
        YLeaf period_short; //type: one of uint32, enumeration
        YLeaf churn_logging; //type: ChurnLoggingEnum

        class CiscoExtensions; //type: InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions
        class Timeout; //type: InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions> cisco_extensions; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout> timeout;


}; // InterfaceConfigurations::InterfaceConfiguration::Lacp


class InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions : public Entity
{
    public:
        CiscoExtensions();
        ~CiscoExtensions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cisco_ext; //type: empty
        YLeaf cisco_ext_type; //type: BundleCiscoExtTypesEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions


class InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rx_default; //type: uint32
        YLeaf actor_churn; //type: uint32
        YLeaf partner_churn; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout


class InterfaceConfigurations::InterfaceConfiguration::BundleMember : public Entity
{
    public:
        BundleMember();
        ~BundleMember();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_priority; //type: uint16

        class Id; //type: InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id> id;


}; // InterfaceConfigurations::InterfaceConfiguration::BundleMember


class InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_id; //type: uint32
        YLeaf port_activity; //type: BundlePortActivityEnum



}; // InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id


class InterfaceConfigurations::InterfaceConfiguration::Mlacp : public Entity
{
    public:
        Mlacp();
        ~Mlacp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_priority; //type: uint16
        YLeaf recovery_delay; //type: uint32
        YLeaf switchover_type; //type: MlacpSwitchoverEnum
        YLeaf iccp_group; //type: uint32

        class Maximize; //type: InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize> maximize; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Mlacp


class InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize : public Entity
{
    public:
        Maximize();
        ~Maximize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximize_by; //type: MlacpMaximizeParameterEnum
        YLeaf link_threshold; //type: uint32
        YLeaf bandwidth_threshold; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp : public Entity
{
    public:
        CiscoIosXrPppMaIpcpiwCfg_Ppp();
        ~CiscoIosXrPppMaIpcpiwCfg_Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipcpiw; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw> ipcpiw;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw : public Entity
{
    public:
        Ipcpiw();
        ~Ipcpiw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf proxy_address; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp : public Entity
{
    public:
        CiscoIosXrPppMaLcpCfg_Ppp();
        ~CiscoIosXrPppMaLcpCfg_Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mcmp; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp
        class Lcp; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp> lcp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp> mcmp;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp : public Entity
{
    public:
        Mcmp();
        ~Mcmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf remote; //type: uint32

        class Local; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local> local;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initial; //type: uint32
        YLeaf maximum; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp : public Entity
{
    public:
        Lcp();
        ~Lcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_type; //type: int32

        class Multilink; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink
        class Pap; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap
        class LoopBack; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack
        class MsChap; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap
        class Authentication; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication
        class Chap; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap> chap;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack> loop_back;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap> ms_chap;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink> multilink;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap> pap;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink : public Entity
{
    public:
        Multilink();
        ~Multilink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MinimumActive; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive> minimum_active;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive : public Entity
{
    public:
        MinimumActive();
        ~MinimumActive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf links; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap : public Entity
{
    public:
        Pap();
        ~Pap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf refuse; //type: empty

        class SendUserInfo; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo> send_user_info;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo : public Entity
{
    public:
        SendUserInfo();
        ~SendUserInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf username; //type: string
        YLeaf password; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack : public Entity
{
    public:
        LoopBack();
        ~LoopBack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ignore; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap : public Entity
{
    public:
        MsChap();
        ~MsChap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf password; //type: string
        YLeaf host_name; //type: string
        YLeaf refuse; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_authentication_failures; //type: uint32
        YLeaf timeout; //type: uint32

        class Method; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method> method;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeafList method; //type: list of  PppAuthenticationMethodEnum



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap : public Entity
{
    public:
        Chap();
        ~Chap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf password; //type: string
        YLeaf host_name; //type: string
        YLeaf refuse; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap


class InterfaceConfigurations::InterfaceConfiguration::Wanphy : public Entity
{
    public:
        Wanphy();
        ~Wanphy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf report_path_rdi; //type: empty
        YLeaf report_los; //type: empty
        YLeaf report_path_lcd; //type: empty
        YLeaf report_path_fe_plm; //type: empty
        YLeaf lan_mode; //type: WanphyLanModeEnum
        YLeaf report_path_plm; //type: empty
        YLeaf report_path_fe_ais; //type: empty
        YLeaf report_path_ais; //type: empty
        YLeaf report_line_ais; //type: empty
        YLeaf report_lof; //type: empty
        YLeaf report_lop; //type: empty
        YLeaf report_rdi; //type: empty
        YLeaf report_sd_ber; //type: empty
        YLeaf threshold_sd_ber; //type: uint32
        YLeaf report_sf_ber; //type: empty
        YLeaf threshold_sf_ber; //type: uint32
        YLeaf wan_mode; //type: WanphyWanModeEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Wanphy


class InterfaceConfigurations::InterfaceConfiguration::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf load_interval; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Statistics


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network : public Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mtu; //type: uint32
        YLeaf unnumbered; //type: string
        YLeaf ttl_propagate_disable; //type: empty
        YLeaf tcp_mss_adjust_enable; //type: empty
        YLeaf unreachables; //type: empty

        class BgpQosPolicyPropagation; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation
        class BgpPolicyAccountings; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings
        class MacAddressFilters; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters
        class Verify; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify
        class Addresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses
        class BgpFlowTagPolicyTable; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable> bgp_flow_tag_policy_table;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings> bgp_policy_accountings;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation> bgp_qos_policy_propagation; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters> mac_address_filters;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify> verify; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation : public Entity
{
    public:
        BgpQosPolicyPropagation();
        ~BgpQosPolicyPropagation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: Ipv6QppbEnum
        YLeaf destination; //type: Ipv6QppbEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings : public Entity
{
    public:
        BgpPolicyAccountings();
        ~BgpPolicyAccountings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpPolicyAccounting; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting> > bgp_policy_accounting;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting : public Entity
{
    public:
        BgpPolicyAccounting();
        ~BgpPolicyAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf direction; //type: string
        YLeaf destination_accounting; //type: boolean
        YLeaf source_accounting; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters : public Entity
{
    public:
        MacAddressFilters();
        ~MacAddressFilters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MacAddressFilter; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter> > mac_address_filter;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter : public Entity
{
    public:
        MacAddressFilter();
        ~MacAddressFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf multicast_address; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify : public Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reachable; //type: Ipv6ReachableEnum
        YLeaf self_ping; //type: Ipv6SelfPingEnum
        YLeaf default_ping; //type: Ipv6DefaultPingEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses : public Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SegmentRoutings; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings
        class LinkLocalAddress; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress
        class Eui64Addresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses
        class RegularAddresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses
        class AutoConfiguration; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses> eui64_addresses;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress> link_local_address; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses> regular_addresses;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings> segment_routings;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings : public Entity
{
    public:
        SegmentRoutings();
        ~SegmentRoutings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SegmentRouting; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting> > segment_routing;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting : public Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf enable; //type: empty

        class Ipv6PrefixSid; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid> ipv6_prefix_sid; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid : public Entity
{
    public:
        Ipv6PrefixSid();
        ~Ipv6PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint32
        YLeaf zone; //type: string
        YLeaf route_tag; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress : public Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf zone; //type: string
        YLeaf route_tag; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses : public Entity
{
    public:
        Eui64Addresses();
        ~Eui64Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Eui64Address; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address> > eui64_address;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address : public Entity
{
    public:
        Eui64Address();
        ~Eui64Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf zone; //type: string
        YLeaf route_tag; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses : public Entity
{
    public:
        RegularAddresses();
        ~RegularAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RegularAddress; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress> > regular_address;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress : public Entity
{
    public:
        RegularAddress();
        ~RegularAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf zone; //type: string
        YLeaf route_tag; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration : public Entity
{
    public:
        AutoConfiguration();
        ~AutoConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable : public Entity
{
    public:
        BgpFlowTagPolicyTable();
        ~BgpFlowTagPolicyTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpFlowTagPolicy; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy> bgp_flow_tag_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy : public Entity
{
    public:
        BgpFlowTagPolicy();
        ~BgpFlowTagPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy


class InterfaceConfigurations::InterfaceConfiguration::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EnableBbaGroup; //type: InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup> enable_bba_group; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Pppoe


class InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup : public Entity
{
    public:
        EnableBbaGroup();
        ~EnableBbaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf bba_group_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp : public Entity
{
    public:
        CiscoIosXrPppMaIpcpCfg_Ppp();
        ~CiscoIosXrPppMaIpcpCfg_Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipcp; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp> ipcp;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp : public Entity
{
    public:
        Ipcp();
        ~Ipcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_route_disable; //type: empty

        class PeerAddress; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress
        class Dns; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns> dns;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress> peer_address;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress : public Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns : public Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DnsAddresses; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses> dns_addresses;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses : public Entity
{
    public:
        DnsAddresses();
        ~DnsAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf primary; //type: string
        YLeaf secondary; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses


class InterfaceConfigurations::InterfaceConfiguration::AaaTable : public Entity
{
    public:
        AaaTable();
        ~AaaTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Radius; //type: InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius> radius;


}; // InterfaceConfigurations::InterfaceConfiguration::AaaTable


class InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius : public Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Attribute; //type: InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute> attribute;


}; // InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius


class InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nas_port_type; //type: NasPortValueEnum



}; // InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute


class InterfaceConfigurations::InterfaceConfiguration::Otu : public Entity
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


        YLeaf gcc; //type: empty
        YLeaf sf; //type: uint32
        YLeaf secondary_admin_state; //type: OtnSecAdminStateEnum
        YLeaf sd; //type: uint32
        YLeaf performance_monitoring; //type: OtnPerMonEnum
        YLeaf loopback; //type: OtnLoopbackEnum
        YLeaf fec; //type: OtuForwardErrorCorrectionEnum

        class OtnSendTtitcmos; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos
        class OtnSendTtitcmdapi; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi
        class OtnExpectedTtisapi; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi
        class ProactiveProtection; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection
        class NetworkSrlgs; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs
        class OtnSendTti; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti
        class OtnExpectedTtitcmdapi; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi
        class OtnSendTtisapi; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi
        class OtnExpectedTtitcmos; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos
        class OtnExpectedTti; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs> network_srlgs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti> otn_expected_tti;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi> otn_expected_ttisapi;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi> otn_expected_ttitcmdapi;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos> otn_expected_ttitcmos;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti> otn_send_tti;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi> otn_send_ttisapi;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi> otn_send_ttitcmdapi;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos> otn_send_ttitcmos;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection> proactive_protection;


}; // InterfaceConfigurations::InterfaceConfiguration::Otu


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos : public Entity
{
    public:
        OtnSendTtitcmos();
        ~OtnSendTtitcmos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnSendTtiTypeOsEnum
        YLeaf osascii_string; //type: string
        YLeaf oshex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi : public Entity
{
    public:
        OtnSendTtitcmdapi();
        ~OtnSendTtitcmdapi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnSendTtiTypeDapiEnum
        YLeaf dapi_ascii_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi : public Entity
{
    public:
        OtnExpectedTtisapi();
        ~OtnExpectedTtisapi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnExpTtiTypeSapiEnum
        YLeaf sapi_ascii_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection : public Entity
{
    public:
        ProactiveProtection();
        ~ProactiveProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: empty

        class TriggerThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold
        class RevertWindow; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow
        class TriggerWindow; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow
        class RevertThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold> revert_threshold;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow> revert_window;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold> trigger_threshold;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow> trigger_window;


}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold : public Entity
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


        YLeaf coefficient; //type: uint32
        YLeaf power; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow : public Entity
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


        YLeaf value_; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow : public Entity
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


        YLeaf value_; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold : public Entity
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


        YLeaf coefficient; //type: uint32
        YLeaf power; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold


class InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs : public Entity
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



        class NetworkSrlg; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg> > network_srlg;


}; // InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs


class InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti : public Entity
{
    public:
        OtnSendTti();
        ~OtnSendTti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnSendTtiTypeFullEnum
        YLeaf full_ascii_string; //type: string
        YLeaf hex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi : public Entity
{
    public:
        OtnExpectedTtitcmdapi();
        ~OtnExpectedTtitcmdapi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnExpTtiTypeDapiEnum
        YLeaf dapi_ascii_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi : public Entity
{
    public:
        OtnSendTtisapi();
        ~OtnSendTtisapi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnSendTtiTypeSapiEnum
        YLeaf sapi_ascii_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos : public Entity
{
    public:
        OtnExpectedTtitcmos();
        ~OtnExpectedTtitcmos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnExpTtiTypeOsEnum
        YLeaf osascii_string; //type: string
        YLeaf oshex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti : public Entity
{
    public:
        OtnExpectedTti();
        ~OtnExpectedTti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnExpTtiTypeFullEnum
        YLeaf full_ascii_string; //type: string
        YLeaf hex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti


class InterfaceConfigurations::InterfaceConfiguration::EthernetControl : public Entity
{
    public:
        EthernetControl();
        ~EthernetControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transport_mode; //type: EtherCtrlTransportModeEnum
        YLeaf small_frame_padding; //type: empty

        class Transceiver; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver> transceiver;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetControl


class InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver : public Entity
{
    public:
        Transceiver();
        ~Transceiver();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Permit; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit> permit;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver


class InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PermitPluggableEnum
        YLeaf pid; //type: PermitPluggablePidEnum



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit


class InterfaceConfigurations::InterfaceConfiguration::Cdp : public Entity
{
    public:
        Cdp();
        ~Cdp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Cdp


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter : public Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Inbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound
        class Outbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound> outbound;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty
        YLeaf compression_level; //type: uint32
        YLeafList acl_name_array; //type: list of  string
        YLeafList is_common_array; //type: list of  boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf do_not_use; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty
        YLeaf compression_level; //type: uint32
        YLeafList acl_name_array; //type: list of  string
        YLeafList is_common_array; //type: list of  boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound


class InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter : public Entity
{
    public:
        EsPacketFilter();
        ~EsPacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outbound; //type: string
        YLeaf inbound; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter : public Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Outbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound
        class Inbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound> outbound;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf do_not_use; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty
        YLeaf compression_level; //type: uint32
        YLeafList acl_name_array; //type: list of  string
        YLeafList is_common_array; //type: list of  boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty
        YLeaf compression_level; //type: uint32
        YLeafList acl_name_array; //type: list of  string
        YLeafList is_common_array; //type: list of  boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies : public Entity
{
    public:
        ServicePolicies();
        ~ServicePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy

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

#endif /* _CISCO_IOS_XR_IFMGR_CFG_ */

