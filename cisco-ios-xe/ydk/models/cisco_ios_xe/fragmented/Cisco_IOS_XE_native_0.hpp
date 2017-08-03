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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class CiscoIosXeNative_Template; //type: Native::CiscoIosXeNative_Template
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
        class CiscoIosXeSwitch_Template; //type: Native::CiscoIosXeSwitch_Template
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

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa> aaa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList> access_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessSession> access_session;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AlarmContact> > alarm_contact;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Alias> alias;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap> ap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Archive> archive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BbaGroup> bba_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BfdTemplate> bfd_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot> boot;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain> bridge_domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome> call_home; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Card> card;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cdp> cdp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cef> cef;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template> cisco_ios_xe_native_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template> cisco_ios_xe_switch_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cisp> cisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Clock_> clock_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Coap> coap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ControlPlane> control_plane; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ControlPlaneHost> control_plane_host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller> controller;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto> crypto;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Device> device;
        std::shared_ptr<Cisco_IOS_XE_native::Native::DeviceSensor> device_sensor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::DeviceTracking> device_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic> diagnostic;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Domain> > domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Eap> eap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Energywise> energywise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Epm> epm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable> errdisable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Esmc> esmc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Exception> exception;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Fabric> fabric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::FacilityAlarm> facility_alarm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Fallback> fallback;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Fhrp> fhrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::HwModule> hw_module;
        std::shared_ptr<Cisco_IOS_XE_native::Native::HwSwitch> hw_switch;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Identity> identity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Iox> iox; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Key> key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2> l2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2ProtocolTunnel> l2protocol_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn> l2vpn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig> l2vpn_config;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn> l3vpn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::License> license;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line> line;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Lldp> lldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Location> location;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Login> login;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable> mac_address_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Macro> macro;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::MaintenanceTemplate> > maintenance_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory> memory;
        std::shared_ptr<Cisco_IOS_XE_native::Native::MemorySize> memory_size;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Metadata> metadata;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mka> mka;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mls> mls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Module> module;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Multilink> multilink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NamedOrderingRouteMap> named_ordering_route_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Nat66> nat66;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock> network_clock;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkPolicy> network_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp> ntp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup> object_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv> otv;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap> > parameter_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Parser> parser;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance> performance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr> pfr;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap> > pfr_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform> platform;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent> pm_agent; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PortChannel> port_channel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Power> power;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ppp> ppp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Privilege> privilege;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Process> process;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Profile> profile;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass> > pseudowire_class;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos> qos; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius> radius;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer> radius_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy> redundancy; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RemoteManagement> remote_management;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Rep> rep;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Rmon> rmon;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap> > route_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag> route_tag;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router> router;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Sampler> > sampler;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Scheduler> scheduler;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Sdm> sdm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting> segment_routing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain> service_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceInsertion> service_insertion;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList> service_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceRouting> service_routing;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceTemplate> > service_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Setup> setup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer> snmp_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Software> software;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree> spanning_tree;
        std::shared_ptr<Cisco_IOS_XE_native::Native::StackMac> stack_mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Subscriber> subscriber;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Switch_> > switch_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual> > switch_virtual;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System> system;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::TableMap> > table_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Tacacs> tacacs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::TacacsServer> tacacs_server;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::TftpServer> > tftp_server;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::TimeRange> > time_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::TodClock> tod_clock;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track> track;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Transceiver> transceiver;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Udld> udld;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Upgrade> upgrade;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Username> > username;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Utd> utd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine> utd_engine;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService> > virtual_service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan> vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Voice> voice;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::VoiceCard> > voice_card;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vpdn> vpdn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vstack> vstack;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp> vtp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wireless> wireless;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma> wsma;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Zone> zone;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ZonePair> zone_pair;
        
}; // Native


