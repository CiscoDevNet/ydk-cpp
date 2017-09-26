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
        class Default_; //type: Native::Default_
        class Bfd; //type: Native::Bfd
        class Boot; //type: Native::Boot
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
        class Cdp; //type: Native::Cdp
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
        class Clock_; //type: Native::Clock_
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
        class AccessList; //type: Native::AccessList
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
        class CiscoIOSXENativeTemplate; //type: Native::CiscoIOSXENativeTemplate
        class Process; //type: Native::Process
        class Exception; //type: Native::Exception
        class Iox; //type: Native::Iox
        class Ap; //type: Native::Ap
        class Arp; //type: Native::Arp
        class Esmc; //type: Native::Esmc
        class BbaGroup; //type: Native::BbaGroup
        class Card; //type: Native::Card
        class Cef; //type: Native::Cef
        class Coap; //type: Native::Coap
        class DeviceSensor; //type: Native::DeviceSensor
        class Diagnostic; //type: Native::Diagnostic
        class Lldp; //type: Native::Lldp
        class MaintenanceTemplate; //type: Native::MaintenanceTemplate
        class Nat66; //type: Native::Nat66
        class PmAgent; //type: Native::PmAgent
        class Power; //type: Native::Power
        class NamedOrderingRouteMap; //type: Native::NamedOrderingRouteMap
        class AccessSession; //type: Native::AccessSession
        class Authentication; //type: Native::Authentication
        class ServiceList; //type: Native::ServiceList
        class ServiceRouting; //type: Native::ServiceRouting
        class NetworkPolicy; //type: Native::NetworkPolicy
        class Energywise; //type: Native::Energywise
        class CiscoIOSXESwitchTemplate; //type: Native::CiscoIOSXESwitchTemplate
        class ServiceTemplate; //type: Native::ServiceTemplate
        class Switch_; //type: Native::Switch_
        class SwitchVirtual; //type: Native::SwitchVirtual
        class Device; //type: Native::Device
        class StackMac; //type: Native::StackMac
        class L2ProtocolTunnel; //type: Native::L2ProtocolTunnel
        class Rep; //type: Native::Rep
        class HwSwitch; //type: Native::HwSwitch
        class Utd; //type: Native::Utd
        class UtdEngine; //type: Native::UtdEngine
        class Voice; //type: Native::Voice
        class VoiceCard; //type: Native::VoiceCard
        class Vpdn; //type: Native::Vpdn
        class Vstack; //type: Native::Vstack

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa> aaa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession> access_session;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AlarmContact> > alarm_contact;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Alias> alias;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap> ap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Archive> archive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup> bba_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BfdTemplate> bfd_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot> boot;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain> bridge_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome> call_home; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Card> card;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cdp> cdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef> cef;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate> cisco_ios_xe_native_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate> cisco_ios_xe_switch_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cisp> cisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock_> clock_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Coap> coap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlane> control_plane; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost> control_plane_host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller> controller;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Device> device;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceSensor> device_sensor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking> device_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic> diagnostic;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Domain> > domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Dot1X> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Eap> eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Energywise> energywise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Epm> epm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Errdisable> errdisable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Esmc> esmc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event> event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Exception> exception;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fabric> fabric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FacilityAlarm> facility_alarm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fallback> fallback;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fhrp> fhrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::HwModule> hw_module;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::HwSwitch> hw_switch;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Identity> identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Iox> iox; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2> l2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2ProtocolTunnel> l2protocol_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn> l2vpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2VpnConfig> l2vpn_config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3Vpn> l3vpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License> license;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line> line;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Lldp> lldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Location> location;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login> login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MacAddressTable> mac_address_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Macro> macro;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MaintenanceTemplate> > maintenance_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Memory> memory;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MemorySize> memory_size;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Metadata> metadata;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mka> mka;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mls> mls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Module> module;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Multilink> multilink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NamedOrderingRouteMap> named_ordering_route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Nat66> nat66;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock> network_clock;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkPolicy> network_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp> ntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup> object_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv> otv;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap> > parameter_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser> parser;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance> performance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr> pfr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap> > pfr_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform> platform;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent> pm_agent; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PortChannel> port_channel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power> power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ppp> ppp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Privilege> privilege;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process> process;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Profile> profile;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass> > pseudowire_class;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos> qos; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius> radius;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer> radius_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy> redundancy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RemoteManagement> remote_management;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rep> rep;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rmon> rmon;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap> > route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag> route_tag;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router> router;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler> > sampler;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Scheduler> scheduler;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sdm> sdm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain> service_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion> service_insertion;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList> service_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceRouting> service_routing;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceTemplate> > service_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Setup> setup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer> snmp_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Software> software;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree> spanning_tree;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackMac> stack_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Subscriber> subscriber;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Switch_> > switch_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual> > switch_virtual;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System> system;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap> > table_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Tacacs> tacacs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TacacsServer> tacacs_server;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TftpServer> > tftp_server;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TimeRange> > time_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TodClock> tod_clock;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Transceiver> transceiver;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Udld> udld;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Upgrade> upgrade;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Username> > username;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd> utd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdEngine> utd_engine;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService> > virtual_service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan> vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Voice> voice;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VoiceCard> > voice_card;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vpdn> vpdn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vstack> vstack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vtp> vtp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wireless> wireless;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wsma> wsma;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Zone> zone;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ZonePair> zone_pair;
        
}; // Native


