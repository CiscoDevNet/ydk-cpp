#ifndef _CISCO_IOS_XE_NATIVE_0_
#define _CISCO_IOS_XE_NATIVE_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

class Native : public ydk::Entity
{
    public:
        Native();
        ~Native();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf boot_start_marker; //type: empty
        ydk::YLeaf boot_end_marker; //type: empty
        ydk::YLeaf captive_portal_bypass; //type: empty
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf aqm_register_fnf; //type: empty
        ydk::YLeaf config_register; //type: string
        ydk::YLeaf disable_eadi; //type: empty
        class Default; //type: Native::Default
        class Bfd; //type: Native::Bfd
        class StackwiseVirtual; //type: Native::StackwiseVirtual
        class Boot; //type: Native::Boot
        class Banner; //type: Native::Banner
        class Memory; //type: Native::Memory
        class Location; //type: Native::Location
        class CallHome; //type: Native::CallHome
        class HwModule; //type: Native::HwModule
        class Cisp; //type: Native::Cisp
        class Module; //type: Native::Module
        class Domain; //type: Native::Domain
        class Parser; //type: Native::Parser
        class Service; //type: Native::Service
        class Platform; //type: Native::Platform
        class Enable; //type: Native::Enable
        class Password; //type: Native::Password
        class Eap; //type: Native::Eap
        class Archive; //type: Native::Archive
        class Username; //type: Native::Username
        class Controller; //type: Native::Controller
        class Vrf; //type: Native::Vrf
        class Rmon; //type: Native::Rmon
        class Sampler; //type: Native::Sampler
        class Flow; //type: Native::Flow
        class Ip; //type: Native::Ip
        class Mka; //type: Native::Mka
        class Macro; //type: Native::Macro
        class Ipv6; //type: Native::Ipv6
        class Vlan; //type: Native::Vlan
        class Mvrp; //type: Native::Mvrp
        class Avb; //type: Native::Avb
        class Ptp; //type: Native::Ptp
        class Cdp; //type: Native::Cdp
        class Avc; //type: Native::Avc
        class Policy; //type: Native::Policy
        class Interface; //type: Native::Interface
        class RouteMap; //type: Native::RouteMap
        class RouteTag; //type: Native::RouteTag
        class TableMap; //type: Native::TableMap
        class Sdm; //type: Native::Sdm
        class Mls; //type: Native::Mls
        class ObjectGroup; //type: Native::ObjectGroup
        class PseudowireClass; //type: Native::PseudowireClass
        class ControlPlane; //type: Native::ControlPlane
        class ControlPlaneHost; //type: Native::ControlPlaneHost
        class Clock; //type: Native::Clock
        class Logging; //type: Native::Logging
        class Aaa; //type: Native::Aaa
        class Privilege; //type: Native::Privilege
        class Login; //type: Native::Login
        class Multilink; //type: Native::Multilink
        class MacAddressTable; //type: Native::MacAddressTable
        class Redundancy; //type: Native::Redundancy
        class Scheduler; //type: Native::Scheduler
        class Epm; //type: Native::Epm
        class SpanningTree; //type: Native::SpanningTree
        class Subscriber; //type: Native::Subscriber
        class Track; //type: Native::Track
        class Dot1X; //type: Native::Dot1X
        class Fallback; //type: Native::Fallback
        class ParameterMap; //type: Native::ParameterMap
        class Ppp; //type: Native::Ppp
        class Mac; //type: Native::Mac
        class Tacacs; //type: Native::Tacacs
        class TacacsServer; //type: Native::TacacsServer
        class Software; //type: Native::Software
        class Upgrade; //type: Native::Upgrade
        class Vtp; //type: Native::Vtp
        class Xconnect; //type: Native::Xconnect
        class Fabric; //type: Native::Fabric
        class PortChannel; //type: Native::PortChannel
        class Key; //type: Native::Key
        class L2; //type: Native::L2
        class System; //type: Native::System
        class Errdisable; //type: Native::Errdisable
        class Identity; //type: Native::Identity
        class Monitor; //type: Native::Monitor
        class TftpServer; //type: Native::TftpServer
        class RadiusServer; //type: Native::RadiusServer
        class Radius; //type: Native::Radius
        class Zone; //type: Native::Zone
        class ZonePair; //type: Native::ZonePair
        class AlarmContact; //type: Native::AlarmContact
        class Ethernet; //type: Native::Ethernet
        class BridgeDomain; //type: Native::BridgeDomain
        class Crypto; //type: Native::Crypto
        class Cts; //type: Native::Cts
        class BfdTemplate; //type: Native::BfdTemplate
        class Pfr; //type: Native::Pfr
        class PfrMap; //type: Native::PfrMap
        class FacilityAlarm; //type: Native::FacilityAlarm
        class Setup; //type: Native::Setup
        class TodClock; //type: Native::TodClock
        class NetworkClock; //type: Native::NetworkClock
        class L2Vpn; //type: Native::L2Vpn
        class L2VpnConfig; //type: Native::L2VpnConfig
        class L3Vpn; //type: Native::L3Vpn
        class Mpls; //type: Native::Mpls
        class Router; //type: Native::Router
        class ServiceChain; //type: Native::ServiceChain
        class Performance; //type: Native::Performance
        class Otv; //type: Native::Otv
        class RemoteManagement; //type: Native::RemoteManagement
        class VirtualService; //type: Native::VirtualService
        class Snmp; //type: Native::Snmp
        class SnmpServer; //type: Native::SnmpServer
        class SegmentRouting; //type: Native::SegmentRouting
        class License; //type: Native::License
        class MemorySize; //type: Native::MemorySize
        class Transceiver; //type: Native::Transceiver
        class ServiceInsertion; //type: Native::ServiceInsertion
        class Udld; //type: Native::Udld
        class Wireless; //type: Native::Wireless
        class Qos; //type: Native::Qos
        class TimeRange; //type: Native::TimeRange
        class DeviceTracking; //type: Native::DeviceTracking
        class Fhrp; //type: Native::Fhrp
        class Metadata; //type: Native::Metadata
        class Profile; //type: Native::Profile
        class Alias; //type: Native::Alias
        class Line; //type: Native::Line
        class Ntp; //type: Native::Ntp
        class Wsma; //type: Native::Wsma
        class Event; //type: Native::Event
        class Template; //type: Native::Template
        class Process; //type: Native::Process
        class Exception; //type: Native::Exception
        class Iox; //type: Native::Iox
        class Arp; //type: Native::Arp
        class Esmc; //type: Native::Esmc
        class BbaGroup; //type: Native::BbaGroup
        class Card; //type: Native::Card
        class Cef; //type: Native::Cef
        class Dialer; //type: Native::Dialer
        class DialerList; //type: Native::DialerList
        class Coap; //type: Native::Coap
        class DeviceSensor; //type: Native::DeviceSensor
        class Diagnostic; //type: Native::Diagnostic
        class EtAnalytics; //type: Native::EtAnalytics
        class FabricGroup; //type: Native::FabricGroup
        class Lldp; //type: Native::Lldp
        class MaintenanceTemplate; //type: Native::MaintenanceTemplate
        class Nat66; //type: Native::Nat66
        class PmAgent; //type: Native::PmAgent
        class Shell; //type: Native::Shell
        class Power; //type: Native::Power
        class NamedOrderingRouteMap; //type: Native::NamedOrderingRouteMap
        class AccessSession; //type: Native::AccessSession
        class Authentication; //type: Native::Authentication
        class ServiceList; //type: Native::ServiceList
        class ServiceRouting; //type: Native::ServiceRouting
        class NetworkPolicy; //type: Native::NetworkPolicy
        class Energywise; //type: Native::Energywise
        class ServiceTemplate; //type: Native::ServiceTemplate
        class Switch; //type: Native::Switch
        class SwitchVirtual; //type: Native::SwitchVirtual
        class Device; //type: Native::Device
        class StackMac; //type: Native::StackMac
        class L2ProtocolTunnel; //type: Native::L2ProtocolTunnel
        class Rep; //type: Native::Rep
        class HwSwitch; //type: Native::HwSwitch
        class Feature; //type: Native::Feature
        class Openflow; //type: Native::Openflow
        class Utd; //type: Native::Utd
        class UtdSt; //type: Native::UtdSt
        class UtdMt; //type: Native::UtdMt
        class Voice; //type: Native::Voice
        class VoiceCard; //type: Native::VoiceCard
        class Vpdn; //type: Native::Vpdn
        class Vstack; //type: Native::Vstack

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackwiseVirtual> stackwise_virtual; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot> boot;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Banner> banner;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory> memory;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Location> location;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome> call_home; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::HwModule> hw_module;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cisp> cisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Module> module;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain> > domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser> parser;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform> platform;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Eap> eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Archive> archive;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Username> > username;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller> controller;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rmon> rmon;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler> > sampler;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mka> mka;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Macro> macro;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan> vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mvrp> mvrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avb> avb; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ptp> ptp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cdp> cdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc> avc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface> interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap> > route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag> route_tag;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap> > table_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sdm> sdm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mls> mls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup> object_group;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass> > pseudowire_class;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlane> control_plane; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost> control_plane_host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock> clock_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa> aaa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Privilege> privilege;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login> login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Multilink> multilink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MacAddressTable> mac_address_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy> redundancy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Scheduler> scheduler;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Epm> epm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree> spanning_tree;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Subscriber> subscriber;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Dot1X> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fallback> fallback;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap> > parameter_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ppp> ppp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Tacacs> tacacs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TacacsServer> tacacs_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Software> software;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Upgrade> upgrade;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vtp> vtp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fabric> fabric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PortChannel> port_channel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2> l2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System> system;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Errdisable> errdisable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Identity> identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor> monitor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TftpServer> > tftp_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer> radius_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius> radius;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Zone> zone;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ZonePair> zone_pair;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AlarmContact> > alarm_contact;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain> bridge_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BfdTemplate> bfd_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr> pfr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap> > pfr_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FacilityAlarm> facility_alarm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Setup> setup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TodClock> tod_clock;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock> network_clock;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn> l2vpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2VpnConfig> l2vpn_config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3Vpn> l3vpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain> service_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance> performance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv> otv;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RemoteManagement> remote_management;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService> > virtual_service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer> snmp_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License> license;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MemorySize> memory_size;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Transceiver> transceiver;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion> service_insertion;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Udld> udld;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wireless> wireless;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos> qos; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TimeRange> > time_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking> device_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fhrp> fhrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Metadata> metadata;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Profile> profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Alias> alias;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line> line;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp> ntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wsma> wsma;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event> event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template> template_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process> process;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Exception> exception;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Iox> iox; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Esmc> esmc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup> bba_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Card> card;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef> cef;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Dialer> dialer;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DialerList> > dialer_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Coap> coap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceSensor> device_sensor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic> diagnostic;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::EtAnalytics> et_analytics; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup> fabric_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Lldp> lldp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MaintenanceTemplate> > maintenance_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Nat66> nat66;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent> pm_agent; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Shell> shell;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power> power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NamedOrderingRouteMap> named_ordering_route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList> service_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceRouting> service_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkPolicy> network_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Energywise> energywise;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceTemplate> > service_template;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Switch> > switch_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual> > switch_virtual;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Device> device;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackMac> stack_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2ProtocolTunnel> l2protocol_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rep> rep;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::HwSwitch> hw_switch;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Feature> feature;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow> openflow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd> utd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt> utd_st;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt> utd_mt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Voice> voice;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VoiceCard> > voice_card;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vpdn> vpdn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vstack> vstack;
        
}; // Native