class Native::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Crypto; //type: Native::Default_::Crypto

        std::shared_ptr<Cisco_IOS_XE_native::Native::Default_::Crypto> crypto;
        
}; // Native::Default_


class Native::Default_::Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ikev2; //type: Native::Default_::Crypto::Ikev2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Default_::Crypto::Ikev2> ikev2;
        
}; // Native::Default_::Crypto


class Native::Default_::Crypto::Ikev2 : public ydk::Entity
{
    public:
        Ikev2();
        ~Ikev2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proposal; //type: empty
        ydk::YLeaf policy; //type: empty

}; // Native::Default_::Crypto::Ikev2


class Native::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2cos; //type: uint8
        ydk::YLeaf slow_timers; //type: uint16
        class Map; //type: Native::Bfd::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map> map;
        
}; // Native::Bfd


class Native::Bfd::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Bfd::Map::Ipv4
        class Ipv6; //type: Native::Bfd::Map::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6> ipv6;
        
}; // Native::Bfd::Map


class Native::Bfd::Map::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NoVrf; //type: Native::Bfd::Map::Ipv4::NoVrf
        class Vrf; //type: Native::Bfd::Map::Ipv4::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4::NoVrf> no_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv4


class Native::Bfd::Map::Ipv4::NoVrf : public ydk::Entity
{
    public:
        NoVrf();
        ~NoVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DstVrf; //type: Native::Bfd::Map::Ipv4::Vrf::DstVrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4::Vrf::DstVrf> > dst_vrf;
        
}; // Native::Bfd::Map::Ipv4::Vrf


class Native::Bfd::Map::Ipv4::Vrf::DstVrf : public ydk::Entity
{
    public:
        DstVrf();
        ~DstVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DpIpv6_Prefix; //type: Native::Bfd::Map::Ipv6::DpIpv6_Prefix
        class Vrf; //type: Native::Bfd::Map::Ipv6::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6_Prefix> > dp_ipv6_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv6


class Native::Bfd::Map::Ipv6::DpIpv6_Prefix : public ydk::Entity
{
    public:
        DpIpv6_Prefix();
        ~DpIpv6_Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dp_ipv6_prefix; //type: string
        ydk::YLeaf bfd_nm; //type: string
        class SrcIpv6_Prefix0; //type: Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0
        class Vrf; //type: Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0> > src_ipv6_prefix0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv6::DpIpv6_Prefix


class Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0 : public ydk::Entity
{
    public:
        SrcIpv6_Prefix0();
        ~SrcIpv6_Prefix0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_ipv6_prefix0; //type: string
        ydk::YLeaf bfd_name; //type: string

}; // Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0


class Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrcVrf; //type: Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf> > src_vrf;
        
}; // Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf


class Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf : public ydk::Entity
{
    public:
        SrcVrf();
        ~SrcVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_vrf; //type: string
        ydk::YLeaf src_ipv6_prefix; //type: string

}; // Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf


class Native::Bfd::Map::Ipv6::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DstVrf; //type: Native::Bfd::Map::Ipv6::Vrf::DstVrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::Vrf::DstVrf> > dst_vrf;
        
}; // Native::Bfd::Map::Ipv6::Vrf


class Native::Bfd::Map::Ipv6::Vrf::DstVrf : public ydk::Entity
{
    public:
        DstVrf();
        ~DstVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_vrf; //type: string
        ydk::YLeaf dst_ipv6_prefix; //type: string

}; // Native::Bfd::Map::Ipv6::Vrf::DstVrf


class Native::Boot : public ydk::Entity
{
    public:
        Boot();
        ~Boot();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class System; //type: Native::Boot::System
        class EnableBreak; //type: Native::Boot::EnableBreak
        class Manual; //type: Native::Boot::Manual

        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::EnableBreak> enable_break; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::Manual> manual; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System> system;
        
}; // Native::Boot