class Native::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

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

        ydk::YLeaf new_model; //type: empty
        ydk::YLeaf session_id; //type: SessionId
        class Group; //type: Native::Aaa::Group
        class Authentication; //type: Native::Aaa::Authentication
        class Authorization; //type: Native::Aaa::Authorization
        class Accounting; //type: Native::Aaa::Accounting
        class Server; //type: Native::Aaa::Server
        class Login; //type: Native::Aaa::Login

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login> login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server> server;
                class SessionId;

}; // Native::Aaa


class Native::Aaa::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        class Commands; //type: Native::Aaa::Accounting::Commands
        class Connection; //type: Native::Aaa::Accounting::Connection
        class DelayStart; //type: Native::Aaa::Accounting::DelayStart
        class Identity; //type: Native::Aaa::Accounting::Identity
        class Exec; //type: Native::Aaa::Accounting::Exec
        class ExecSubmode; //type: Native::Aaa::Accounting::ExecSubmode
        class Network; //type: Native::Aaa::Accounting::Network
        class Send; //type: Native::Aaa::Accounting::Send
        class System; //type: Native::Aaa::Accounting::System
        class Update; //type: Native::Aaa::Accounting::Update
        class AuthProxy; //type: Native::Aaa::Accounting::AuthProxy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy> auth_proxy;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Commands> > commands;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection> > connection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::DelayStart> delay_start;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec> > exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode> exec_submode;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity> > identity;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send> send;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::System> system;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Update> update;
        
}; // Native::Aaa::Accounting


class Native::Aaa::Accounting::AuthProxy : public ydk::Entity
{
    public:
        AuthProxy();
        ~AuthProxy();

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

        class Default_; //type: Native::Aaa::Accounting::AuthProxy::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy::Default_> default_;
        
}; // Native::Aaa::Accounting::AuthProxy


class Native::Aaa::Accounting::AuthProxy::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        class StartStop; //type: Native::Aaa::Accounting::AuthProxy::Default_::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy::Default_::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::AuthProxy::Default_


class Native::Aaa::Accounting::AuthProxy::Default_::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

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

        ydk::YLeaf group; //type: string

}; // Native::Aaa::Accounting::AuthProxy::Default_::StartStop


class Native::Aaa::Accounting::Commands : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf list_name; //type: one of string, enumeration
        ydk::YLeaf action_type; //type: ActionType
        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class ListName;
        class ActionType;
        class Group;

}; // Native::Aaa::Accounting::Commands


class Native::Aaa::Accounting::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

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
        ydk::YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Connection::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::Connection::StopOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection::StartStop> start_stop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::Connection


class Native::Aaa::Accounting::Connection::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Connection::StartStop


class Native::Aaa::Accounting::Connection::StopOnly : public ydk::Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Connection::StopOnly


class Native::Aaa::Accounting::DelayStart : public ydk::Entity
{
    public:
        DelayStart();
        ~DelayStart();

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

        ydk::YLeaf extended_delay; //type: uint8
        ydk::YLeaf all; //type: empty

}; // Native::Aaa::Accounting::DelayStart


class Native::Aaa::Accounting::Exec : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Exec::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::Exec::StopOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec::StartStop> start_stop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::Exec


class Native::Aaa::Accounting::Exec::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Exec::StartStop


class Native::Aaa::Accounting::Exec::StopOnly : public ydk::Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Exec::StopOnly


class Native::Aaa::Accounting::ExecSubmode : public ydk::Entity
{
    public:
        ExecSubmode();
        ~ExecSubmode();

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

        class Exec; //type: Native::Aaa::Accounting::ExecSubmode::Exec

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec> > exec;
        
}; // Native::Aaa::Accounting::ExecSubmode


class Native::Aaa::Accounting::ExecSubmode::Exec : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class ActionType; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType> action_type;
        
}; // Native::Aaa::Accounting::ExecSubmode::Exec


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop> start_stop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly : public ydk::Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly


class Native::Aaa::Accounting::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

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
        class StartStop; //type: Native::Aaa::Accounting::Identity::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::Identity


