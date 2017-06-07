#ifndef _CISCO_IOS_XE_NATIVE_0_
#define _CISCO_IOS_XE_NATIVE_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XE_native {

class Native : public Entity
{
    public:
        Native();
        ~Native();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf version; //type: string
        YLeaf boot_start_marker; //type: empty
        YLeaf boot_end_marker; //type: empty
        YLeaf captive_portal_bypass; //type: empty
        YLeaf hostname; //type: string
        YLeaf aqm_register_fnf; //type: empty
        YLeaf disable_eadi; //type: empty
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
        class Banner; //type: Native::Banner
        class TableMap; //type: Native::TableMap
        class Sdm; //type: Native::Sdm
        class Mls; //type: Native::Mls
        class ObjectGroup; //type: Native::ObjectGroup
        class PseudowireClass; //type: Native::PseudowireClass
        class ControlPlane; //type: Native::ControlPlane
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
        class Process; //type: Native::Process
        class Exception; //type: Native::Exception
        class Ap; //type: Native::Ap
        class Esmc; //type: Native::Esmc
        class BbaGroup; //type: Native::BbaGroup
        class Card; //type: Native::Card
        class Cef; //type: Native::Cef
        class Coap; //type: Native::Coap
        class DeviceSensor; //type: Native::DeviceSensor
        class Diagnostic; //type: Native::Diagnostic
        class Lldp; //type: Native::Lldp
        class PmAgent; //type: Native::PmAgent
        class Power; //type: Native::Power
        class AccessSession; //type: Native::AccessSession
        class Authentication; //type: Native::Authentication
        class ServiceList; //type: Native::ServiceList
        class ServiceRouting; //type: Native::ServiceRouting
        class NetworkPolicy; //type: Native::NetworkPolicy
        class Energywise; //type: Native::Energywise
        class Template_; //type: Native::Template_
        class ServiceTemplate; //type: Native::ServiceTemplate
        class Arp; //type: Native::Arp
        class Switch; //type: Native::Switch
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
        std::shared_ptr<Cisco_IOS_XE_native::Native::Banner> banner;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BbaGroup> bba_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BfdTemplate> bfd_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot> boot;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain> bridge_domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome> call_home; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Card> card;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cdp> cdp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cef> cef;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cisp> cisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Clock> clock;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Coap> coap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ControlPlane> control_plane; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller> controller;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto> crypto;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts> cts;
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
        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory> memory;
        std::shared_ptr<Cisco_IOS_XE_native::Native::MemorySize> memory_size;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Metadata> metadata;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mka> mka;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mls> mls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Module> module;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Multilink> multilink;
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
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree> spanning_tree;
        std::shared_ptr<Cisco_IOS_XE_native::Native::StackMac> stack_mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Subscriber> subscriber;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Switch> > switch;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual> > switch_virtual;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System> system;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::TableMap> > table_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Tacacs> tacacs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::TacacsServer> tacacs_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_> template_;
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


class Native::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2cos; //type: uint8
        YLeaf slow_timers; //type: uint16
        class Map; //type: Native::Bfd::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map> map;
        
}; // Native::Bfd


class Native::Bfd::Map : public Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Bfd::Map::Ipv4
        class Ipv6; //type: Native::Bfd::Map::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6> ipv6;
        
}; // Native::Bfd::Map


class Native::Bfd::Map::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NoVrf; //type: Native::Bfd::Map::Ipv4::NoVrf
        class Vrf; //type: Native::Bfd::Map::Ipv4::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4::NoVrf> no_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv4


class Native::Bfd::Map::Ipv4::NoVrf : public Entity
{
    public:
        NoVrf();
        ~NoVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dest_ip; //type: string
        YLeaf src_ip; //type: string
        YLeaf template_name; //type: string

}; // Native::Bfd::Map::Ipv4::NoVrf


class Native::Bfd::Map::Ipv4::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DstVrf; //type: Native::Bfd::Map::Ipv4::Vrf::DstVrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv4::Vrf::DstVrf> > dst_vrf;
        
}; // Native::Bfd::Map::Ipv4::Vrf