class Native::Boot::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tftp_path; //type: string
        ydk::YLeaf tftp; //type: string
        class Bootfile; //type: Native::Boot::System::Bootfile
        class Flash; //type: Native::Boot::System::Flash
        class Switch_; //type: Native::Boot::System::Switch_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Bootfile> bootfile;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Flash> flash;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Switch_> switch_;
        
}; // Native::Boot::System


class Native::Boot::System::Bootfile : public ydk::Entity
{
    public:
        Bootfile();
        ~Bootfile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FilenameList; //type: Native::Boot::System::Bootfile::FilenameList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Bootfile::FilenameList> > filename_list;
        
}; // Native::Boot::System::Bootfile


class Native::Boot::System::Bootfile::FilenameList : public ydk::Entity
{
    public:
        FilenameList();
        ~FilenameList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filename; //type: string

}; // Native::Boot::System::Bootfile::FilenameList


class Native::Boot::System::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlashList; //type: Native::Boot::System::Flash::FlashList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Flash::FlashList> > flash_list;
        
}; // Native::Boot::System::Flash


class Native::Boot::System::Flash::FlashList : public ydk::Entity
{
    public:
        FlashList();
        ~FlashList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flash_leaf; //type: string

}; // Native::Boot::System::Flash::FlashList


class Native::Boot::System::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SwitchNumber; //type: Native::Boot::System::Switch_::SwitchNumber
        class All; //type: Native::Boot::System::Switch_::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Switch_::All> all;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Switch_::SwitchNumber> > switch_number;
        
}; // Native::Boot::System::Switch_


class Native::Boot::System::Switch_::SwitchNumber : public ydk::Entity
{
    public:
        SwitchNumber();
        ~SwitchNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf flash_1_path; //type: string
        ydk::YLeaf flash_path; //type: string
        ydk::YLeaf tftp_path; //type: string

}; // Native::Boot::System::Switch_::SwitchNumber


class Native::Boot::System::Switch_::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flash_1; //type: string
        ydk::YLeaf flash; //type: string
        ydk::YLeaf tftp; //type: string

}; // Native::Boot::System::Switch_::All


class Native::Boot::EnableBreak : public ydk::Entity
{
    public:
        EnableBreak();
        ~EnableBreak();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_; //type: uint8

}; // Native::Boot::EnableBreak


class Native::Boot::Manual : public ydk::Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_; //type: uint8

}; // Native::Boot::Manual


class Native::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lite; //type: empty
        class Statistics; //type: Native::Memory::Statistics
        class Chunk; //type: Native::Memory::Chunk
        class Free; //type: Native::Memory::Free
        class Reserve; //type: Native::Memory::Reserve
        class Sanity; //type: Native::Memory::Sanity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Chunk> chunk;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Free> free;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Reserve> reserve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Sanity> sanity; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Statistics> statistics;
        
}; // Native::Memory


class Native::Memory::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class History; //type: Native::Memory::Statistics::History

        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Statistics::History> history;
        
}; // Native::Memory::Statistics


class Native::Memory::Statistics::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table; //type: uint8

}; // Native::Memory::Statistics::History


class Native::Memory::Chunk : public ydk::Entity
{
    public:
        Chunk();
        ~Chunk();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Siblings; //type: Native::Memory::Chunk::Siblings

        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Chunk::Siblings> siblings;
        
}; // Native::Memory::Chunk


class Native::Memory::Chunk::Siblings : public ydk::Entity
{
    public:
        Siblings();
        ~Siblings();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint32

}; // Native::Memory::Chunk::Siblings


class Native::Memory::Free : public ydk::Entity
{
    public:
        Free();
        ~Free();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LowWatermark; //type: Native::Memory::Free::LowWatermark

        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Free::LowWatermark> low_watermark;
        
}; // Native::Memory::Free


class Native::Memory::Free::LowWatermark : public ydk::Entity
{
    public:
        LowWatermark();
        ~LowWatermark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Critical; //type: Native::Memory::Reserve::Critical

        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Reserve::Critical> critical; // presence node
        
}; // Native::Memory::Reserve