class Native::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        class Crypto; //type: Native::Default::Crypto

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Default::Crypto> crypto;
        
}; // Native::Default


class Native::Default::Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

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

        class Ikev2; //type: Native::Default::Crypto::Ikev2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Default::Crypto::Ikev2> ikev2;
        
}; // Native::Default::Crypto


class Native::Default::Crypto::Ikev2 : public ydk::Entity
{
    public:
        Ikev2();
        ~Ikev2();

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

        ydk::YLeaf proposal; //type: empty
        ydk::YLeaf policy; //type: empty

}; // Native::Default::Crypto::Ikev2


class Native::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

        ydk::YLeaf l2cos; //type: uint8
        ydk::YLeaf slow_timers; //type: uint16
        class Map; //type: Native::Bfd::Map

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map> map;
        
}; // Native::Bfd


class Native::Bfd::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

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

        class Ipv4; //type: Native::Bfd::Map::Ipv4
        class Ipv6; //type: Native::Bfd::Map::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6> ipv6;
        
}; // Native::Bfd::Map


class Native::Bfd::Map::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class NoVrf; //type: Native::Bfd::Map::Ipv4::NoVrf
        class Vrf; //type: Native::Bfd::Map::Ipv4::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4::NoVrf> no_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv4


class Native::Bfd::Map::Ipv4::NoVrf : public ydk::Entity
{
    public:
        NoVrf();
        ~NoVrf();

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