class Native::Bfd::Map::Ipv4::Vrf::DstVrf : public Entity
{
    public:
        DstVrf();
        ~DstVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_vrf; //type: string
        YLeaf a_period_b_period_c_period_d_slash_nn; //type: empty

}; // Native::Bfd::Map::Ipv4::Vrf::DstVrf


class Native::Bfd::Map::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DpIpv6_Prefix; //type: Native::Bfd::Map::Ipv6::DpIpv6_Prefix
        class Vrf; //type: Native::Bfd::Map::Ipv6::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6_Prefix> > dp_ipv6_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv6


class Native::Bfd::Map::Ipv6::DpIpv6_Prefix : public Entity
{
    public:
        DpIpv6_Prefix();
        ~DpIpv6_Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dp_ipv6_prefix; //type: string
        YLeaf bfd_nm; //type: string
        class SrcIpv6_Prefix0; //type: Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0
        class Vrf; //type: Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0> > src_ipv6_prefix0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv6::DpIpv6_Prefix


class Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0 : public Entity
{
    public:
        SrcIpv6_Prefix0();
        ~SrcIpv6_Prefix0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf src_ipv6_prefix0; //type: string
        YLeaf bfd_name; //type: string

}; // Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0


class Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrcVrf; //type: Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf> > src_vrf;
        
}; // Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf


class Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf : public Entity
{
    public:
        SrcVrf();
        ~SrcVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf src_vrf; //type: string
        YLeaf src_ipv6_prefix; //type: string

}; // Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf


class Native::Bfd::Map::Ipv6::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DstVrf; //type: Native::Bfd::Map::Ipv6::Vrf::DstVrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::Vrf::DstVrf> > dst_vrf;
        
}; // Native::Bfd::Map::Ipv6::Vrf


class Native::Bfd::Map::Ipv6::Vrf::DstVrf : public Entity
{
    public:
        DstVrf();
        ~DstVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_vrf; //type: string
        YLeaf dst_ipv6_prefix; //type: string

}; // Native::Bfd::Map::Ipv6::Vrf::DstVrf


class Native::Boot : public Entity
{
    public:
        Boot();
        ~Boot();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class System; //type: Native::Boot::System
        class EnableBreak; //type: Native::Boot::EnableBreak
        class Manual; //type: Native::Boot::Manual

        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::EnableBreak> enable_break; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::Manual> manual; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System> system;
        
}; // Native::Boot


class Native::Boot::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tftp_path; //type: string
        YLeaf tftp; //type: string
        class Bootfile; //type: Native::Boot::System::Bootfile
        class Flash; //type: Native::Boot::System::Flash
        class Switch; //type: Native::Boot::System::Switch

        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Bootfile> bootfile;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Flash> flash;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Switch> switch;
        
}; // Native::Boot::System


class Native::Boot::System::Bootfile : public Entity
{
    public:
        Bootfile();
        ~Bootfile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FilenameList; //type: Native::Boot::System::Bootfile::FilenameList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Bootfile::FilenameList> > filename_list;
        
}; // Native::Boot::System::Bootfile


class Native::Boot::System::Bootfile::FilenameList : public Entity
{
    public:
        FilenameList();
        ~FilenameList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf filename; //type: string

}; // Native::Boot::System::Bootfile::FilenameList


class Native::Boot::System::Flash : public Entity
{
    public:
        Flash();
        ~Flash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FlashList; //type: Native::Boot::System::Flash::FlashList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Flash::FlashList> > flash_list;
        
}; // Native::Boot::System::Flash


class Native::Boot::System::Flash::FlashList : public Entity
{
    public:
        FlashList();
        ~FlashList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flash_leaf; //type: string

}; // Native::Boot::System::Flash::FlashList


class Native::Boot::System::Switch : public Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SwitchNumber; //type: Native::Boot::System::Switch::SwitchNumber
        class All; //type: Native::Boot::System::Switch::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Switch::All> all;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Boot::System::Switch::SwitchNumber> > switch_number;
        
}; // Native::Boot::System::Switch