class Native::Memory::Reserve::Critical : public ydk::Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf memory_range; //type: uint32

}; // Native::Memory::Reserve::Critical


class Native::Memory::Sanity : public ydk::Entity
{
    public:
        Sanity();
        ~Sanity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CivicLocation; //type: Native::Location::CivicLocation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Location::CivicLocation> civic_location;
        
}; // Native::Location


class Native::Location::CivicLocation : public ydk::Entity
{
    public:
        CivicLocation();
        ~CivicLocation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Identifier; //type: Native::Location::CivicLocation::Identifier

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Location::CivicLocation::Identifier> > identifier;
        
}; // Native::Location::CivicLocation


class Native::Location::CivicLocation::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf contact_email_addr; //type: string
        class SourceInterface; //type: Native::CallHome::SourceInterface
        class HttpProxy; //type: Native::CallHome::HttpProxy
        class Profile; //type: Native::CallHome::Profile

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::HttpProxy> http_proxy;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile> > profile;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface> source_interface;
        
}; // Native::CallHome


class Native::CallHome::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class AtmSubinterface; //type: Native::CallHome::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::CallHome::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::CallHome::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::CallHome::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::CallHome::SourceInterface


class Native::CallHome::SourceInterface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::CallHome::SourceInterface::AtmSubinterface


class Native::CallHome::SourceInterface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::CallHome::SourceInterface::AtmAcrsubinterface


class Native::CallHome::SourceInterface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::CallHome::SourceInterface::LispSubinterface


class Native::CallHome::SourceInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::CallHome::SourceInterface::PortChannelSubinterface


class Native::CallHome::HttpProxy : public ydk::Entity
{
    public:
        HttpProxy();
        ~HttpProxy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProxyServers; //type: Native::CallHome::HttpProxy::ProxyServers

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::HttpProxy::ProxyServers> > proxy_servers;
        
}; // Native::CallHome::HttpProxy


class Native::CallHome::HttpProxy::ProxyServers : public ydk::Entity
{
    public:
        ProxyServers();
        ~ProxyServers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf active; //type: boolean
        class Destination; //type: Native::CallHome::Profile::Destination
        class SubscribeToAlertGroup; //type: Native::CallHome::Profile::SubscribeToAlertGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup> subscribe_to_alert_group;
        
}; // Native::CallHome::Profile


class Native::CallHome::Profile::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_method; //type: TransportMethod
        class Address; //type: Native::CallHome::Profile::Destination::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::Destination::Address> address;
                class TransportMethod;

}; // Native::CallHome::Profile::Destination


class Native::CallHome::Profile::Destination::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration> configuration; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic> diagnostic; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Environment> environment; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory> inventory; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Syslog> syslog; // presence node
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup


class Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic : public ydk::Entity
{
    public:
        Diagnostic();
        ~Diagnostic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Periodic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic> periodic;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily
        class Monthly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly
        class Weekly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily> daily;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly> monthly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly> weekly;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Severity; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity> > severity;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Syslog


class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity : public ydk::Entity
{
    public:
        Severity();
        ~Severity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Periodic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic> periodic;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily
        class Monthly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly
        class Weekly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily> daily;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly> monthly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly> weekly;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sm; //type: uint8
        ydk::YLeaf pvdm; //type: string
        class Uplink; //type: Native::HwModule::Uplink

        std::shared_ptr<Cisco_IOS_XE_native::Native::HwModule::Uplink> uplink;
        
}; // Native::HwModule


class Native::HwModule::Uplink : public ydk::Entity
{
    public:
        Uplink();
        ~Uplink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Cisp


class Native::Module : public ydk::Entity
{
    public:
        Module();
        ~Module();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Provision; //type: Native::Module::Provision