        ydk::YLeaf dest_ip; //type: string
        ydk::YLeaf src_ip; //type: string
        ydk::YLeaf template_name; //type: string

}; // Native::Bfd::Map::Ipv4::NoVrf


class Native::Bfd::Map::Ipv4::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        class DstVrf; //type: Native::Bfd::Map::Ipv4::Vrf::DstVrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4::Vrf::DstVrf> > dst_vrf;
        
}; // Native::Bfd::Map::Ipv4::Vrf


class Native::Bfd::Map::Ipv4::Vrf::DstVrf : public ydk::Entity
{
    public:
        DstVrf();
        ~DstVrf();

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

        ydk::YLeaf dst_vrf; //type: string
        ydk::YLeaf a_period_b_period_c_period_d_slash_nn; //type: empty

}; // Native::Bfd::Map::Ipv4::Vrf::DstVrf


class Native::Bfd::Map::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        class DpIpv6Prefix; //type: Native::Bfd::Map::Ipv6::DpIpv6Prefix
        class Vrf; //type: Native::Bfd::Map::Ipv6::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6Prefix> > dp_ipv6_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv6


class Native::Bfd::Map::Ipv6::DpIpv6Prefix : public ydk::Entity
{
    public:
        DpIpv6Prefix();
        ~DpIpv6Prefix();

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

        ydk::YLeaf dp_ipv6_prefix; //type: string
        ydk::YLeaf bfd_nm; //type: string
        class SrcIpv6Prefix0; //type: Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0
        class Vrf; //type: Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0> > src_ipv6_prefix0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv6::DpIpv6Prefix


class Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0 : public ydk::Entity
{
    public:
        SrcIpv6Prefix0();
        ~SrcIpv6Prefix0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_ipv6_prefix0; //type: string
        ydk::YLeaf bfd_name; //type: string

}; // Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0


class Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrcVrf; //type: Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf> > src_vrf;
        
}; // Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf


class Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf : public ydk::Entity
{
    public:
        SrcVrf();
        ~SrcVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_vrf; //type: string
        ydk::YLeaf src_ipv6_prefix; //type: string

}; // Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf


class Native::Bfd::Map::Ipv6::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        class DstVrf; //type: Native::Bfd::Map::Ipv6::Vrf::DstVrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::Vrf::DstVrf> > dst_vrf;
        
}; // Native::Bfd::Map::Ipv6::Vrf


class Native::Bfd::Map::Ipv6::Vrf::DstVrf : public ydk::Entity
{
    public:
        DstVrf();
        ~DstVrf();

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

        ydk::YLeaf dst_vrf; //type: string
        ydk::YLeaf dst_ipv6_prefix; //type: string

}; // Native::Bfd::Map::Ipv6::Vrf::DstVrf


class Native::StackwiseVirtual : public ydk::Entity
{
    public:
        StackwiseVirtual();
        ~StackwiseVirtual();

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

        class Domain; //type: Native::StackwiseVirtual::Domain
        class DualActive; //type: Native::StackwiseVirtual::DualActive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackwiseVirtual::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackwiseVirtual::DualActive> dual_active;
        
}; // Native::StackwiseVirtual


class Native::StackwiseVirtual::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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

        ydk::YLeaf domain; //type: uint16

}; // Native::StackwiseVirtual::Domain


class Native::StackwiseVirtual::DualActive : public ydk::Entity
{
    public:
        DualActive();
        ~DualActive();

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

        class Detection; //type: Native::StackwiseVirtual::DualActive::Detection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackwiseVirtual::DualActive::Detection> detection;
        
}; // Native::StackwiseVirtual::DualActive


class Native::StackwiseVirtual::DualActive::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

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

        class Pagp; //type: Native::StackwiseVirtual::DualActive::Detection::Pagp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackwiseVirtual::DualActive::Detection::Pagp> pagp; // presence node
        
}; // Native::StackwiseVirtual::DualActive::Detection


class Native::StackwiseVirtual::DualActive::Detection::Pagp : public ydk::Entity
{
    public:
        Pagp();
        ~Pagp();

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

        class Trust; //type: Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust> trust;
        
}; // Native::StackwiseVirtual::DualActive::Detection::Pagp


class Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

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

        class ChannelGroup; //type: Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup> channel_group;
        
}; // Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust


class Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup : public ydk::Entity
{
    public:
        ChannelGroup();
        ~ChannelGroup();

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

        ydk::YLeaf channel_group_number; //type: uint16

}; // Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup


class Native::Boot : public ydk::Entity
{
    public:
        Boot();
        ~Boot();

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

        class System; //type: Native::Boot::System
        class EnableBreak; //type: Native::Boot::EnableBreak
        class Manual; //type: Native::Boot::Manual

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System> system;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::EnableBreak> enable_break; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::Manual> manual; // presence node
        
}; // Native::Boot


class Native::Boot::System : public ydk::Entity
{
    public:
        System();
        ~System();

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

        ydk::YLeaf tftp_path; //type: string
        ydk::YLeaf tftp; //type: string
        class Bootfile; //type: Native::Boot::System::Bootfile
        class Flash; //type: Native::Boot::System::Flash
        class Switch; //type: Native::Boot::System::Switch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Bootfile> bootfile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Flash> flash;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Switch> switch_;
        
}; // Native::Boot::System


class Native::Boot::System::Bootfile : public ydk::Entity
{
    public:
        Bootfile();
        ~Bootfile();

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

        class FilenameList; //type: Native::Boot::System::Bootfile::FilenameList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Bootfile::FilenameList> > filename_list;
        
}; // Native::Boot::System::Bootfile