class Native::Aaa::Accounting::Identity::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Identity::StartStop


class Native::Aaa::Accounting::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

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

        ydk::YLeaf id; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf broadcast; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Network::StartStop
        class A1; //type: Native::Aaa::Accounting::Network::A1
        class A2; //type: Native::Aaa::Accounting::Network::A2
        class A3; //type: Native::Aaa::Accounting::Network::A3
        class A4; //type: Native::Aaa::Accounting::Network::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A4> a4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::StartStop> start_stop;
                class Id;
        class Mode;

}; // Native::Aaa::Accounting::Network


class Native::Aaa::Accounting::Network::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::A1


class Native::Aaa::Accounting::Network::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::A2


class Native::Aaa::Accounting::Network::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::A3


class Native::Aaa::Accounting::Network::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::A4


class Native::Aaa::Accounting::Network::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::StartStop


class Native::Aaa::Accounting::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

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

        class Counters; //type: Native::Aaa::Accounting::Send::Counters
        class StopRecord; //type: Native::Aaa::Accounting::Send::StopRecord

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::Counters> counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord> stop_record;
        
}; // Native::Aaa::Accounting::Send


class Native::Aaa::Accounting::Send::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

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

        ydk::YLeaf ipv6; //type: empty

}; // Native::Aaa::Accounting::Send::Counters


class Native::Aaa::Accounting::Send::StopRecord : public ydk::Entity
{
    public:
        StopRecord();
        ~StopRecord();

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

        ydk::YLeaf always; //type: empty
        class Authentication; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication> authentication;
        
}; // Native::Aaa::Accounting::Send::StopRecord


class Native::Aaa::Accounting::Send::StopRecord::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        class Failure; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure
        class Success; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Success

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure> failure; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Success> success;
        
}; // Native::Aaa::Accounting::Send::StopRecord::Authentication


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

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

        ydk::YLeaf vrf; //type: string

}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Success : public ydk::Entity
{
    public:
        Success();
        ~Success();

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

        class RemoteServer; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer> remote_server; // presence node
        
}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Success


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer : public ydk::Entity
{
    public:
        RemoteServer();
        ~RemoteServer();

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

        ydk::YLeaf vrf; //type: string

}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer


class Native::Aaa::Accounting::System : public ydk::Entity
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

        ydk::YLeaf guarantee_first; //type: boolean
        class Default_; //type: Native::Aaa::Accounting::System::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::System::Default_> default_; // presence node
        
}; // Native::Aaa::Accounting::System


class Native::Aaa::Accounting::System::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        ydk::YLeaf none; //type: empty
        ydk::YLeaf vrf; //type: string
        class StartStop; //type: Native::Aaa::Accounting::System::Default_::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::System::Default_::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::System::Default_


class Native::Aaa::Accounting::System::Default_::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

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

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::System::Default_::StartStop


class Native::Aaa::Accounting::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

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

        ydk::YLeaf periodic; //type: uint32

}; // Native::Aaa::Accounting::Update


class Native::Aaa::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        class Attempts; //type: Native::Aaa::Authentication::Attempts
        class Dot1X; //type: Native::Aaa::Authentication::Dot1X
        class Enable; //type: Native::Aaa::Authentication::Enable
        class Eou; //type: Native::Aaa::Authentication::Eou
        class Login; //type: Native::Aaa::Authentication::Login
        class Onep; //type: Native::Aaa::Authentication::Onep
        class Ppp; //type: Native::Aaa::Authentication::Ppp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Attempts> attempts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou> eou;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login> > login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep> onep;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp> > ppp;
        
}; // Native::Aaa::Authentication


class Native::Aaa::Authentication::Attempts : public ydk::Entity
{
    public:
        Attempts();
        ~Attempts();

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

        ydk::YLeaf login; //type: uint8

}; // Native::Aaa::Authentication::Attempts


class Native::Aaa::Authentication::Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

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

        class Dot1XList; //type: Native::Aaa::Authentication::Dot1X::Dot1XList
        class Default_; //type: Native::Aaa::Authentication::Dot1X::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X::Default_> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X::Dot1XList> > dot1x_list;
        
}; // Native::Aaa::Authentication::Dot1X


class Native::Aaa::Authentication::Dot1X::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Authentication::Dot1X::Default_


class Native::Aaa::Authentication::Dot1X::Dot1XList : public ydk::Entity
{
    public:
        Dot1XList();
        ~Dot1XList();

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
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Authentication::Dot1X::Dot1XList


class Native::Aaa::Authentication::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

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

        class Default_; //type: Native::Aaa::Authentication::Enable::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable::Default_> default_;
        
}; // Native::Aaa::Authentication::Enable