        std::shared_ptr<Cisco_IOS_XE_native::Native::Module::Provision> provision;
        
}; // Native::Module


class Native::Module::Provision : public ydk::Entity
{
    public:
        Provision();
        ~Provision();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Switch_; //type: Native::Module::Provision::Switch_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Module::Provision::Switch_> > switch_;
        
}; // Native::Module::Provision


class Native::Module::Provision::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        class Chassis; //type: Native::Module::Provision::Switch_::Chassis
        class Slot; //type: Native::Module::Provision::Switch_::Slot

        std::shared_ptr<Cisco_IOS_XE_native::Native::Module::Provision::Switch_::Chassis> chassis;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Module::Provision::Switch_::Slot> > slot;
        
}; // Native::Module::Provision::Switch_


class Native::Module::Provision::Switch_::Chassis : public ydk::Entity
{
    public:
        Chassis();
        ~Chassis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_type; //type: uint32
        ydk::YLeaf base_mac; //type: string

}; // Native::Module::Provision::Switch_::Chassis


class Native::Module::Provision::Switch_::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf slot_type; //type: uint32
        ydk::YLeaf base_mac; //type: string

}; // Native::Module::Provision::Switch_::Slot


class Native::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Vrf; //type: Native::Domain::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf> > vrf;
        
}; // Native::Domain


class Native::Domain::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Border; //type: Native::Domain::Vrf::Border
        class Master; //type: Native::Domain::Vrf::Master

        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Border> border;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master> master;
        
}; // Native::Domain::Vrf


class Native::Domain::Vrf::Border : public ydk::Entity
{
    public:
        Border();
        ~Border();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf master; //type: one of string, enumeration
        class SourceInterface; //type: Native::Domain::Vrf::Border::SourceInterface
        class Password; //type: Native::Domain::Vrf::Border::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Border::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Border::SourceInterface> source_interface;
                class Master;

}; // Native::Domain::Vrf::Border


class Native::Domain::Vrf::Border::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf branch; //type: empty
        ydk::YLeaf hub; //type: empty
        ydk::YLeaf transit; //type: empty
        ydk::YLeaf hub_ip; //type: string
        class Advanced; //type: Native::Domain::Vrf::Master::Advanced
        class Collector; //type: Native::Domain::Vrf::Master::Collector
        class EnterprisePrefix; //type: Native::Domain::Vrf::Master::EnterprisePrefix
        class LoadBalance; //type: Native::Domain::Vrf::Master::LoadBalance
        class Password; //type: Native::Domain::Vrf::Master::Password
        class SitePrefixes; //type: Native::Domain::Vrf::Master::SitePrefixes
        class SourceInterface; //type: Native::Domain::Vrf::Master::SourceInterface
        class Class_; //type: Native::Domain::Vrf::Master::Class_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced> advanced;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class_> > class_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Collector> collector;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::EnterprisePrefix> enterprise_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::LoadBalance> load_balance; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::SitePrefixes> site_prefixes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::SourceInterface> source_interface;
        
}; // Native::Domain::Vrf::Master


class Native::Domain::Vrf::Master::Advanced : public ydk::Entity
{
    public:
        Advanced();
        ~Advanced();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::SmartProbes> smart_probes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::Syslog> syslog;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer> traffic_class_ageout_timer;
                class MitigationMode;

}; // Native::Domain::Vrf::Master::Advanced


class Native::Domain::Vrf::Master::Advanced::SmartProbes : public ydk::Entity
{
    public:
        SmartProbes();
        ~SmartProbes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advanced; //type: empty

}; // Native::Domain::Vrf::Master::LoadBalance


class Native::Domain::Vrf::Master::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::Domain::Vrf::Master::SourceInterface


class Native::Domain::Vrf::Master::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf sequence; //type: uint16
        class Match; //type: Native::Domain::Vrf::Master::Class_::Match
        class PathPreference; //type: Native::Domain::Vrf::Master::Class_::PathPreference

        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class_::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class_::PathPreference> path_preference;
        
}; // Native::Domain::Vrf::Master::Class_