class Native::Boot::System::Bootfile::FilenameList : public ydk::Entity
{
    public:
        FilenameList();
        ~FilenameList();

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

        ydk::YLeaf filename; //type: string

}; // Native::Boot::System::Bootfile::FilenameList


class Native::Boot::System::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

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

        class FlashList; //type: Native::Boot::System::Flash::FlashList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Flash::FlashList> > flash_list;
        
}; // Native::Boot::System::Flash


class Native::Boot::System::Flash::FlashList : public ydk::Entity
{
    public:
        FlashList();
        ~FlashList();

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

        ydk::YLeaf flash_leaf; //type: string

}; // Native::Boot::System::Flash::FlashList


class Native::Boot::System::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

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

        class SwitchNumber; //type: Native::Boot::System::Switch::SwitchNumber
        class All; //type: Native::Boot::System::Switch::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Switch::SwitchNumber> > switch_number;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Switch::All> all;
        
}; // Native::Boot::System::Switch


class Native::Boot::System::Switch::SwitchNumber : public ydk::Entity
{
    public:
        SwitchNumber();
        ~SwitchNumber();

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

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf flash_1_path; //type: string
        ydk::YLeaf flash_path; //type: string
        ydk::YLeaf tftp_path; //type: string

}; // Native::Boot::System::Switch::SwitchNumber


class Native::Boot::System::Switch::All : public ydk::Entity
{
    public:
        All();
        ~All();

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

        ydk::YLeaf flash_1; //type: string
        ydk::YLeaf flash; //type: string
        ydk::YLeaf tftp; //type: string

}; // Native::Boot::System::Switch::All


class Native::Boot::EnableBreak : public ydk::Entity
{
    public:
        EnableBreak();
        ~EnableBreak();

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

        ydk::YLeaf switch_; //type: uint8

}; // Native::Boot::EnableBreak


class Native::Boot::Manual : public ydk::Entity
{
    public:
        Manual();
        ~Manual();

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

        ydk::YLeaf switch_; //type: uint8

}; // Native::Boot::Manual


class Native::Banner : public ydk::Entity
{
    public:
        Banner();
        ~Banner();

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

        class Exec; //type: Native::Banner::Exec
        class Login; //type: Native::Banner::Login
        class PromptTimeout; //type: Native::Banner::PromptTimeout
        class Motd; //type: Native::Banner::Motd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Banner::Exec> exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Banner::Login> login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Banner::PromptTimeout> prompt_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Banner::Motd> motd;
        
}; // Native::Banner


class Native::Banner::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

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

        ydk::YLeaf banner; //type: string

}; // Native::Banner::Exec


class Native::Banner::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

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

        ydk::YLeaf banner; //type: string

}; // Native::Banner::Login


class Native::Banner::PromptTimeout : public ydk::Entity
{
    public:
        PromptTimeout();
        ~PromptTimeout();

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

        ydk::YLeaf banner; //type: string

}; // Native::Banner::PromptTimeout


class Native::Banner::Motd : public ydk::Entity
{
    public:
        Motd();
        ~Motd();

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

        ydk::YLeaf banner; //type: string

}; // Native::Banner::Motd


class Native::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

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

        ydk::YLeaf lite; //type: empty
        class Statistics; //type: Native::Memory::Statistics
        class Chunk; //type: Native::Memory::Chunk
        class Free; //type: Native::Memory::Free
        class Reserve; //type: Native::Memory::Reserve
        class Sanity; //type: Native::Memory::Sanity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory::Statistics> statistics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory::Chunk> chunk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory::Free> free;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory::Reserve> reserve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory::Sanity> sanity; // presence node
        
}; // Native::Memory


class Native::Memory::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class History; //type: Native::Memory::Statistics::History

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory::Statistics::History> history;
        
}; // Native::Memory::Statistics


class Native::Memory::Statistics::History : public ydk::Entity
{
    public:
        History();
        ~History();

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

        ydk::YLeaf table; //type: uint8

}; // Native::Memory::Statistics::History


class Native::Memory::Chunk : public ydk::Entity
{
    public:
        Chunk();
        ~Chunk();

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

        class Siblings; //type: Native::Memory::Chunk::Siblings

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory::Chunk::Siblings> siblings;
        
}; // Native::Memory::Chunk


class Native::Memory::Chunk::Siblings : public ydk::Entity
{
    public:
        Siblings();
        ~Siblings();

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

        ydk::YLeaf threshold; //type: uint32

}; // Native::Memory::Chunk::Siblings


class Native::Memory::Free : public ydk::Entity
{
    public:
        Free();
        ~Free();

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

        class LowWatermark; //type: Native::Memory::Free::LowWatermark

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory::Free::LowWatermark> low_watermark;
        
}; // Native::Memory::Free


class Native::Memory::Free::LowWatermark : public ydk::Entity
{
    public:
        LowWatermark();
        ~LowWatermark();

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

        ydk::YLeaf io; //type: uint32
        ydk::YLeaf processor; //type: uint32

}; // Native::Memory::Free::LowWatermark


class Native::Memory::Reserve : public ydk::Entity
{
    public:
        Reserve();
        ~Reserve();

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

        class Critical; //type: Native::Memory::Reserve::Critical

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory::Reserve::Critical> critical; // presence node
        
}; // Native::Memory::Reserve


class Native::Memory::Reserve::Critical : public ydk::Entity
{
    public:
        Critical();
        ~Critical();

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

        ydk::YLeaf memory_range; //type: uint32

}; // Native::Memory::Reserve::Critical


class Native::Memory::Sanity : public ydk::Entity
{
    public:
        Sanity();
        ~Sanity();

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

        ydk::YLeaf all; //type: empty
        ydk::YLeaf buffer; //type: empty
        ydk::YLeaf queue; //type: empty

}; // Native::Memory::Sanity


class Native::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        class CivicLocation; //type: Native::Location::CivicLocation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Location::CivicLocation> civic_location;
        
}; // Native::Location


class Native::Location::CivicLocation : public ydk::Entity
{
    public:
        CivicLocation();
        ~CivicLocation();

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