class Native::Aaa::Authentication::Enable::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf none; //type: empty
        class Group;

}; // Native::Aaa::Authentication::Enable::Default_


class Native::Aaa::Authentication::Eou : public ydk::Entity
{
    public:
        Eou();
        ~Eou();

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

        class Default_; //type: Native::Aaa::Authentication::Eou::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default_> default_;
        
}; // Native::Aaa::Authentication::Eou


class Native::Aaa::Authentication::Eou::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        class Group; //type: Native::Aaa::Authentication::Eou::Default_::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default_::Group> group;
        
}; // Native::Aaa::Authentication::Eou::Default_


class Native::Aaa::Authentication::Eou::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf radius; //type: empty

}; // Native::Aaa::Authentication::Eou::Default_::Group


class Native::Aaa::Authentication::Login : public ydk::Entity
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

        ydk::YLeaf name; //type: one of string, enumeration
        class A1; //type: Native::Aaa::Authentication::Login::A1
        class A2; //type: Native::Aaa::Authentication::Login::A2
        class A3; //type: Native::Aaa::Authentication::Login::A3
        class A4; //type: Native::Aaa::Authentication::Login::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A4> a4;
                class Name;

}; // Native::Aaa::Authentication::Login


class Native::Aaa::Authentication::Login::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A1


class Native::Aaa::Authentication::Login::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A2


class Native::Aaa::Authentication::Login::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A3


class Native::Aaa::Authentication::Login::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A4


class Native::Aaa::Authentication::Onep : public ydk::Entity
{
    public:
        Onep();
        ~Onep();

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

        class Default_; //type: Native::Aaa::Authentication::Onep::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default_> default_;
        
}; // Native::Aaa::Authentication::Onep


class Native::Aaa::Authentication::Onep::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        class Local; //type: Native::Aaa::Authentication::Onep::Default_::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default_::Local> local; // presence node
        
}; // Native::Aaa::Authentication::Onep::Default_


class Native::Aaa::Authentication::Onep::Default_::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

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


}; // Native::Aaa::Authentication::Onep::Default_::Local


class Native::Aaa::Authentication::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

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

        ydk::YLeaf id; //type: string
        class A1; //type: Native::Aaa::Authentication::Ppp::A1
        class A2; //type: Native::Aaa::Authentication::Ppp::A2
        class A3; //type: Native::Aaa::Authentication::Ppp::A3
        class A4; //type: Native::Aaa::Authentication::Ppp::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A4> a4;
        
}; // Native::Aaa::Authentication::Ppp


class Native::Aaa::Authentication::Ppp::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_needed; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A1


class Native::Aaa::Authentication::Ppp::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A2


class Native::Aaa::Authentication::Ppp::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A3


class Native::Aaa::Authentication::Ppp::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A4


class Native::Aaa::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

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

        ydk::YLeaf console; //type: empty
        ydk::YLeaf config_commands; //type: empty
        class AuthType; //type: Native::Aaa::Authorization::AuthType
        class Commands; //type: Native::Aaa::Authorization::Commands
        class Configuration; //type: Native::Aaa::Authorization::Configuration
        class Exec; //type: Native::Aaa::Authorization::Exec
        class Eventmanager; //type: Native::Aaa::Authorization::Eventmanager
        class Network; //type: Native::Aaa::Authorization::Network
        class AuthProxy; //type: Native::Aaa::Authorization::AuthProxy
        class Onep; //type: Native::Aaa::Authorization::Onep

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy> auth_proxy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType> auth_type;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Commands> > commands;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration> configuration;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Eventmanager> > eventmanager;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec> > exec;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep> onep;
        
}; // Native::Aaa::Authorization


class Native::Aaa::Authorization::AuthProxy : public ydk::Entity
{
    public:
        AuthProxy();
        ~AuthProxy();

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

        class Default_; //type: Native::Aaa::Authorization::AuthProxy::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy::Default_> default_;
        
}; // Native::Aaa::Authorization::AuthProxy


class Native::Aaa::Authorization::AuthProxy::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        class Group; //type: Native::Aaa::Authorization::AuthProxy::Default_::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy::Default_::Group> group;
        
}; // Native::Aaa::Authorization::AuthProxy::Default_


class Native::Aaa::Authorization::AuthProxy::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf radius; //type: empty
        ydk::YLeaf group_name; //type: string

}; // Native::Aaa::Authorization::AuthProxy::Default_::Group


class Native::Aaa::Authorization::AuthType : public ydk::Entity
{
    public:
        AuthType();
        ~AuthType();

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

        class Default_; //type: Native::Aaa::Authorization::AuthType::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType::Default_> default_;
        
}; // Native::Aaa::Authorization::AuthType


class Native::Aaa::Authorization::AuthType::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        ydk::YLeaf group; //type: Group
        class Group;

}; // Native::Aaa::Authorization::AuthType::Default_