class Native::Domain::Vrf::Master::Class_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dscp; //type: Native::Domain::Vrf::Master::Class_::Match::Dscp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class_::Match::Dscp> > dscp;
        
}; // Native::Domain::Vrf::Master::Class_::Match


class Native::Domain::Vrf::Master::Class_::Match::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of enumeration, uint8
        ydk::YLeaf policy; //type: Policy
        class Policy;

}; // Native::Domain::Vrf::Master::Class_::Match::Dscp


class Native::Domain::Vrf::Master::Class_::PathPreference : public ydk::Entity
{
    public:
        PathPreference();
        ~PathPreference();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList primary; //type: list of  string
        ydk::YLeafList fallback; //type: list of  string

}; // Native::Domain::Vrf::Master::Class_::PathPreference


class Native::Parser : public ydk::Entity
{
    public:
        Parser();
        ~Parser();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Native::Parser::Config

        std::shared_ptr<Cisco_IOS_XE_native::Native::Parser::Config> config;
        
}; // Native::Parser


class Native::Parser::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache; //type: Cache
        ydk::YLeaf partition; //type: empty
        class Cache;

}; // Native::Parser::Config


class Native::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Alignment> alignment;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Counters> counters;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Heartbeat> heartbeat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Pad> pad; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::PadConf> pad_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Prompt> prompt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps> timestamps; // presence node
        
}; // Native::Service


class Native::Service::PadConf : public ydk::Entity
{
    public:
        PadConf();
        ~PadConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pad; //type: boolean

}; // Native::Service::PadConf


class Native::Service::Pad : public ydk::Entity
{
    public:
        Pad();
        ~Pad();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Debug; //type: Native::Service::Timestamps::Debug
        class Log; //type: Native::Service::Timestamps::Log

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug> debug;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log> log;
        
}; // Native::Service::Timestamps


class Native::Service::Timestamps::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uptime; //type: empty
        class Datetime; //type: Native::Service::Timestamps::Debug::Datetime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime> datetime; // presence node
        
}; // Native::Service::Timestamps::Debug


class Native::Service::Timestamps::Debug::Datetime : public ydk::Entity
{
    public:
        Datetime();
        ~Datetime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime


class Native::Service::Timestamps::Debug::Datetime::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Localtime


class Native::Service::Timestamps::Debug::Datetime::Localtime::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Msec


class Native::Service::Timestamps::Debug::Datetime::Msec::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Year


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year


class Native::Service::Timestamps::Debug::Datetime::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Year::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Year::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Year


class Native::Service::Timestamps::Debug::Datetime::Year::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Localtime


class Native::Service::Timestamps::Debug::Datetime::Year::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Msec


class Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone


class Native::Service::Timestamps::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uptime; //type: empty
        class Datetime; //type: Native::Service::Timestamps::Log::Datetime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime> datetime; // presence node
        
}; // Native::Service::Timestamps::Log


class Native::Service::Timestamps::Log::Datetime : public ydk::Entity
{
    public:
        Datetime();
        ~Datetime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Log::Datetime


class Native::Service::Alignment : public ydk::Entity
{
    public:
        Alignment();
        ~Alignment();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf detection; //type: empty
        ydk::YLeaf logging; //type: empty

}; // Native::Service::Alignment


class Native::Service::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Max; //type: Native::Service::Counters::Max

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Counters::Max> max;
        
}; // Native::Service::Counters


class Native::Service::Counters::Max : public ydk::Entity
{
    public:
        Max();
        ~Max();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf age; //type: uint8

}; // Native::Service::Counters::Max