class Native::Boot::System::Switch::SwitchNumber : public Entity
{
    public:
        SwitchNumber();
        ~SwitchNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf flash_1_path; //type: string
        YLeaf flash_path; //type: string
        YLeaf tftp_path; //type: string

}; // Native::Boot::System::Switch::SwitchNumber


class Native::Boot::System::Switch::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flash_1; //type: string
        YLeaf flash; //type: string
        YLeaf tftp; //type: string

}; // Native::Boot::System::Switch::All


class Native::Boot::EnableBreak : public Entity
{
    public:
        EnableBreak();
        ~EnableBreak();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: uint8

}; // Native::Boot::EnableBreak


class Native::Boot::Manual : public Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: uint8

}; // Native::Boot::Manual


class Native::Memory : public Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lite; //type: empty
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


class Native::Memory::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class History; //type: Native::Memory::Statistics::History

        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Statistics::History> history;
        
}; // Native::Memory::Statistics


class Native::Memory::Statistics::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table; //type: uint8

}; // Native::Memory::Statistics::History


class Native::Memory::Chunk : public Entity
{
    public:
        Chunk();
        ~Chunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Siblings; //type: Native::Memory::Chunk::Siblings

        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Chunk::Siblings> siblings;
        
}; // Native::Memory::Chunk


class Native::Memory::Chunk::Siblings : public Entity
{
    public:
        Siblings();
        ~Siblings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: uint32

}; // Native::Memory::Chunk::Siblings


class Native::Memory::Free : public Entity
{
    public:
        Free();
        ~Free();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LowWatermark; //type: Native::Memory::Free::LowWatermark

        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Free::LowWatermark> low_watermark;
        
}; // Native::Memory::Free


class Native::Memory::Free::LowWatermark : public Entity
{
    public:
        LowWatermark();
        ~LowWatermark();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf io; //type: uint32
        YLeaf processor; //type: uint32

}; // Native::Memory::Free::LowWatermark


class Native::Memory::Reserve : public Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Critical; //type: Native::Memory::Reserve::Critical

        std::shared_ptr<Cisco_IOS_XE_native::Native::Memory::Reserve::Critical> critical; // presence node
        
}; // Native::Memory::Reserve


class Native::Memory::Reserve::Critical : public Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf memory_range; //type: uint32

}; // Native::Memory::Reserve::Critical


class Native::Memory::Sanity : public Entity
{
    public:
        Sanity();
        ~Sanity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf buffer; //type: empty
        YLeaf queue; //type: empty

}; // Native::Memory::Sanity


class Native::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CivicLocation; //type: Native::Location::CivicLocation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Location::CivicLocation> civic_location;
        
}; // Native::Location


class Native::Location::CivicLocation : public Entity
{
    public:
        CivicLocation();
        ~CivicLocation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Identifier; //type: Native::Location::CivicLocation::Identifier

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Location::CivicLocation::Identifier> > identifier;
        
}; // Native::Location::CivicLocation


class Native::Location::CivicLocation::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf identifier; //type: string
        YLeaf building; //type: string
        YLeaf floor; //type: string
        YLeaf landmark; //type: string
        YLeaf name; //type: string
        YLeaf number; //type: string

}; // Native::Location::CivicLocation::Identifier


class Native::CallHome : public Entity
{
    public:
        CallHome();
        ~CallHome();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf contact_email_addr; //type: string
        class SourceInterface; //type: Native::CallHome::SourceInterface
        class HttpProxy; //type: Native::CallHome::HttpProxy
        class Profile; //type: Native::CallHome::Profile

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::HttpProxy> http_proxy;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile> > profile;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface> source_interface;
        
}; // Native::CallHome


class Native::CallHome::SourceInterface : public Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::CallHome::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::CallHome::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::CallHome::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::CallHome::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::CallHome::SourceInterface


class Native::CallHome::SourceInterface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::CallHome::SourceInterface::AtmSubinterface


class Native::CallHome::SourceInterface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::CallHome::SourceInterface::AtmAcrsubinterface


class Native::CallHome::SourceInterface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::CallHome::SourceInterface::LispSubinterface


class Native::CallHome::SourceInterface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::CallHome::SourceInterface::PortChannelSubinterface