class Native::Aaa::Authorization::Commands : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf list_name; //type: one of string, enumeration
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf none; //type: empty
        class ListName;
        class Group;

}; // Native::Aaa::Authorization::Commands


class Native::Aaa::Authorization::Configuration : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Default_; //type: Native::Aaa::Authorization::Configuration::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default_> default_;
        
}; // Native::Aaa::Authorization::Configuration


class Native::Aaa::Authorization::Configuration::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        class Group; //type: Native::Aaa::Authorization::Configuration::Default_::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default_::Group> group;
        
}; // Native::Aaa::Authorization::Configuration::Default_


class Native::Aaa::Authorization::Configuration::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        class GroupName; //type: Native::Aaa::Authorization::Configuration::Default_::Group::GroupName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default_::Group::GroupName> > group_name;
        
}; // Native::Aaa::Authorization::Configuration::Default_::Group


class Native::Aaa::Authorization::Configuration::Default_::Group::GroupName : public ydk::Entity
{
    public:
        GroupName();
        ~GroupName();

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

        ydk::YLeaf group_name; //type: string

}; // Native::Aaa::Authorization::Configuration::Default_::Group::GroupName


class Native::Aaa::Authorization::Eventmanager : public ydk::Entity
{
    public:
        Eventmanager();
        ~Eventmanager();

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
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf local; //type: empty
        ydk::YLeaf none; //type: empty
        class Group;

}; // Native::Aaa::Authorization::Eventmanager


class Native::Aaa::Authorization::Exec : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class A1; //type: Native::Aaa::Authorization::Exec::A1
        class A2; //type: Native::Aaa::Authorization::Exec::A2
        class A3; //type: Native::Aaa::Authorization::Exec::A3
        class A4; //type: Native::Aaa::Authorization::Exec::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A4> a4;
        
}; // Native::Aaa::Authorization::Exec


class Native::Aaa::Authorization::Exec::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5_instance; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Exec::A1


class Native::Aaa::Authorization::Exec::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5_instance; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Exec::A2


class Native::Aaa::Authorization::Exec::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf krb5_instance; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Exec::A3


class Native::Aaa::Authorization::Exec::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf krb5_instance; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Exec::A4


class Native::Aaa::Authorization::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

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

        ydk::YLeaf id; //type: one of string, enumeration
        class A1; //type: Native::Aaa::Authorization::Network::A1
        class A2; //type: Native::Aaa::Authorization::Network::A2
        class A3; //type: Native::Aaa::Authorization::Network::A3
        class A4; //type: Native::Aaa::Authorization::Network::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A4> a4;
                class Id;

}; // Native::Aaa::Authorization::Network


class Native::Aaa::Authorization::Network::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Network::A1


class Native::Aaa::Authorization::Network::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Network::A2


class Native::Aaa::Authorization::Network::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Network::A3


class Native::Aaa::Authorization::Network::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Network::A4


class Native::Aaa::Authorization::Onep : public ydk::Entity
{
    public:
        Onep();
        ~Onep();

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

        class Default_; //type: Native::Aaa::Authorization::Onep::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default_> default_;
        
}; // Native::Aaa::Authorization::Onep


class Native::Aaa::Authorization::Onep::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        class Group; //type: Native::Aaa::Authorization::Onep::Default_::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default_::Group> group;
        
}; // Native::Aaa::Authorization::Onep::Default_


class Native::Aaa::Authorization::Onep::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        class GroupWord; //type: Native::Aaa::Authorization::Onep::Default_::Group::GroupWord

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default_::Group::GroupWord> > group_word;
        
}; // Native::Aaa::Authorization::Onep::Default_::Group


class Native::Aaa::Authorization::Onep::Default_::Group::GroupWord : public ydk::Entity
{
    public:
        GroupWord();
        ~GroupWord();

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

        ydk::YLeaf group_word; //type: string

}; // Native::Aaa::Authorization::Onep::Default_::Group::GroupWord


class Native::Aaa::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        class Server; //type: Native::Aaa::Group::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server> server;
        
}; // Native::Aaa::Group


class Native::Aaa::Group::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        class Tacacsplus; //type: Native::Aaa::Group::Server::Tacacsplus
        class Tacacs; //type: Native::Aaa::Group::Server::Tacacs
        class Radius; //type: Native::Aaa::Group::Server::Radius

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius> > radius;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacs> > tacacs;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus> > tacacsplus;
        
}; // Native::Aaa::Group::Server


class Native::Aaa::Group::Server::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

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
        ydk::YLeaf deadtime; //type: uint16
        class Server_; //type: Native::Aaa::Group::Server::Radius::Server_
        class Ip; //type: Native::Aaa::Group::Server::Radius::Ip
        class LoadBalance; //type: Native::Aaa::Group::Server::Radius::LoadBalance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance> load_balance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_> server;
        
}; // Native::Aaa::Group::Server::Radius