        class Identifier; //type: Native::Location::CivicLocation::Identifier

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Location::CivicLocation::Identifier> > identifier;
        
}; // Native::Location::CivicLocation


class Native::Location::CivicLocation::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

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

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf building; //type: string
        ydk::YLeaf floor; //type: string
        ydk::YLeaf landmark; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf number; //type: string

}; // Native::Location::CivicLocation::Identifier


class Native::CallHome : public ydk::Entity
{
    public:
        CallHome();
        ~CallHome();

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

        ydk::YLeaf contact_email_addr; //type: string
        class SourceInterface; //type: Native::CallHome::SourceInterface
        class HttpProxy; //type: Native::CallHome::HttpProxy
        class Profile; //type: Native::CallHome::Profile

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface> source_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::HttpProxy> http_proxy;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile> > profile;
        
}; // Native::CallHome


class Native::CallHome::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::CallHome::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::CallHome::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::CallHome::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::CallHome::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::CallHome::SourceInterface


class Native::CallHome::SourceInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::CallHome::SourceInterface::ATMSubinterface


class Native::CallHome::SourceInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::CallHome::SourceInterface::ATMACRsubinterface


class Native::CallHome::SourceInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::CallHome::SourceInterface::LISPSubinterface


class Native::CallHome::SourceInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::CallHome::SourceInterface::PortChannelSubinterface


class Native::CallHome::HttpProxy : public ydk::Entity
{
    public:
        HttpProxy();
        ~HttpProxy();

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

        class ProxyServers; //type: Native::CallHome::HttpProxy::ProxyServers

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::HttpProxy::ProxyServers> > proxy_servers;
        
}; // Native::CallHome::HttpProxy


class Native::CallHome::HttpProxy::ProxyServers : public ydk::Entity
{
    public:
        ProxyServers();
        ~ProxyServers();

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

        ydk::YLeaf proxy_server; //type: string
        ydk::YLeaf port; //type: uint16

}; // Native::CallHome::HttpProxy::ProxyServers


class Native::CallHome::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf active; //type: boolean
        class Destination; //type: Native::CallHome::Profile::Destination
        class SubscribeToAlertGroup; //type: Native::CallHome::Profile::SubscribeToAlertGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup> subscribe_to_alert_group;
        
}; // Native::CallHome::Profile


class Native::CallHome::Profile::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_method; //type: TransportMethod
        class Address; //type: Native::CallHome::Profile::Destination::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::Destination::Address> address;
                class TransportMethod;

}; // Native::CallHome::Profile::Destination


class Native::CallHome::Profile::Destination::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf email; //type: string
        ydk::YLeaf http; //type: string

}; // Native::CallHome::Profile::Destination::Address


class Native::CallHome::Profile::SubscribeToAlertGroup : public ydk::Entity
{
    public:
        SubscribeToAlertGroup();
        ~SubscribeToAlertGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diagnostic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic
        class Environment; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Environment
        class Inventory; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory
        class Syslog; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Syslog
        class Configuration; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic> diagnostic; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Environment> environment; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory> inventory; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Syslog> syslog; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration> configuration; // presence node
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup


class Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic : public ydk::Entity
{
    public:
        Diagnostic();
        ~Diagnostic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: Severity
        class Severity;

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic


class Native::CallHome::Profile::SubscribeToAlertGroup::Environment : public ydk::Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: Severity
        class Severity;

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Environment


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Periodic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic> periodic;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily
        class Monthly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly
        class Weekly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly> monthly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly> weekly;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly : public ydk::Entity
{
    public:
        Monthly();
        ~Monthly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date; //type: uint8
        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly


class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Severity; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity> > severity;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Syslog


class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity : public ydk::Entity
{
    public:
        Severity();
        ~Severity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: Value_
        ydk::YLeaf pattern; //type: string
        class Value_;

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Periodic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic> periodic;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily
        class Monthly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly
        class Weekly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly> monthly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly> weekly;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly : public ydk::Entity
{
    public:
        Monthly();
        ~Monthly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date; //type: uint8
        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly


class Native::HwModule : public ydk::Entity
{
    public:
        HwModule();
        ~HwModule();

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

        ydk::YLeaf sm; //type: uint8
        ydk::YLeaf pvdm; //type: string
        class Uplink; //type: Native::HwModule::Uplink

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::HwModule::Uplink> uplink;
        
}; // Native::HwModule


class Native::HwModule::Uplink : public ydk::Entity
{
    public:
        Uplink();
        ~Uplink();

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

        ydk::YLeaf select; //type: string
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::HwModule::Uplink


class Native::Cisp : public ydk::Entity
{
    public:
        Cisp();
        ~Cisp();

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

        ydk::YLeaf enable; //type: empty

}; // Native::Cisp


class Native::Module : public ydk::Entity
{
    public:
        Module();
        ~Module();

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

        class Provision; //type: Native::Module::Provision

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Module::Provision> provision;
        
}; // Native::Module


class Native::Module::Provision : public ydk::Entity
{
    public:
        Provision();
        ~Provision();

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

        class Switch; //type: Native::Module::Provision::Switch

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Module::Provision::Switch> > switch_;
        
}; // Native::Module::Provision


class Native::Module::Provision::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

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

        ydk::YLeaf number; //type: uint8
        class Chassis; //type: Native::Module::Provision::Switch::Chassis
        class Slot; //type: Native::Module::Provision::Switch::Slot

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Module::Provision::Switch::Chassis> chassis;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Module::Provision::Switch::Slot> > slot;
        
}; // Native::Module::Provision::Switch


class Native::Module::Provision::Switch::Chassis : public ydk::Entity
{
    public:
        Chassis();
        ~Chassis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_type; //type: uint32
        ydk::YLeaf base_mac; //type: string

}; // Native::Module::Provision::Switch::Chassis


class Native::Module::Provision::Switch::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf slot_type; //type: uint32
        ydk::YLeaf base_mac; //type: string

}; // Native::Module::Provision::Switch::Slot


class Native::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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