class Native::CallHome::HttpProxy : public Entity
{
    public:
        HttpProxy();
        ~HttpProxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProxyServers; //type: Native::CallHome::HttpProxy::ProxyServers

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::HttpProxy::ProxyServers> > proxy_servers;
        
}; // Native::CallHome::HttpProxy


class Native::CallHome::HttpProxy::ProxyServers : public Entity
{
    public:
        ProxyServers();
        ~ProxyServers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proxy_server; //type: string
        YLeaf port; //type: uint16

}; // Native::CallHome::HttpProxy::ProxyServers


class Native::CallHome::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf active; //type: boolean
        class Destination; //type: Native::CallHome::Profile::Destination
        class SubscribeToAlertGroup; //type: Native::CallHome::Profile::SubscribeToAlertGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup> subscribe_to_alert_group;
        
}; // Native::CallHome::Profile


class Native::CallHome::Profile::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_method; //type: TransportMethodEnum
        class Address; //type: Native::CallHome::Profile::Destination::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::Destination::Address> address;
                class TransportMethodEnum;

}; // Native::CallHome::Profile::Destination


class Native::CallHome::Profile::Destination::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf email; //type: string
        YLeaf http; //type: string

}; // Native::CallHome::Profile::Destination::Address


class Native::CallHome::Profile::SubscribeToAlertGroup : public Entity
{
    public:
        SubscribeToAlertGroup();
        ~SubscribeToAlertGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic : public Entity
{
    public:
        Diagnostic();
        ~Diagnostic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: SeverityEnum
        class SeverityEnum;

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic


class Native::CallHome::Profile::SubscribeToAlertGroup::Environment : public Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: SeverityEnum
        class SeverityEnum;

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Environment


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory : public Entity
{
    public:
        Inventory();
        ~Inventory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Periodic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic> periodic;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic : public Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Daily; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily
        class Monthly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly
        class Weekly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily> daily;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly> monthly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly> weekly;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily : public Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly : public Entity
{
    public:
        Monthly();
        ~Monthly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date; //type: uint8
        YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly : public Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf day; //type: WeekdayTypeEnum
        YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly


class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Severity; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity> > severity;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Syslog


class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity : public Entity
{
    public:
        Severity();
        ~Severity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: ValueEnum
        YLeaf pattern; //type: string
        class ValueEnum;

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Periodic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic> periodic;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic : public Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Daily; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily
        class Monthly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly
        class Weekly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly

        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily> daily;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly> monthly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly> weekly;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily : public Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly : public Entity
{
    public:
        Monthly();
        ~Monthly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date; //type: uint8
        YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly : public Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf day; //type: WeekdayTypeEnum
        YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly


class Native::HwModule : public Entity
{
    public:
        HwModule();
        ~HwModule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sm; //type: uint8
        YLeaf pvdm; //type: string
        class Uplink; //type: Native::HwModule::Uplink

        std::shared_ptr<Cisco_IOS_XE_native::Native::HwModule::Uplink> uplink;
        
}; // Native::HwModule


class Native::HwModule::Uplink : public Entity
{
    public:
        Uplink();
        ~Uplink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf select; //type: string
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::HwModule::Uplink


class Native::Cisp : public Entity
{
    public:
        Cisp();
        ~Cisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Cisp


class Native::Module : public Entity
{
    public:
        Module();
        ~Module();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Provision; //type: Native::Module::Provision

        std::shared_ptr<Cisco_IOS_XE_native::Native::Module::Provision> provision;
        
}; // Native::Module


class Native::Module::Provision : public Entity
{
    public:
        Provision();
        ~Provision();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Switch; //type: Native::Module::Provision::Switch

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Module::Provision::Switch> > switch;
        
}; // Native::Module::Provision


class Native::Module::Provision::Switch : public Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        class Chassis; //type: Native::Module::Provision::Switch::Chassis
        class Slot; //type: Native::Module::Provision::Switch::Slot

        std::shared_ptr<Cisco_IOS_XE_native::Native::Module::Provision::Switch::Chassis> chassis;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Module::Provision::Switch::Slot> > slot;
        
}; // Native::Module::Provision::Switch


class Native::Module::Provision::Switch::Chassis : public Entity
{
    public:
        Chassis();
        ~Chassis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf chassis_type; //type: uint32
        YLeaf base_mac; //type: string

}; // Native::Module::Provision::Switch::Chassis


class Native::Module::Provision::Switch::Slot : public Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf slot_type; //type: uint32
        YLeaf base_mac; //type: string

}; // Native::Module::Provision::Switch::Slot


class Native::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Vrf; //type: Native::Domain::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf> > vrf;
        
}; // Native::Domain


class Native::Domain::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Border; //type: Native::Domain::Vrf::Border
        class Master; //type: Native::Domain::Vrf::Master

        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Border> border;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master> master;
        
}; // Native::Domain::Vrf


class Native::Domain::Vrf::Border : public Entity
{
    public:
        Border();
        ~Border();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf master; //type: one of string, enumeration
        class SourceInterface; //type: Native::Domain::Vrf::Border::SourceInterface
        class Password; //type: Native::Domain::Vrf::Border::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Border::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Border::SourceInterface> source_interface;
                class MasterEnum;

}; // Native::Domain::Vrf::Border


class Native::Domain::Vrf::Border::SourceInterface : public Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf loopback; //type: uint32

}; // Native::Domain::Vrf::Border::SourceInterface


class Native::Domain::Vrf::Border::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf clear_key; //type: string
        class EncryptionEnum;

}; // Native::Domain::Vrf::Border::Password


class Native::Domain::Vrf::Master : public Entity
{
    public:
        Master();
        ~Master();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf branch; //type: empty
        YLeaf hub; //type: empty
        YLeaf transit; //type: empty
        YLeaf hub_ip; //type: string
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


class Native::Domain::Vrf::Master::Advanced : public Entity
{
    public:
        Advanced();
        ~Advanced();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf byte_loss_threshold; //type: uint16
        YLeaf channel_unreachable_timer; //type: uint16
        YLeaf load_sharing; //type: empty
        YLeaf minimum_mask_length; //type: uint8
        YLeaf mitigation_mode; //type: MitigationModeEnum
        YLeaf packet_loss_threshold; //type: uint8
        YLeaf threshold_variance; //type: uint8
        YLeaf transit_site_affinity; //type: empty
        class SmartProbes; //type: Native::Domain::Vrf::Master::Advanced::SmartProbes
        class Syslog; //type: Native::Domain::Vrf::Master::Advanced::Syslog
        class Tcp; //type: Native::Domain::Vrf::Master::Advanced::Tcp
        class TrafficClassAgeoutTimer; //type: Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::SmartProbes> smart_probes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::Syslog> syslog;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer> traffic_class_ageout_timer;
                class MitigationModeEnum;

}; // Native::Domain::Vrf::Master::Advanced


class Native::Domain::Vrf::Master::Advanced::SmartProbes : public Entity
{
    public:
        SmartProbes();
        ~SmartProbes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_port; //type: uint16
        YLeaf source_port; //type: uint16

}; // Native::Domain::Vrf::Master::Advanced::SmartProbes


class Native::Domain::Vrf::Master::Advanced::Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tca_time_min; //type: uint32

}; // Native::Domain::Vrf::Master::Advanced::Syslog


class Native::Domain::Vrf::Master::Advanced::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mc_port; //type: uint16

}; // Native::Domain::Vrf::Master::Advanced::Tcp


class Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer : public Entity
{
    public:
        TrafficClassAgeoutTimer();
        ~TrafficClassAgeoutTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16
        YLeaf interval_unit; //type: IntervalUnitEnum
        class IntervalUnitEnum;

}; // Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer


class Native::Domain::Vrf::Master::Collector : public Entity
{
    public:
        Collector();
        ~Collector();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf port; //type: uint16

}; // Native::Domain::Vrf::Master::Collector


class Native::Domain::Vrf::Master::EnterprisePrefix : public Entity
{
    public:
        EnterprisePrefix();
        ~EnterprisePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_list; //type: string

}; // Native::Domain::Vrf::Master::EnterprisePrefix


class Native::Domain::Vrf::Master::LoadBalance : public Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf advanced; //type: empty

}; // Native::Domain::Vrf::Master::LoadBalance