class Native::Service::Heartbeat : public ydk::Entity
{
    public:
        Heartbeat();
        ~Heartbeat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fatal_count; //type: uint8
        ydk::YLeaf interrupt_interval; //type: uint8
        ydk::YLeaf interrupt_max; //type: uint8
        ydk::YLeaf transmit_interval; //type: uint8
        ydk::YLeaf warning_timeout; //type: uint8

}; // Native::Service::Heartbeat


class Native::Service::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf config; //type: empty

}; // Native::Service::Prompt


class Native::Platform : public ydk::Entity
{
    public:
        Platform();
        ~Platform();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_cdvt; //type: boolean
        ydk::YLeaf cfm; //type: empty
        ydk::YLeaf bfd_debug_trace; //type: uint8
        ydk::YLeaf shell; //type: boolean
        ydk::YLeaf tcam_parity_error; //type: TcamParityError
        class Icmp; //type: Native::Platform::Icmp
        class IpPorts; //type: Native::Platform::IpPorts
        class Bfd; //type: Native::Platform::Bfd
        class Console; //type: Native::Platform::Console
        class Enable; //type: Native::Platform::Enable
        class ExternalAlarm; //type: Native::Platform::ExternalAlarm
        class Hardware; //type: Native::Platform::Hardware
        class Ipsec; //type: Native::Platform::Ipsec
        class L2Vpn; //type: Native::Platform::L2Vpn
        class Multicast; //type: Native::Platform::Multicast
        class PuntKeepalive; //type: Native::Platform::PuntKeepalive
        class PuntPolicer; //type: Native::Platform::PuntPolicer
        class Qos; //type: Native::Platform::Qos
        class Reload; //type: Native::Platform::Reload
        class Urpf; //type: Native::Platform::Urpf
        class TcamThreshold; //type: Native::Platform::TcamThreshold
        class Trace; //type: Native::Platform::Trace

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Console> console; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::ExternalAlarm> external_alarm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Hardware> hardware;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::IpPorts> ip_ports;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::L2Vpn> l2vpn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::PuntKeepalive> punt_keepalive; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::PuntPolicer> punt_policer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Qos> qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Reload> reload;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::TcamThreshold> tcam_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Trace> trace;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Urpf> urpf;
                class TcamParityError;

}; // Native::Platform


class Native::Platform::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RateLimit; //type: Native::Platform::Icmp::RateLimit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Icmp::RateLimit> rate_limit;
        
}; // Native::Platform::Icmp


class Native::Platform::Icmp::RateLimit : public ydk::Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet; //type: uint32
        ydk::YLeaf duration; //type: uint32

}; // Native::Platform::Icmp::RateLimit


class Native::Platform::IpPorts : public ydk::Entity
{
    public:
        IpPorts();
        ~IpPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ephemeral_max; //type: uint16

}; // Native::Platform::IpPorts


class Native::Platform::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_offload; //type: empty
        ydk::YLeaf allow_svi; //type: empty
        ydk::YLeaf enable_offload; //type: empty

}; // Native::Platform::Bfd


class Native::Platform::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf output; //type: Output
        class Output;

}; // Native::Platform::Console


class Native::Platform::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Controller; //type: Native::Platform::Enable::Controller

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Enable::Controller> > controller;
        
}; // Native::Platform::Enable


class Native::Platform::Enable::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sonet; //type: string

}; // Native::Platform::Enable::Controller


class Native::Platform::ExternalAlarm : public ydk::Entity
{
    public:
        ExternalAlarm();
        ~ExternalAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: uint32
        ydk::YLeaf alarm; //type: one of enumeration, uint16

}; // Native::Platform::ExternalAlarm


class Native::Platform::Hardware : public ydk::Entity
{
    public:
        Hardware();
        ~Hardware();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lite; //type: Native::Platform::Hardware::Lite
        class Throughput; //type: Native::Platform::Hardware::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Hardware::Lite> lite;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Hardware::Throughput> throughput;
        
}; // Native::Platform::Hardware