        ydk::YLeaf name; //type: string
        class Vrf; //type: Native::Domain::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf> > vrf;
        
}; // Native::Domain


class Native::Domain::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Border; //type: Native::Domain::Vrf::Border
        class Master; //type: Native::Domain::Vrf::Master

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Border> border;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master> master;
        
}; // Native::Domain::Vrf


class Native::Domain::Vrf::Border : public ydk::Entity
{
    public:
        Border();
        ~Border();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf master; //type: one of enumeration, string
        class Advanced; //type: Native::Domain::Vrf::Border::Advanced
        class SourceInterface; //type: Native::Domain::Vrf::Border::SourceInterface
        class Password; //type: Native::Domain::Vrf::Border::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Border::Advanced> advanced;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Border::SourceInterface> source_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Border::Password> password;
                class Master;

}; // Native::Domain::Vrf::Border


class Native::Domain::Vrf::Border::Advanced : public ydk::Entity
{
    public:
        Advanced();
        ~Advanced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_cache_percent; //type: uint8

}; // Native::Domain::Vrf::Border::Advanced


class Native::Domain::Vrf::Border::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::Domain::Vrf::Border::SourceInterface


class Native::Domain::Vrf::Border::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Domain::Vrf::Border::Password


class Native::Domain::Vrf::Master : public ydk::Entity
{
    public:
        Master();
        ~Master();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf branch; //type: empty
        ydk::YLeaf hub; //type: empty
        ydk::YLeaf transit; //type: uint8
        ydk::YLeaf hub_ip; //type: string
        class Advanced; //type: Native::Domain::Vrf::Master::Advanced
        class Collector; //type: Native::Domain::Vrf::Master::Collector
        class EnterprisePrefix; //type: Native::Domain::Vrf::Master::EnterprisePrefix
        class LoadBalance; //type: Native::Domain::Vrf::Master::LoadBalance
        class Password; //type: Native::Domain::Vrf::Master::Password
        class SitePrefixes; //type: Native::Domain::Vrf::Master::SitePrefixes
        class SourceInterface; //type: Native::Domain::Vrf::Master::SourceInterface
        class Class; //type: Native::Domain::Vrf::Master::Class

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced> advanced;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Collector> collector;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::EnterprisePrefix> enterprise_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::LoadBalance> load_balance; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::SitePrefixes> site_prefixes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::SourceInterface> source_interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class> > class_;
        
}; // Native::Domain::Vrf::Master


class Native::Domain::Vrf::Master::Advanced : public ydk::Entity
{
    public:
        Advanced();
        ~Advanced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte_loss_threshold; //type: uint16
        ydk::YLeaf channel_unreachable_timer; //type: uint16
        ydk::YLeaf load_sharing; //type: empty
        ydk::YLeaf minimum_mask_length; //type: uint8
        ydk::YLeaf mitigation_mode; //type: MitigationMode
        ydk::YLeaf packet_loss_threshold; //type: uint8
        ydk::YLeaf threshold_variance; //type: uint8
        ydk::YLeaf transit_site_affinity; //type: empty
        class SmartProbes; //type: Native::Domain::Vrf::Master::Advanced::SmartProbes
        class Syslog; //type: Native::Domain::Vrf::Master::Advanced::Syslog
        class Tcp; //type: Native::Domain::Vrf::Master::Advanced::Tcp
        class TrafficClassAgeoutTimer; //type: Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::SmartProbes> smart_probes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::Syslog> syslog;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer> traffic_class_ageout_timer;
                class MitigationMode;

}; // Native::Domain::Vrf::Master::Advanced


class Native::Domain::Vrf::Master::Advanced::SmartProbes : public ydk::Entity
{
    public:
        SmartProbes();
        ~SmartProbes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_port; //type: uint16
        ydk::YLeaf source_port; //type: uint16

}; // Native::Domain::Vrf::Master::Advanced::SmartProbes


class Native::Domain::Vrf::Master::Advanced::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tca_time_min; //type: uint32

}; // Native::Domain::Vrf::Master::Advanced::Syslog


class Native::Domain::Vrf::Master::Advanced::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mc_port; //type: uint16

}; // Native::Domain::Vrf::Master::Advanced::Tcp


class Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer : public ydk::Entity
{
    public:
        TrafficClassAgeoutTimer();
        ~TrafficClassAgeoutTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf interval_unit; //type: IntervalUnit
        class IntervalUnit;

}; // Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer


class Native::Domain::Vrf::Master::Collector : public ydk::Entity
{
    public:
        Collector();
        ~Collector();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16

}; // Native::Domain::Vrf::Master::Collector


class Native::Domain::Vrf::Master::EnterprisePrefix : public ydk::Entity
{
    public:
        EnterprisePrefix();
        ~EnterprisePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Native::Domain::Vrf::Master::EnterprisePrefix


class Native::Domain::Vrf::Master::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Advanced; //type: Native::Domain::Vrf::Master::LoadBalance::Advanced

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::LoadBalance::Advanced> advanced;
        
}; // Native::Domain::Vrf::Master::LoadBalance


class Native::Domain::Vrf::Master::LoadBalance::Advanced : public ydk::Entity
{
    public:
        Advanced();
        ~Advanced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_last_resort; //type: string
        class Match; //type: Native::Domain::Vrf::Master::LoadBalance::Advanced::Match
        class PathPreference; //type: Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::LoadBalance::Advanced::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference> path_preference;
        
}; // Native::Domain::Vrf::Master::LoadBalance::Advanced


class Native::Domain::Vrf::Master::LoadBalance::Advanced::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dscp; //type: Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp> > dscp;
        
}; // Native::Domain::Vrf::Master::LoadBalance::Advanced::Match


class Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint8, enumeration
        ydk::YLeaf policy; //type: Policy
        class Policy;

}; // Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp


class Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference : public ydk::Entity
{
    public:
        PathPreference();
        ~PathPreference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf primary2; //type: string
        ydk::YLeaf primary3; //type: string
        ydk::YLeaf fallback; //type: one of enumeration, string
        ydk::YLeaf fallback2; //type: string
        ydk::YLeaf fallback3; //type: string
        class Fallback;

}; // Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference


class Native::Domain::Vrf::Master::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Domain::Vrf::Master::Password