class Native::Domain::Vrf::Master::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf clear_key; //type: string
        class EncryptionEnum;

}; // Native::Domain::Vrf::Master::Password


class Native::Domain::Vrf::Master::SitePrefixes : public Entity
{
    public:
        SitePrefixes();
        ~SitePrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_list; //type: string

}; // Native::Domain::Vrf::Master::SitePrefixes


class Native::Domain::Vrf::Master::SourceInterface : public Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf loopback; //type: uint32

}; // Native::Domain::Vrf::Master::SourceInterface


class Native::Domain::Vrf::Master::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf sequence; //type: uint16
        class Match; //type: Native::Domain::Vrf::Master::Class_::Match
        class PathPreference; //type: Native::Domain::Vrf::Master::Class_::PathPreference

        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class_::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class_::PathPreference> path_preference;
        
}; // Native::Domain::Vrf::Master::Class_


class Native::Domain::Vrf::Master::Class_::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dscp; //type: Native::Domain::Vrf::Master::Class_::Match::Dscp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Domain::Vrf::Master::Class_::Match::Dscp> > dscp;
        
}; // Native::Domain::Vrf::Master::Class_::Match


class Native::Domain::Vrf::Master::Class_::Match::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint8, enumeration
        YLeaf policy; //type: PolicyEnum
        class PolicyEnum;

}; // Native::Domain::Vrf::Master::Class_::Match::Dscp