class Native::Aaa::Group::Server::Radius::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Radius_; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_
        class Vrf; //type: Native::Aaa::Group::Server::Radius::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_> radius;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Radius::Ip


class Native::Aaa::Group::Server::Radius::Ip::Radius_ : public ydk::Entity
{
    public:
        Radius_();
        ~Radius_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_interface; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Radius_


class Native::Aaa::Group::Server::Radius::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Vrf


class Native::Aaa::Group::Server::Radius::LoadBalance : public ydk::Entity
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

        class Method; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method> method;
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance


class Native::Aaa::Group::Server::Radius::LoadBalance::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LeastOutstanding; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding> least_outstanding;
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method


class Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding : public ydk::Entity
{
    public:
        LeastOutstanding();
        ~LeastOutstanding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf batch_size; //type: uint32
        ydk::YLeaf ignore_preferred_server; //type: empty

}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding


class Native::Aaa::Group::Server::Radius::Server_ : public ydk::Entity
{
    public:
        Server_();
        ~Server_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Aaa::Group::Server::Radius::Server_::Name
        class Direct; //type: Native::Aaa::Group::Server::Radius::Server_::Direct

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_::Direct> > direct;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_::Name> > name;
        
}; // Native::Aaa::Group::Server::Radius::Server_


class Native::Aaa::Group::Server::Radius::Server_::Direct : public ydk::Entity
{
    public:
        Direct();
        ~Direct();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of union, string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16

}; // Native::Aaa::Group::Server::Radius::Server_::Direct


class Native::Aaa::Group::Server::Radius::Server_::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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

}; // Native::Aaa::Group::Server::Radius::Server_::Name


class Native::Aaa::Group::Server::Tacacs : public ydk::Entity
{
    public:
        Tacacs();
        ~Tacacs();

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

}; // Native::Aaa::Group::Server::Tacacs


class Native::Aaa::Group::Server::Tacacsplus : public ydk::Entity
{
    public:
        Tacacsplus();
        ~Tacacsplus();

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
        class Server_; //type: Native::Aaa::Group::Server::Tacacsplus::Server_
        class ServerPrivate; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate
        class Ip; //type: Native::Aaa::Group::Server::Tacacsplus::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Server_> server;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::ServerPrivate> > server_private;
        
}; // Native::Aaa::Group::Server::Tacacsplus


class Native::Aaa::Group::Server::Tacacsplus::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tacacs; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs
        class Vrf; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs> tacacs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs : public ydk::Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceInterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface> source_interface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate : public ydk::Entity
{
    public:
        ServerPrivate();
        ~ServerPrivate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of union, string
        ydk::YLeaf timeout; //type: uint16
        class Key; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key> key;
        
}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key


class Native::Aaa::Group::Server::Tacacsplus::Server_ : public ydk::Entity
{
    public:
        Server_();
        ~Server_();

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

}; // Native::Aaa::Group::Server::Tacacsplus::Server_


class Native::Aaa::Login : public ydk::Entity
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

        ydk::YLeaf display; //type: Display
        ydk::YLeaf max_sessions; //type: uint16
        ydk::YLeaf password; //type: Password
        ydk::YLeaf success_track_conf_time; //type: uint8
        ydk::YLeaf traceback; //type: Traceback
        class Memory; //type: Native::Aaa::Login::Memory
        class Policy; //type: Native::Aaa::Login::Policy
        class Route; //type: Native::Aaa::Login::Route
        class Server; //type: Native::Aaa::Login::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login::Memory> memory;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login::Server> server;
                class Display;
        class Password;
        class Traceback;

}; // Native::Aaa::Login


class Native::Aaa::Login::Memory : public ydk::Entity
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

        class Threshold; //type: Native::Aaa::Login::Memory::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login::Memory::Threshold> threshold;
        
}; // Native::Aaa::Login::Memory


class Native::Aaa::Login::Memory::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        class Accounting; //type: Native::Aaa::Login::Memory::Threshold::Accounting
        class Authentication; //type: Native::Aaa::Login::Memory::Threshold::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login::Memory::Threshold::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login::Memory::Threshold::Authentication> authentication;
        
}; // Native::Aaa::Login::Memory::Threshold


class Native::Aaa::Login::Memory::Threshold::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        ydk::YLeaf disable; //type: uint8

}; // Native::Aaa::Login::Memory::Threshold::Accounting


class Native::Aaa::Login::Memory::Threshold::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        ydk::YLeaf reject; //type: uint8

}; // Native::Aaa::Login::Memory::Threshold::Authentication