class Native::Domain::Vrf::Master::SitePrefixes : public ydk::Entity
{
    public:
        SitePrefixes();
        ~SitePrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Native::Domain::Vrf::Master::SitePrefixes


class Native::Domain::Vrf::Master::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::Domain::Vrf::Master::SourceInterface


class Native::Domain::Vrf::Master::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf sequence; //type: uint16
        ydk::YLeaf path_last_resort; //type: string
        class Match; //type: Native::Domain::Vrf::Master::Class::Match
        class PathPreference; //type: Native::Domain::Vrf::Master::Class::PathPreference

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class::PathPreference> path_preference;
        
}; // Native::Domain::Vrf::Master::Class


class Native::Domain::Vrf::Master::Class::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dscp; //type: Native::Domain::Vrf::Master::Class::Match::Dscp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class::Match::Dscp> > dscp;
        
}; // Native::Domain::Vrf::Master::Class::Match


class Native::Domain::Vrf::Master::Class::Match::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint8, enumeration
        ydk::YLeaf policy; //type: Policy
        class Policy;

}; // Native::Domain::Vrf::Master::Class::Match::Dscp


class Native::Domain::Vrf::Master::Class::PathPreference : public ydk::Entity
{
    public:
        PathPreference();
        ~PathPreference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf primary2; //type: string
        ydk::YLeaf primary3; //type: string
        ydk::YLeaf fallback; //type: one of enumeration, string
        ydk::YLeaf fallback2; //type: string
        ydk::YLeaf fallback3; //type: string
        class Fallback;

}; // Native::Domain::Vrf::Master::Class::PathPreference


class Native::Parser : public ydk::Entity
{
    public:
        Parser();
        ~Parser();

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

        class Config; //type: Native::Parser::Config
        class View; //type: Native::Parser::View

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::Config> config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View> view;
        
}; // Native::Parser


class Native::Parser::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf cache; //type: Cache
        ydk::YLeaf partition; //type: empty
        class Cache;

}; // Native::Parser::Config


class Native::Parser::View : public ydk::Entity
{
    public:
        View();
        ~View();

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

        class ViewNameList; //type: Native::Parser::View::ViewNameList
        class ViewNameSuperviewList; //type: Native::Parser::View::ViewNameSuperviewList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList> > view_name_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameSuperviewList> > view_name_superview_list;
        
}; // Native::Parser::View


class Native::Parser::View::ViewNameList : public ydk::Entity
{
    public:
        ViewNameList();
        ~ViewNameList();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf inclusive; //type: empty
        class Secret; //type: Native::Parser::View::ViewNameList::Secret
        class Commands; //type: Native::Parser::View::ViewNameList::Commands

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Secret> secret;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands> commands;
        
}; // Native::Parser::View::ViewNameList


class Native::Parser::View::ViewNameList::Secret : public ydk::Entity
{
    public:
        Secret();
        ~Secret();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Parser::View::ViewNameList::Secret


class Native::Parser::View::ViewNameList::Commands : public ydk::Entity
{
    public:
        Commands();
        ~Commands();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exec; //type: Native::Parser::View::ViewNameList::Commands::Exec
        class Configure; //type: Native::Parser::View::ViewNameList::Commands::Configure

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Exec> exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Configure> configure;
        
}; // Native::Parser::View::ViewNameList::Commands


class Native::Parser::View::ViewNameList::Commands::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exclude; //type: Native::Parser::View::ViewNameList::Commands::Exec::Exclude
        class Include; //type: Native::Parser::View::ViewNameList::Commands::Exec::Include
        class IncludeExclusive; //type: Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Exec::Exclude> exclude;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Exec::Include> include;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive> include_exclusive;
        
}; // Native::Parser::View::ViewNameList::Commands::Exec


class Native::Parser::View::ViewNameList::Commands::Exec::Exclude : public ydk::Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommandList; //type: Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList> > command_list;
        
}; // Native::Parser::View::ViewNameList::Commands::Exec::Exclude


class Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf all; //type: empty

}; // Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList


class Native::Parser::View::ViewNameList::Commands::Exec::Include : public ydk::Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommandList; //type: Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList> > command_list;
        
}; // Native::Parser::View::ViewNameList::Commands::Exec::Include


class Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf all; //type: empty

}; // Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList


class Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive : public ydk::Entity
{
    public:
        IncludeExclusive();
        ~IncludeExclusive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommandList; //type: Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList> > command_list;
        
}; // Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive


class Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf all; //type: empty

}; // Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList


class Native::Parser::View::ViewNameList::Commands::Configure : public ydk::Entity
{
    public:
        Configure();
        ~Configure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exclude; //type: Native::Parser::View::ViewNameList::Commands::Configure::Exclude
        class Include; //type: Native::Parser::View::ViewNameList::Commands::Configure::Include
        class IncludeExclusive; //type: Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Configure::Exclude> exclude;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Configure::Include> include;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive> include_exclusive;
        
}; // Native::Parser::View::ViewNameList::Commands::Configure


class Native::Parser::View::ViewNameList::Commands::Configure::Exclude : public ydk::Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommandList; //type: Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList> > command_list;
        
}; // Native::Parser::View::ViewNameList::Commands::Configure::Exclude


class Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf all; //type: empty

}; // Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList


class Native::Parser::View::ViewNameList::Commands::Configure::Include : public ydk::Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommandList; //type: Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList> > command_list;
        
}; // Native::Parser::View::ViewNameList::Commands::Configure::Include


class Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf all; //type: empty

}; // Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList


class Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive : public ydk::Entity
{
    public:
        IncludeExclusive();
        ~IncludeExclusive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommandList; //type: Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList> > command_list;
        
}; // Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive


class Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf all; //type: empty

}; // Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList


class Native::Parser::View::ViewNameSuperviewList : public ydk::Entity
{
    public:
        ViewNameSuperviewList();
        ~ViewNameSuperviewList();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf superview; //type: empty
        class Secret; //type: Native::Parser::View::ViewNameSuperviewList::Secret
        class View_; //type: Native::Parser::View::ViewNameSuperviewList::View_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameSuperviewList::Secret> secret;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameSuperviewList::View_> > view;
        
}; // Native::Parser::View::ViewNameSuperviewList


class Native::Parser::View::ViewNameSuperviewList::Secret : public ydk::Entity
{
    public:
        Secret();
        ~Secret();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Parser::View::ViewNameSuperviewList::Secret


class Native::Parser::View::ViewNameSuperviewList::View_ : public ydk::Entity
{
    public:
        View_();
        ~View_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::View::ViewNameList::name)
        ydk::YLeaf view_name;

}; // Native::Parser::View::ViewNameSuperviewList::View_