class Native::Platform::Hardware::Lite : public ydk::Entity
{
    public:
        Lite();
        ~Lite();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf license; //type: License
        class License;

}; // Native::Platform::Hardware::Lite


class Native::Platform::Hardware::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: Disable
        class Level; //type: Native::Platform::Hardware::Throughput::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Hardware::Throughput::Level> level;
                class Disable;

}; // Native::Platform::Hardware::Throughput


class Native::Platform::Hardware::Throughput::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kbps; //type: Kbps
        ydk::YLeaf eval_only; //type: empty
        class Kbps;

}; // Native::Platform::Hardware::Throughput::Level


class Native::Platform::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf arlog_supress; //type: empty
        ydk::YLeaf fips_mode; //type: empty
        ydk::YLeaf gdoi; //type: Gdoi
        class Llq; //type: Native::Platform::Ipsec::Llq
        class Reassemble; //type: Native::Platform::Ipsec::Reassemble

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Ipsec::Llq> llq;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Ipsec::Reassemble> reassemble;
                class Gdoi;

}; // Native::Platform::Ipsec


class Native::Platform::Ipsec::Llq : public ydk::Entity
{
    public:
        Llq();
        ~Llq();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_group; //type: uint8

}; // Native::Platform::Ipsec::Llq


class Native::Platform::Ipsec::Reassemble : public ydk::Entity
{
    public:
        Reassemble();
        ~Reassemble();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transit; //type: empty

}; // Native::Platform::Ipsec::Reassemble


class Native::Platform::L2Vpn : public ydk::Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hdlc_pass_through; //type: empty
        class Statistics; //type: Native::Platform::L2Vpn::Statistics

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::L2Vpn::Statistics> statistics;
        
}; // Native::Platform::L2Vpn


class Native::Platform::L2Vpn::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Platform::L2Vpn::Statistics


class Native::Platform::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mgre; //type: Native::Platform::Multicast::Mgre
        class Oce; //type: Native::Platform::Multicast::Oce

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Multicast::Mgre> mgre;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Multicast::Oce> oce;
        
}; // Native::Platform::Multicast


class Native::Platform::Multicast::Mgre : public ydk::Entity
{
    public:
        Mgre();
        ~Mgre();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf injection; //type: empty

}; // Native::Platform::Multicast::Mgre


class Native::Platform::Multicast::Oce : public ydk::Entity
{
    public:
        Oce();
        ~Oce();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flag; //type: Native::Platform::Multicast::Oce::Flag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Multicast::Oce::Flag> flag;
        
}; // Native::Platform::Multicast::Oce


class Native::Platform::Multicast::Oce::Flag : public ydk::Entity
{
    public:
        Flag();
        ~Flag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf suppress; //type: empty

}; // Native::Platform::Multicast::Oce::Flag


class Native::Platform::PuntKeepalive : public ydk::Entity
{
    public:
        PuntKeepalive();
        ~PuntKeepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_kernel_core; //type: boolean
        class Settings; //type: Native::Platform::PuntKeepalive::Settings

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::PuntKeepalive::Settings> settings;
        
}; // Native::Platform::PuntKeepalive

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
        static const ydk::Enum::YLeaf major;
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
        static const ydk::Enum::YLeaf major;
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
        static const ydk::Enum::YLeaf major;
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

class Native::Domain::Vrf::Master::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy : public ydk::Enum
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

class Native::Parser::Config::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;

};

class Native::Platform::TcamParityError : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class Native::Platform::Console::Output : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf serial;
        static const ydk::Enum::YLeaf virtual_;

};

class Native::Platform::Hardware::Lite::License : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;

};

class Native::Platform::Hardware::Throughput::Disable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal_license;

};

class Native::Platform::Hardware::Throughput::Level::Kbps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_10000;
        static const ydk::Enum::YLeaf Y_25000;
        static const ydk::Enum::YLeaf Y_50000;

};

class Native::Platform::Ipsec::Gdoi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf accept_both;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_0_ */