class Native::Aaa::Login::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        ydk::YLeaf interface_config; //type: InterfaceConfig
        class InterfaceConfig;

}; // Native::Aaa::Login::Policy


class Native::Aaa::Login::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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

        class Download; //type: Native::Aaa::Login::Route::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login::Route::Download> download;
        
}; // Native::Aaa::Login::Route


class Native::Aaa::Login::Route::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

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

        ydk::YLeaf update_period; //type: uint16
        ydk::YLeaf authorization; //type: string

}; // Native::Aaa::Login::Route::Download


class Native::Aaa::Login::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf radius; //type: Radius
        class Radius;

}; // Native::Aaa::Login::Server


class Native::Aaa::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        class Radius; //type: Native::Aaa::Server::Radius

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius> radius;
        
}; // Native::Aaa::Server


class Native::Aaa::Server::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

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

        class DynamicAuthor; //type: Native::Aaa::Server::Radius::DynamicAuthor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor> dynamic_author; // presence node
        
}; // Native::Aaa::Server::Radius


class Native::Aaa::Server::Radius::DynamicAuthor : public ydk::Entity
{
    public:
        DynamicAuthor();
        ~DynamicAuthor();

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

        ydk::YLeaf auth_type; //type: AuthType
        class Client; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client
        class ServerKey; //type: Native::Aaa::Server::Radius::DynamicAuthor::ServerKey
        class Domain; //type: Native::Aaa::Server::Radius::DynamicAuthor::Domain

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client> > client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::ServerKey> server_key;
                class AuthType;

}; // Native::Aaa::Server::Radius::DynamicAuthor


class Native::Aaa::Server::Radius::DynamicAuthor::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf ip; //type: string
        class Vrf; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf
        class ServerKey; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey> server_key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf> > vrf;
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Client


class Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey : public ydk::Entity
{
    public:
        ServerKey();
        ~ServerKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: Key
        ydk::YLeaf string; //type: string
        class Key;

}; // Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey


class Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf


class Native::Aaa::Server::Radius::DynamicAuthor::Domain : public ydk::Entity
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

        ydk::YLeaf delimiter; //type: string
        class Stripping; //type: Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping> stripping; // presence node
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain


class Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping : public ydk::Entity
{
    public:
        Stripping();
        ~Stripping();

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

        ydk::YLeaf right_to_left; //type: empty

}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping


class Native::Aaa::Server::Radius::DynamicAuthor::ServerKey : public ydk::Entity
{
    public:
        ServerKey();
        ~ServerKey();

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

        ydk::YLeaf key; //type: Key
        ydk::YLeaf string; //type: string
        class Key;

}; // Native::Aaa::Server::Radius::DynamicAuthor::ServerKey


class Native::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

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


}; // Native::AccessList


class Native::AccessSession : public ydk::Entity
{
    public:
        AccessSession();
        ~AccessSession();

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

        class Attributes; //type: Native::AccessSession::Attributes
        class MacMove; //type: Native::AccessSession::MacMove

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::Attributes> attributes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::MacMove> mac_move;
        
}; // Native::AccessSession


class Native::AccessSession::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

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

        class FilterList; //type: Native::AccessSession::Attributes::FilterList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::Attributes::FilterList> filter_list;
        
}; // Native::AccessSession::Attributes


class Native::AccessSession::Attributes::FilterList : public ydk::Entity
{
    public:
        FilterList();
        ~FilterList();

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

        class List; //type: Native::AccessSession::Attributes::FilterList::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::Attributes::FilterList::List> > list;
        
}; // Native::AccessSession::Attributes::FilterList


class Native::AccessSession::Attributes::FilterList::List : public ydk::Entity
{
    public:
        List();
        ~List();

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
        ydk::YLeaf cdp; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf lldp; //type: empty

}; // Native::AccessSession::Attributes::FilterList::List


class Native::AccessSession::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

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

        ydk::YLeaf deny; //type: empty

}; // Native::AccessSession::MacMove


class Native::AlarmContact : public ydk::Entity
{
    public:
        AlarmContact();
        ~AlarmContact();

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

        ydk::YLeaf name; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf severity; //type: Severity
        ydk::YLeaf trigger; //type: Trigger
        class Severity;
        class Trigger;

}; // Native::AlarmContact


class Native::Alias : public ydk::Entity
{
    public:
        Alias();
        ~Alias();

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

        class Exec; //type: Native::Alias::Exec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Alias::Exec> exec;
        
}; // Native::Alias


class Native::Alias::Exec : public ydk::Entity
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

        ydk::YLeaf alias_name; //type: string
        ydk::YLeaf new_alias_name; //type: string

}; // Native::Alias::Exec


class Native::Ap : public ydk::Entity
{
    public:
        Ap();
        ~Ap();

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