class Native::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

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

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf password_encryption; //type: empty
        ydk::YLeaf password_recovery; //type: boolean
        ydk::YLeaf call_home; //type: empty
        ydk::YLeaf compress_config; //type: empty
        ydk::YLeaf config; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf disable_ip_fast_frag; //type: empty
        ydk::YLeaf exec_callback; //type: empty
        ydk::YLeaf exec_wait; //type: empty
        ydk::YLeaf finger; //type: empty
        ydk::YLeaf hide_telnet_addresses; //type: empty
        ydk::YLeaf linenumber; //type: empty
        ydk::YLeaf log_hidden; //type: empty
        ydk::YLeaf nagle; //type: empty
        ydk::YLeaf old_slip_prompts; //type: empty
        ydk::YLeaf pt_vty_logging; //type: empty
        ydk::YLeaf sequence_numbers; //type: empty
        ydk::YLeaf slave_log; //type: empty
        ydk::YLeaf tcp_keepalives_in; //type: empty
        ydk::YLeaf tcp_keepalives_out; //type: empty
        ydk::YLeaf telnet_zeroidle; //type: empty
        ydk::YLeaf tcp_small_servers; //type: empty
        ydk::YLeaf udp_small_servers; //type: empty
        ydk::YLeaf unsupported_transceiver; //type: empty
        class PadConf; //type: Native::Service::PadConf
        class Pad; //type: Native::Service::Pad
        class Timestamps; //type: Native::Service::Timestamps
        class Alignment; //type: Native::Service::Alignment
        class Counters; //type: Native::Service::Counters
        class Heartbeat; //type: Native::Service::Heartbeat
        class Prompt; //type: Native::Service::Prompt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::PadConf> pad_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Pad> pad; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps> timestamps; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Alignment> alignment;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Counters> counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Heartbeat> heartbeat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Prompt> prompt;
        
}; // Native::Service


class Native::Service::PadConf : public ydk::Entity
{
    public:
        PadConf();
        ~PadConf();

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

        ydk::YLeaf pad; //type: boolean

}; // Native::Service::PadConf


class Native::Service::Pad : public ydk::Entity
{
    public:
        Pad();
        ~Pad();

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

        ydk::YLeaf cmns; //type: empty
        ydk::YLeaf from_xot; //type: empty
        ydk::YLeaf to_xot; //type: empty

}; // Native::Service::Pad


class Native::Service::Timestamps : public ydk::Entity
{
    public:
        Timestamps();
        ~Timestamps();

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

        class Debug; //type: Native::Service::Timestamps::Debug
        class Log; //type: Native::Service::Timestamps::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug> debug;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Log> log;
        
}; // Native::Service::Timestamps


class Native::Service::Timestamps::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

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

        ydk::YLeaf uptime; //type: empty
        class Datetime; //type: Native::Service::Timestamps::Debug::Datetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime> datetime; // presence node
        
}; // Native::Service::Timestamps::Debug


class Native::Service::Timestamps::Debug::Datetime : public ydk::Entity
{
    public:
        Datetime();
        ~Datetime();

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

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Year

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime> localtime; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec> msec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime


class Native::Service::Timestamps::Debug::Datetime::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

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

        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Year

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Msec> msec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Localtime


class Native::Service::Timestamps::Debug::Datetime::Localtime::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

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

        ydk::YLeaf show_timezone; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Msec


class Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

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

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Localtime::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

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

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Year


class Native::Service::Timestamps::Debug::Datetime::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

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

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Year

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Localtime> localtime; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Msec


class Native::Service::Timestamps::Debug::Datetime::Msec::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

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

        ydk::YLeaf show_timezone; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Localtime


class Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

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

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Msec::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

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

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Year

class MonitorEventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf detail;
        static const ydk::Enum::YLeaf major_;

};

class LoggingLevelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf warnings;
        static const ydk::Enum::YLeaf bogus;

};

class Native::CallHome::Profile::Destination::TransportMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf email;

};

class Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catastrophic;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf disaster;
        static const ydk::Enum::YLeaf fatal;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf notification;
        static const ydk::Enum::YLeaf warning;

};

class Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catastrophic;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf disaster;
        static const ydk::Enum::YLeaf fatal;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf notification;
        static const ydk::Enum::YLeaf warning;

};

class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catastrophic;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf disaster;
        static const ydk::Enum::YLeaf fatal;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf notification;
        static const ydk::Enum::YLeaf warning;

};

class Native::HwModule::Uplink::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shared_backplane;

};

class Native::Domain::Vrf::Border::Master : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;

};

class Native::Domain::Vrf::Border::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Domain::Vrf::Master::Advanced::MitigationMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aggressive;

};

class Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::IntervalUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hours;
        static const ydk::Enum::YLeaf minutes;

};

class Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf best_effort;
        static const ydk::Enum::YLeaf bulk_data;
        static const ydk::Enum::YLeaf custom;
        static const ydk::Enum::YLeaf low_latency_data;
        static const ydk::Enum::YLeaf real_time_video;
        static const ydk::Enum::YLeaf scavenger;
        static const ydk::Enum::YLeaf voice;

};

class Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::Fallback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routing;
        static const ydk::Enum::YLeaf blackhole;

};

class Native::Domain::Vrf::Master::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Domain::Vrf::Master::Class::Match::Dscp::Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf best_effort;
        static const ydk::Enum::YLeaf bulk_data;
        static const ydk::Enum::YLeaf custom;
        static const ydk::Enum::YLeaf low_latency_data;
        static const ydk::Enum::YLeaf real_time_video;
        static const ydk::Enum::YLeaf scavenger;
        static const ydk::Enum::YLeaf voice;

};

class Native::Domain::Vrf::Master::Class::PathPreference::Fallback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routing;
        static const ydk::Enum::YLeaf blackhole;

};

class Native::Parser::Config::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;

};

class Native::Parser::View::ViewNameList::Secret::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_5;

};

class Native::Parser::View::ViewNameSuperviewList::Secret::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_5;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_0_ */