class Native::Domain::Vrf::Master::Class_::PathPreference : public Entity
{
    public:
        PathPreference();
        ~PathPreference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList primary; //type: list of  string
        YLeafList fallback; //type: list of  string

}; // Native::Domain::Vrf::Master::Class_::PathPreference


class Native::Parser : public Entity
{
    public:
        Parser();
        ~Parser();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Native::Parser::Config

        std::shared_ptr<Cisco_IOS_XE_native::Native::Parser::Config> config;
        
}; // Native::Parser


class Native::Parser::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache; //type: CacheEnum
        YLeaf partition; //type: empty
        class CacheEnum;

}; // Native::Parser::Config


class Native::Service : public Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal; //type: empty
        YLeaf password_encryption; //type: empty
        YLeaf password_recovery; //type: boolean
        YLeaf call_home; //type: empty
        YLeaf compress_config; //type: empty
        YLeaf config; //type: empty
        YLeaf dhcp; //type: empty
        YLeaf disable_ip_fast_frag; //type: empty
        YLeaf exec_callback; //type: empty
        YLeaf exec_wait; //type: empty
        YLeaf finger; //type: empty
        YLeaf hide_telnet_addresses; //type: empty
        YLeaf linenumber; //type: empty
        YLeaf log_hidden; //type: empty
        YLeaf nagle; //type: empty
        YLeaf old_slip_prompts; //type: empty
        YLeaf pt_vty_logging; //type: empty
        YLeaf sequence_numbers; //type: empty
        YLeaf slave_log; //type: empty
        YLeaf tcp_keepalives_in; //type: empty
        YLeaf tcp_keepalives_out; //type: empty
        YLeaf telnet_zeroidle; //type: empty
        YLeaf tcp_small_servers; //type: empty
        YLeaf udp_small_servers; //type: empty
        YLeaf unsupported_transceiver; //type: empty
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


class Native::Service::PadConf : public Entity
{
    public:
        PadConf();
        ~PadConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pad; //type: boolean

}; // Native::Service::PadConf


class Native::Service::Pad : public Entity
{
    public:
        Pad();
        ~Pad();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cmns; //type: empty
        YLeaf from_xot; //type: empty
        YLeaf to_xot; //type: empty

}; // Native::Service::Pad


class Native::Service::Timestamps : public Entity
{
    public:
        Timestamps();
        ~Timestamps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Debug; //type: Native::Service::Timestamps::Debug
        class Log; //type: Native::Service::Timestamps::Log

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug> debug;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log> log;
        
}; // Native::Service::Timestamps