        class Group; //type: Native::Ap::Group
        class Dot11; //type: Native::Ap::Dot11

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11> dot11;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group> > group;
        
}; // Native::Ap


class Native::Ap::Dot11 : public ydk::Entity
{
    public:
        Dot11();
        ~Dot11();

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

        class Y_24ghz; //type: Native::Ap::Dot11::Y_24ghz
        class Y_49ghz; //type: Native::Ap::Dot11::Y_49ghz
        class Y_5ghz; //type: Native::Ap::Dot11::Y_5ghz
        class AirtimeFairness; //type: Native::Ap::Dot11::AirtimeFairness

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::AirtimeFairness> airtime_fairness;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz> y_24ghz;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_49ghz> y_49ghz;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz> y_5ghz;
        
}; // Native::Ap::Dot11


class Native::Ap::Dot11::AirtimeFairness : public ydk::Entity
{
    public:
        AirtimeFairness();
        ~AirtimeFairness();

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

        class PolicyName; //type: Native::Ap::Dot11::AirtimeFairness::PolicyName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::AirtimeFairness::PolicyName> > policy_name;
        
}; // Native::Ap::Dot11::AirtimeFairness


class Native::Ap::Dot11::AirtimeFairness::PolicyName : public ydk::Entity
{
    public:
        PolicyName();
        ~PolicyName();

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

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_id; //type: uint16

}; // Native::Ap::Dot11::AirtimeFairness::PolicyName


class Native::Ap::Dot11::Y_24ghz : public ydk::Entity
{
    public:
        Y_24ghz();
        ~Y_24ghz();

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

        class Rate; //type: Native::Ap::Dot11::Y_24ghz::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate> rate;
        
}; // Native::Ap::Dot11::Y_24ghz


class Native::Ap::Dot11::Y_24ghz::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

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

        class RATE11M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE11M
        class RATE12M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE12M
        class RATE18M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE18M
        class RATE1M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE1M
        class RATE24M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE24M
        class RATE2M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE2M
        class RATE36M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE36M
        class RATE48M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE48M
        class RATE54M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE54M
        class RATE55M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE55M
        class RATE6M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE6M
        class RATE9M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE9M

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE11M> rate_11m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE12M> rate_12m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE18M> rate_18m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE1M> rate_1m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE24M> rate_24m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE2M> rate_2m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE36M> rate_36m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE48M> rate_48m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE54M> rate_54m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE55M> rate_5_5m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE6M> rate_6m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE9M> rate_9m;
        
}; // Native::Ap::Dot11::Y_24ghz::Rate


class Native::Ap::Dot11::Y_24ghz::Rate::RATE11M : public ydk::Entity
{
    public:
        RATE11M();
        ~RATE11M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE11M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE12M : public ydk::Entity
{
    public:
        RATE12M();
        ~RATE12M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE12M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE18M : public ydk::Entity
{
    public:
        RATE18M();
        ~RATE18M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE18M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE1M : public ydk::Entity
{
    public:
        RATE1M();
        ~RATE1M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE1M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE24M : public ydk::Entity
{
    public:
        RATE24M();
        ~RATE24M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE24M

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

class Native::Aaa::SessionId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf common;
        static const ydk::Enum::YLeaf unique;

};

class Native::Aaa::Accounting::Commands::ListName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Accounting::Commands::ActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf start_stop;
        static const ydk::Enum::YLeaf stop_only;

};

class Native::Aaa::Accounting::Commands::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Connection::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Connection::StopOnly::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Exec::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Exec::StopOnly::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Identity::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Network::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Accounting::Network::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start_stop;
        static const ydk::Enum::YLeaf stop_only;

};

class Native::Aaa::Accounting::Network::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;

};

class Native::Aaa::Accounting::System::Default_::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Dot1X::Default_::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Dot1X::Dot1XList::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Enable::Default_::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Authentication::Login::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::AuthType::Default_::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;

};

class Native::Aaa::Authorization::Commands::ListName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Authorization::Commands::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Eventmanager::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Authorization::Exec::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Authorization::Network::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Login::Display : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf last_failure;
        static const ydk::Enum::YLeaf last_success;
        static const ydk::Enum::YLeaf number_failures;

};

class Native::Aaa::Login::Password : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf restriction;

};

class Native::Aaa::Login::Traceback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf recording;

};

class Native::Aaa::Login::Policy::InterfaceConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf allow_subinterface;

};

class Native::Aaa::Login::Server::Radius : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic_author;
        static const ydk::Enum::YLeaf policy_device;
        static const ydk::Enum::YLeaf proxy;
        static const ydk::Enum::YLeaf sesm;

};

class Native::Aaa::Server::Radius::DynamicAuthor::AuthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf session_key;

};

class Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::AlarmContact::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;

};

class Native::AlarmContact::Trigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf closed;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_0_ */