class Native::Service::Timestamps::Debug : public Entity
{
    public:
        Debug();
        ~Debug();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uptime; //type: empty
        class Datetime; //type: Native::Service::Timestamps::Debug::Datetime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime> datetime; // presence node
        
}; // Native::Service::Timestamps::Debug


class Native::Service::Timestamps::Debug::Datetime : public Entity
{
    public:
        Datetime();
        ~Datetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime


class Native::Service::Timestamps::Debug::Datetime::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Localtime


class Native::Service::Timestamps::Debug::Datetime::Localtime::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Msec


class Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year


class Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec


class Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year


class Native::Service::Timestamps::Debug::Datetime::Localtime::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Year


class Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec


class Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Msec


class Native::Service::Timestamps::Debug::Datetime::Msec::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Msec::Localtime


class Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year


class Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime


class Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year


class Native::Service::Timestamps::Debug::Datetime::Msec::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Msec::Year


class Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime


class Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec> msec; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec


class Native::Service::Timestamps::Debug::Datetime::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Year::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Year::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Year


class Native::Service::Timestamps::Debug::Datetime::Year::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Year::Localtime


class Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec


class Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Year::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Year::Msec


class Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime


class Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec> msec; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime


class Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec


class Native::Service::Timestamps::Log : public Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uptime; //type: empty
        class Datetime; //type: Native::Service::Timestamps::Log::Datetime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime> datetime; // presence node
        
}; // Native::Service::Timestamps::Log


class Native::Service::Timestamps::Log::Datetime : public Entity
{
    public:
        Datetime();
        ~Datetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::Localtime
        class Msec; //type: Native::Service::Timestamps::Log::Datetime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Log::Datetime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime


class Native::Service::Timestamps::Log::Datetime::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Log::Datetime::Localtime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Log::Datetime::Localtime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Localtime


class Native::Service::Timestamps::Log::Datetime::Localtime::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Localtime::Msec


class Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year


class Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec
        class Year; //type: Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec


class Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year

class LoggingLevelTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf alerts;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf debugging;
        static const Enum::YLeaf emergencies;
        static const Enum::YLeaf errors;
        static const Enum::YLeaf informational;
        static const Enum::YLeaf notifications;
        static const Enum::YLeaf warnings;
        static const Enum::YLeaf bogus;

};

class Native::CallHome::Profile::Destination::TransportMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf http;
        static const Enum::YLeaf email;

};

class Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf catastrophic;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf debugging;
        static const Enum::YLeaf disaster;
        static const Enum::YLeaf fatal;
        static const Enum::YLeaf major;
        static const Enum::YLeaf minor;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf notification;
        static const Enum::YLeaf warning;

};

class Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf catastrophic;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf debugging;
        static const Enum::YLeaf disaster;
        static const Enum::YLeaf fatal;
        static const Enum::YLeaf major;
        static const Enum::YLeaf minor;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf notification;
        static const Enum::YLeaf warning;

};

class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf catastrophic;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf debugging;
        static const Enum::YLeaf disaster;
        static const Enum::YLeaf fatal;
        static const Enum::YLeaf major;
        static const Enum::YLeaf minor;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf notification;
        static const Enum::YLeaf warning;

};

class Native::HwModule::Uplink::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf shared_backplane;

};

class Native::Domain::Vrf::Border::MasterEnum : public Enum
{
    public:
        static const Enum::YLeaf local;

};

class Native::Domain::Vrf::Border::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Domain::Vrf::Master::Advanced::MitigationModeEnum : public Enum
{
    public:
        static const Enum::YLeaf aggressive;

};

class Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::IntervalUnitEnum : public Enum
{
    public:
        static const Enum::YLeaf hours;
        static const Enum::YLeaf minutes;

};

class Native::Domain::Vrf::Master::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Domain::Vrf::Master::Class_::Match::Dscp::PolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf best_effort;
        static const Enum::YLeaf bulk_data;
        static const Enum::YLeaf custom;
        static const Enum::YLeaf low_latency_data;
        static const Enum::YLeaf real_time_video;
        static const Enum::YLeaf scavenger;
        static const Enum::YLeaf voice;

};

class Native::Parser::Config::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf interface;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_0_ */

