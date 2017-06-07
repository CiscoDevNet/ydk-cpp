#ifndef _CISCO_IOS_XE_NATIVE_36_
#define _CISCO_IOS_XE_NATIVE_36_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_31.hpp"
#include "Cisco_IOS_XE_native_35.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth::Share : public Entity
{
    public:
        Share();
        ~Share();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf weight1; //type: uint8
        YLeaf weight2; //type: uint8
        YLeaf weight3; //type: uint8
        YLeaf weight4; //type: uint8

}; // Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth::Share


class Native::Interface::Tengigabitethernet::Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_link; //type: empty

}; // Native::Interface::Tengigabitethernet::Macsec


class Native::Interface::Tengigabitethernet::DeviceTracking : public Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Tengigabitethernet::DeviceTracking


class Native::Interface::Tengigabitethernet::Udld : public Entity
{
    public:
        Udld();
        ~Udld();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::Tengigabitethernet::Udld::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Udld::Port> port; // presence node
        
}; // Native::Interface::Tengigabitethernet::Udld


class Native::Interface::Tengigabitethernet::Udld::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aggressive; //type: empty
        YLeaf disable; //type: empty

}; // Native::Interface::Tengigabitethernet::Udld::Port


class Native::Interface::Tengigabitethernet::ZoneMember : public Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf security; //type: string

}; // Native::Interface::Tengigabitethernet::ZoneMember


class Native::Interface::Fortygigabitethernet : public Entity
{
    public:
        Fortygigabitethernet();
        ~Fortygigabitethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf media_type; //type: MediaTypeEnum
        YLeaf port_type; //type: PortTypeEnum
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        YLeaf channel_protocol; //type: ChannelProtocolEnum
        YLeaf duplex; //type: DuplexEnum
        class SwitchportConf; //type: Native::Interface::Fortygigabitethernet::SwitchportConf
        class Switchport; //type: Native::Interface::Fortygigabitethernet::Switchport
        class Arp; //type: Native::Interface::Fortygigabitethernet::Arp
        class Backup; //type: Native::Interface::Fortygigabitethernet::Backup
        class Cemoudp; //type: Native::Interface::Fortygigabitethernet::Cemoudp
        class CwsTunnel; //type: Native::Interface::Fortygigabitethernet::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Fortygigabitethernet::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Fortygigabitethernet::Encapsulation
        class FairQueueConf; //type: Native::Interface::Fortygigabitethernet::FairQueueConf
        class FairQueue; //type: Native::Interface::Fortygigabitethernet::FairQueue
        class Flowcontrol; //type: Native::Interface::Fortygigabitethernet::Flowcontrol
        class Isis; //type: Native::Interface::Fortygigabitethernet::Isis
        class KeepaliveSettings; //type: Native::Interface::Fortygigabitethernet::KeepaliveSettings
        class Bfd; //type: Native::Interface::Fortygigabitethernet::Bfd
        class Bandwidth; //type: Native::Interface::Fortygigabitethernet::Bandwidth
        class Dampening; //type: Native::Interface::Fortygigabitethernet::Dampening
        class Domain; //type: Native::Interface::Fortygigabitethernet::Domain
        class HoldQueue; //type: Native::Interface::Fortygigabitethernet::HoldQueue
        class Mpls; //type: Native::Interface::Fortygigabitethernet::Mpls
        class IpVrf; //type: Native::Interface::Fortygigabitethernet::IpVrf
        class Vrf; //type: Native::Interface::Fortygigabitethernet::Vrf
        class Ip; //type: Native::Interface::Fortygigabitethernet::Ip
        class Ipv6; //type: Native::Interface::Fortygigabitethernet::Ipv6
        class Logging; //type: Native::Interface::Fortygigabitethernet::Logging
        class Mdix; //type: Native::Interface::Fortygigabitethernet::Mdix
        class Mop; //type: Native::Interface::Fortygigabitethernet::Mop
        class Interface_Qos; //type: Native::Interface::Fortygigabitethernet::Interface_Qos
        class Standby; //type: Native::Interface::Fortygigabitethernet::Standby
        class AccessSession; //type: Native::Interface::Fortygigabitethernet::AccessSession
        class StormControl; //type: Native::Interface::Fortygigabitethernet::StormControl
        class Trust; //type: Native::Interface::Fortygigabitethernet::Trust
        class Utd; //type: Native::Interface::Fortygigabitethernet::Utd
        class PriorityQueue; //type: Native::Interface::Fortygigabitethernet::PriorityQueue
        class RcvQueue; //type: Native::Interface::Fortygigabitethernet::RcvQueue
        class Peer; //type: Native::Interface::Fortygigabitethernet::Peer
        class PmPath; //type: Native::Interface::Fortygigabitethernet::PmPath
        class CarrierDelay; //type: Native::Interface::Fortygigabitethernet::CarrierDelay
        class ChannelGroup; //type: Native::Interface::Fortygigabitethernet::ChannelGroup
        class Ethernet; //type: Native::Interface::Fortygigabitethernet::Ethernet
        class Negotiation; //type: Native::Interface::Fortygigabitethernet::Negotiation
        class Synchronous; //type: Native::Interface::Fortygigabitethernet::Synchronous
        class Speed; //type: Native::Interface::Fortygigabitethernet::Speed
        class Plim; //type: Native::Interface::Fortygigabitethernet::Plim
        class Pppoe; //type: Native::Interface::Fortygigabitethernet::Pppoe
        class Service; //type: Native::Interface::Fortygigabitethernet::Service
        class Auto_; //type: Native::Interface::Fortygigabitethernet::Auto_
        class Datalink; //type: Native::Interface::Fortygigabitethernet::Datalink
        class Energywise; //type: Native::Interface::Fortygigabitethernet::Energywise
        class Location; //type: Native::Interface::Fortygigabitethernet::Location
        class Mac; //type: Native::Interface::Fortygigabitethernet::Mac
        class Macro; //type: Native::Interface::Fortygigabitethernet::Macro
        class DualActive; //type: Native::Interface::Fortygigabitethernet::DualActive
        class Lldp; //type: Native::Interface::Fortygigabitethernet::Lldp
        class LoadBalancing; //type: Native::Interface::Fortygigabitethernet::LoadBalancing
        class VlanRange; //type: Native::Interface::Fortygigabitethernet::VlanRange
        class Switch; //type: Native::Interface::Fortygigabitethernet::Switch
        class SrrQueue; //type: Native::Interface::Fortygigabitethernet::SrrQueue
        class Macsec; //type: Native::Interface::Fortygigabitethernet::Macsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::ChannelGroup> channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Datalink> datalink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::DualActive> dual_active;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Energywise> energywise; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Lldp> lldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::LoadBalancing> load_balancing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Location> location;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Macro> macro;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Macsec> macsec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Negotiation> negotiation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Plim> plim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Speed> speed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::SrrQueue> srr_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switch> switch;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Synchronous> synchronous;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Utd> utd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::VlanRange> > vlan_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Vrf> vrf;
                class MediaTypeEnum;
        class PortTypeEnum;
        class IfStateEnum;
        class ServiceInsertionEnum;
        class ChannelProtocolEnum;
        class DuplexEnum;

}; // Native::Interface::Fortygigabitethernet


class Native::Interface::Fortygigabitethernet::SwitchportConf : public Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchport; //type: boolean

}; // Native::Interface::Fortygigabitethernet::SwitchportConf


class Native::Interface::Fortygigabitethernet::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nonegotiate; //type: empty
        YLeaf protected_; //type: empty
        YLeaf host; //type: empty
        class Access; //type: Native::Interface::Fortygigabitethernet::Switchport::Access
        class Block; //type: Native::Interface::Fortygigabitethernet::Switchport::Block
        class Mode; //type: Native::Interface::Fortygigabitethernet::Switchport::Mode
        class PortSecurity; //type: Native::Interface::Fortygigabitethernet::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::Fortygigabitethernet::Switchport::Trunk
        class Voice; //type: Native::Interface::Fortygigabitethernet::Switchport::Voice
        class Priority; //type: Native::Interface::Fortygigabitethernet::Switchport::Priority
        class Autostate; //type: Native::Interface::Fortygigabitethernet::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Autostate> autostate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Trunk> trunk;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Voice> voice;
        
}; // Native::Interface::Fortygigabitethernet::Switchport


class Native::Interface::Fortygigabitethernet::Switchport::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Fortygigabitethernet::Switchport::Access::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::Fortygigabitethernet::Switchport::Access


class Native::Interface::Fortygigabitethernet::Switchport::Access::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, enumeration
        YLeaf name; //type: string
        class VlanEnum;

}; // Native::Interface::Fortygigabitethernet::Switchport::Access::Vlan


class Native::Interface::Fortygigabitethernet::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast; //type: empty
        YLeaf unicast; //type: empty

}; // Native::Interface::Fortygigabitethernet::Switchport::Block


class Native::Interface::Fortygigabitethernet::Switchport::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: DynamicEnum
        class Access; //type: Native::Interface::Fortygigabitethernet::Switchport::Mode::Access
        class Dot1QTunnel; //type: Native::Interface::Fortygigabitethernet::Switchport::Mode::Dot1QTunnel
        class PrivateVlan; //type: Native::Interface::Fortygigabitethernet::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::Fortygigabitethernet::Switchport::Mode::Trunk

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Mode::Dot1QTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Mode::Trunk> trunk; // presence node
                class DynamicEnum;

}; // Native::Interface::Fortygigabitethernet::Switchport::Mode


class Native::Interface::Fortygigabitethernet::Switchport::Mode::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Switchport::Mode::Access


class Native::Interface::Fortygigabitethernet::Switchport::Mode::Dot1QTunnel : public Entity
{
    public:
        Dot1QTunnel();
        ~Dot1QTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Switchport::Mode::Dot1QTunnel


class Native::Interface::Fortygigabitethernet::Switchport::Mode::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty
        YLeaf promiscuous; //type: empty

}; // Native::Interface::Fortygigabitethernet::Switchport::Mode::PrivateVlan


class Native::Interface::Fortygigabitethernet::Switchport::Mode::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Switchport::Mode::Trunk


class Native::Interface::Fortygigabitethernet::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf violation; //type: ViolationEnum
        class Aging; //type: Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::Aging
        class MacAddress; //type: Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::MacAddress
        class Maximum; //type: Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::Maximum> maximum;
                class ViolationEnum;

}; // Native::Interface::Fortygigabitethernet::Switchport::PortSecurity


class Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        YLeaf type; //type: TypeEnum
        class TypeEnum;

}; // Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::Aging


class Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sticky; //type: empty
        YLeaf hw_address; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::MacAddress


class Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_addresses; //type: uint16
        YLeaf vlan; //type: string

}; // Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::Maximum


class Native::Interface::Fortygigabitethernet::Switchport::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        class Allowed; //type: Native::Interface::Fortygigabitethernet::Switchport::Trunk::Allowed
        class Native_; //type: Native::Interface::Fortygigabitethernet::Switchport::Trunk::Native_
        class Pruning; //type: Native::Interface::Fortygigabitethernet::Switchport::Trunk::Pruning

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Trunk::Allowed> allowed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Trunk::Native_> native;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Trunk::Pruning> pruning;
                class EncapsulationEnum;

}; // Native::Interface::Fortygigabitethernet::Switchport::Trunk


class Native::Interface::Fortygigabitethernet::Switchport::Trunk::Allowed : public Entity
{
    public:
        Allowed();
        ~Allowed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Fortygigabitethernet::Switchport::Trunk::Allowed::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Trunk::Allowed::Vlan> vlan;
        
}; // Native::Interface::Fortygigabitethernet::Switchport::Trunk::Allowed


class Native::Interface::Fortygigabitethernet::Switchport::Trunk::Allowed::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlans; //type: string
        YLeaf add; //type: one of uint16, string
        YLeaf all; //type: empty
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::Fortygigabitethernet::Switchport::Trunk::Allowed::Vlan


class Native::Interface::Fortygigabitethernet::Switchport::Trunk::Native_ : public Entity
{
    public:
        Native_();
        ~Native_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, enumeration
        class VlanEnum;

}; // Native::Interface::Fortygigabitethernet::Switchport::Trunk::Native_


class Native::Interface::Fortygigabitethernet::Switchport::Trunk::Pruning : public Entity
{
    public:
        Pruning();
        ~Pruning();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Fortygigabitethernet::Switchport::Trunk::Pruning::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Trunk::Pruning::Vlan> vlan;
        
}; // Native::Interface::Fortygigabitethernet::Switchport::Trunk::Pruning


class Native::Interface::Fortygigabitethernet::Switchport::Trunk::Pruning::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf add; //type: one of uint16, string
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList vlans; //type: list of  one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::Fortygigabitethernet::Switchport::Trunk::Pruning::Vlan


class Native::Interface::Fortygigabitethernet::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Fortygigabitethernet::Switchport::Voice::Vlan
        class Detect; //type: Native::Interface::Fortygigabitethernet::Switchport::Voice::Detect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Voice::Detect> detect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Voice::Vlan> vlan;
        
}; // Native::Interface::Fortygigabitethernet::Switchport::Voice


class Native::Interface::Fortygigabitethernet::Switchport::Voice::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, string, enumeration
        YLeaf name; //type: string
        class VlanEnum;

}; // Native::Interface::Fortygigabitethernet::Switchport::Voice::Vlan


class Native::Interface::Fortygigabitethernet::Switchport::Voice::Detect : public Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CiscoPhone; //type: Native::Interface::Fortygigabitethernet::Switchport::Voice::Detect::CiscoPhone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Voice::Detect::CiscoPhone> cisco_phone; // presence node
        
}; // Native::Interface::Fortygigabitethernet::Switchport::Voice::Detect


class Native::Interface::Fortygigabitethernet::Switchport::Voice::Detect::CiscoPhone : public Entity
{
    public:
        CiscoPhone();
        ~CiscoPhone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf full_duplex; //type: empty

}; // Native::Interface::Fortygigabitethernet::Switchport::Voice::Detect::CiscoPhone


class Native::Interface::Fortygigabitethernet::Switchport::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Extend; //type: Native::Interface::Fortygigabitethernet::Switchport::Priority::Extend

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::Priority::Extend> extend;
        
}; // Native::Interface::Fortygigabitethernet::Switchport::Priority


class Native::Interface::Fortygigabitethernet::Switchport::Priority::Extend : public Entity
{
    public:
        Extend();
        ~Extend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        YLeaf cos; //type: uint8

}; // Native::Interface::Fortygigabitethernet::Switchport::Priority::Extend


class Native::Interface::Fortygigabitethernet::Switchport::Autostate : public Entity
{
    public:
        Autostate();
        ~Autostate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exclude; //type: empty

}; // Native::Interface::Fortygigabitethernet::Switchport::Autostate


class Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Association; //type: Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association
        class HostAssociation; //type: Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::HostAssociation
        class Mapping; //type: Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association> association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::HostAssociation> host_association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Mapping> mapping;
        
}; // Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan


class Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association::Host
        class Mapping; //type: Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association::Host> host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association::Mapping> mapping;
        
}; // Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association


class Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association::Host


class Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Association::Mapping


class Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::HostAssociation : public Entity
{
    public:
        HostAssociation();
        ~HostAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::HostAssociation


class Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::Fortygigabitethernet::Switchport::PrivateVlan::Mapping


class Native::Interface::Fortygigabitethernet::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Interface::Fortygigabitethernet::Arp


class Native::Interface::Fortygigabitethernet::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Fortygigabitethernet::Backup::Delay
        class Interface_; //type: Native::Interface::Fortygigabitethernet::Backup::Interface_
        class Load; //type: Native::Interface::Fortygigabitethernet::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Backup::Load> load;
        
}; // Native::Interface::Fortygigabitethernet::Backup


class Native::Interface::Fortygigabitethernet::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf failure; //type: one of uint32, enumeration
        YLeaf secondary_disable; //type: one of uint32, enumeration
        class FailureEnum;
        class SecondaryDisableEnum;

}; // Native::Interface::Fortygigabitethernet::Backup::Delay


class Native::Interface::Fortygigabitethernet::Backup::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

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
        class AtmSubinterface; //type: Native::Interface::Fortygigabitethernet::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Fortygigabitethernet::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Fortygigabitethernet::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Fortygigabitethernet::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Fortygigabitethernet::Backup::Interface_


class Native::Interface::Fortygigabitethernet::Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::Fortygigabitethernet::Backup::Interface_::AtmSubinterface


class Native::Interface::Fortygigabitethernet::Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::Fortygigabitethernet::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Fortygigabitethernet::Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::Fortygigabitethernet::Backup::Interface_::LispSubinterface


class Native::Interface::Fortygigabitethernet::Backup::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::Fortygigabitethernet::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Fortygigabitethernet::Backup::Load : public Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kickin; //type: one of uint32, enumeration
        YLeaf kickout; //type: one of uint32, enumeration
        class KickinEnum;
        class KickoutEnum;

}; // Native::Interface::Fortygigabitethernet::Backup::Load


class Native::Interface::Fortygigabitethernet::Cemoudp : public Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reserve; //type: Native::Interface::Fortygigabitethernet::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Fortygigabitethernet::Cemoudp


class Native::Interface::Fortygigabitethernet::Cemoudp::Reserve : public Entity
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

        YLeaf acr; //type: uint8

}; // Native::Interface::Fortygigabitethernet::Cemoudp::Reserve


class Native::Interface::Fortygigabitethernet::CwsTunnel : public Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::Fortygigabitethernet::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::CwsTunnel::Out> out;
        
}; // Native::Interface::Fortygigabitethernet::CwsTunnel


class Native::Interface::Fortygigabitethernet::CwsTunnel::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Fortygigabitethernet::CwsTunnel::Out


class Native::Interface::Fortygigabitethernet::L2ProtocolTunnel : public Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdp; //type: empty
        YLeaf stp; //type: empty
        YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::Fortygigabitethernet::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Fortygigabitethernet::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Fortygigabitethernet::L2ProtocolTunnel


class Native::Interface::Fortygigabitethernet::L2ProtocolTunnel::DropThreshold : public Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Fortygigabitethernet::L2ProtocolTunnel::DropThreshold


class Native::Interface::Fortygigabitethernet::L2ProtocolTunnel::ShutdownThreshold : public Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Fortygigabitethernet::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Fortygigabitethernet::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Q; //type: Native::Interface::Fortygigabitethernet::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Fortygigabitethernet::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Fortygigabitethernet::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Fortygigabitethernet::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Fortygigabitethernet::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Fortygigabitethernet::Encapsulation


class Native::Interface::Fortygigabitethernet::Encapsulation::Dot1Q : public Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16
        YLeaf native; //type: empty

}; // Native::Interface::Fortygigabitethernet::Encapsulation::Dot1Q


class Native::Interface::Fortygigabitethernet::Encapsulation::Isl : public Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Encapsulation::Isl


class Native::Interface::Fortygigabitethernet::Encapsulation::Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Encapsulation::Ppp


class Native::Interface::Fortygigabitethernet::Encapsulation::Slip : public Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Encapsulation::Slip


class Native::Interface::Fortygigabitethernet::Encapsulation::FrameRelay : public Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ietf; //type: empty

}; // Native::Interface::Fortygigabitethernet::Encapsulation::FrameRelay


class Native::Interface::Fortygigabitethernet::FairQueueConf : public Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::Fortygigabitethernet::FairQueueConf


class Native::Interface::Fortygigabitethernet::FairQueue : public Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::Fortygigabitethernet::FairQueue


class Native::Interface::Fortygigabitethernet::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: ReceiveEnum
        YLeaf send; //type: SendEnum
        class ReceiveEnum;
        class SendEnum;

}; // Native::Interface::Fortygigabitethernet::Flowcontrol


class Native::Interface::Fortygigabitethernet::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Isis


class Native::Interface::Fortygigabitethernet::KeepaliveSettings : public Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Keepalive; //type: Native::Interface::Fortygigabitethernet::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Fortygigabitethernet::KeepaliveSettings


class Native::Interface::Fortygigabitethernet::KeepaliveSettings::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf period; //type: uint16
        YLeaf retries; //type: uint8

}; // Native::Interface::Fortygigabitethernet::KeepaliveSettings::Keepalive


class Native::Interface::Fortygigabitethernet::Bfd : public Entity
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


}; // Native::Interface::Fortygigabitethernet::Bfd


class Native::Interface::Fortygigabitethernet::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_reference; //type: uint32
        YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Fortygigabitethernet::Bandwidth::Receive
        class Inherit; //type: Native::Interface::Fortygigabitethernet::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Bandwidth::Receive> receive;
        
}; // Native::Interface::Fortygigabitethernet::Bandwidth


class Native::Interface::Fortygigabitethernet::Bandwidth::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inherit; //type: empty
        YLeaf kilobits; //type: uint32

}; // Native::Interface::Fortygigabitethernet::Bandwidth::Receive


class Native::Interface::Fortygigabitethernet::Bandwidth::Inherit : public Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kilobits; //type: uint32

}; // Native::Interface::Fortygigabitethernet::Bandwidth::Inherit


class Native::Interface::Fortygigabitethernet::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dampening_time; //type: uint16
        YLeaf start_reusing_time; //type: uint16
        YLeaf start_supressing_time; //type: uint16
        YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::Fortygigabitethernet::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Dampening::Restart> restart;
        
}; // Native::Interface::Fortygigabitethernet::Dampening


class Native::Interface::Fortygigabitethernet::Dampening::Restart : public Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restart; //type: empty
        YLeaf restart_penalty; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Dampening::Restart


class Native::Interface::Fortygigabitethernet::Domain : public Entity
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
        YLeaf path; //type: string
        YLeaf internet_bound; //type: empty
        YLeaf path_id; //type: uint8
        YLeaf path_last_resort; //type: empty
        YLeaf zero_sla; //type: empty

}; // Native::Interface::Fortygigabitethernet::Domain


class Native::Interface::Fortygigabitethernet::HoldQueue : public Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_length; //type: uint16
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Interface::Fortygigabitethernet::HoldQueue


class Native::Interface::Fortygigabitethernet::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Mpls


class Native::Interface::Fortygigabitethernet::IpVrf : public Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Interface::Fortygigabitethernet::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::IpVrf::Ip> ip;
        
}; // Native::Interface::Fortygigabitethernet::IpVrf


class Native::Interface::Fortygigabitethernet::IpVrf::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Native::Interface::Fortygigabitethernet::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Fortygigabitethernet::IpVrf::Ip


class Native::Interface::Fortygigabitethernet::IpVrf::Ip::Vrf : public Entity
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

        YLeaf forwarding; //type: string

}; // Native::Interface::Fortygigabitethernet::IpVrf::Ip::Vrf


class Native::Interface::Fortygigabitethernet::Vrf : public Entity
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

        YLeaf forwarding; //type: string

}; // Native::Interface::Fortygigabitethernet::Vrf


class Native::Interface::Fortygigabitethernet::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admission; //type: string
        YLeaf unnumbered; //type: string
        YLeaf directed_broadcast; //type: one of uint16, string
        YLeaf local_proxy_arp; //type: empty
        YLeaf proxy_arp; //type: boolean
        YLeaf redirects; //type: boolean
        YLeaf mtu; //type: uint16
        YLeaf mroute_cache; //type: boolean
        class AccessGroup; //type: Native::Interface::Fortygigabitethernet::Ip::AccessGroup
        class Arp; //type: Native::Interface::Fortygigabitethernet::Ip::Arp
        class Vrf; //type: Native::Interface::Fortygigabitethernet::Ip::Vrf
        class NoAddress; //type: Native::Interface::Fortygigabitethernet::Ip::NoAddress
        class Address; //type: Native::Interface::Fortygigabitethernet::Ip::Address
        class HelloInterval; //type: Native::Interface::Fortygigabitethernet::Ip::HelloInterval
        class Authentication; //type: Native::Interface::Fortygigabitethernet::Ip::Authentication
        class HoldTime; //type: Native::Interface::Fortygigabitethernet::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Fortygigabitethernet::Ip::HelperAddress
        class Pim; //type: Native::Interface::Fortygigabitethernet::Ip::Pim
        class Policy; //type: Native::Interface::Fortygigabitethernet::Ip::Policy
        class RouteCacheConf; //type: Native::Interface::Fortygigabitethernet::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Fortygigabitethernet::Ip::RouteCache
        class Router; //type: Native::Interface::Fortygigabitethernet::Ip::Router
        class Tcp; //type: Native::Interface::Fortygigabitethernet::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Fortygigabitethernet::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Fortygigabitethernet::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Fortygigabitethernet::Ip::SummaryAddress
        class Verify; //type: Native::Interface::Fortygigabitethernet::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Vrf> vrf;
        
}; // Native::Interface::Fortygigabitethernet::Ip


class Native::Interface::Fortygigabitethernet::Ip::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class In; //type: Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In
        class Out; //type: Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Fortygigabitethernet::Ip::AccessGroup


class Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In


class Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In::CommonAcl


class Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ip::AccessGroup::In::Acl


class Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out


class Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ip::AccessGroup::Out::Acl


class Native::Interface::Fortygigabitethernet::Ip::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inspection; //type: Native::Interface::Fortygigabitethernet::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Fortygigabitethernet::Ip::Arp


class Native::Interface::Fortygigabitethernet::Ip::Arp::Inspection : public Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Fortygigabitethernet::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Fortygigabitethernet::Ip::Arp::Inspection


class Native::Interface::Fortygigabitethernet::Ip::Arp::Inspection::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf rate; //type: uint32

}; // Native::Interface::Fortygigabitethernet::Ip::Arp::Inspection::Limit


class Native::Interface::Fortygigabitethernet::Ip::Vrf : public Entity
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

        YLeaf receive; //type: string
        YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::Fortygigabitethernet::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Fortygigabitethernet::Ip::Vrf


class Native::Interface::Fortygigabitethernet::Ip::Vrf::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf liin_vrf; //type: empty
        YLeaf mgmtvrf; //type: empty
        YLeaf word; //type: string

}; // Native::Interface::Fortygigabitethernet::Ip::Vrf::Forwarding


class Native::Interface::Fortygigabitethernet::Ip::NoAddress : public Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: boolean

}; // Native::Interface::Fortygigabitethernet::Ip::NoAddress


class Native::Interface::Fortygigabitethernet::Ip::Address : public Entity
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

        YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::Fortygigabitethernet::Ip::Address::Primary
        class Secondary; //type: Native::Interface::Fortygigabitethernet::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Fortygigabitethernet::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Fortygigabitethernet::Ip::Address


class Native::Interface::Fortygigabitethernet::Ip::Address::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string

}; // Native::Interface::Fortygigabitethernet::Ip::Address::Primary


class Native::Interface::Fortygigabitethernet::Ip::Address::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ip::Address::Secondary


class Native::Interface::Fortygigabitethernet::Ip::Address::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::Fortygigabitethernet::Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Fortygigabitethernet::Ip::Address::Dhcp


class Native::Interface::Fortygigabitethernet::Ip::Address::Dhcp::ClientId : public Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf port_channel; //type: uint32
        YLeaf tengigabitethernet; //type: string
        YLeaf fortygigabitethernet; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Ip::Address::Dhcp::ClientId


class Native::Interface::Fortygigabitethernet::Ip::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Ip::HelloInterval


class Native::Interface::Fortygigabitethernet::Ip::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyChain; //type: Native::Interface::Fortygigabitethernet::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Fortygigabitethernet::Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Fortygigabitethernet::Ip::Authentication


class Native::Interface::Fortygigabitethernet::Ip::Authentication::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf name; //type: string

}; // Native::Interface::Fortygigabitethernet::Ip::Authentication::KeyChain


class Native::Interface::Fortygigabitethernet::Ip::Authentication::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf md5; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ip::Authentication::Mode


class Native::Interface::Fortygigabitethernet::Ip::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Ip::HoldTime


class Native::Interface::Fortygigabitethernet::Ip::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf global; //type: empty
        YLeaf vrf; //type: string

}; // Native::Interface::Fortygigabitethernet::Ip::HelperAddress


class Native::Interface::Fortygigabitethernet::Ip::Pim : public Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Ip::Pim


class Native::Interface::Fortygigabitethernet::Ip::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Interface::Fortygigabitethernet::Ip::Policy


class Native::Interface::Fortygigabitethernet::Ip::RouteCacheConf : public Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_cache; //type: boolean

}; // Native::Interface::Fortygigabitethernet::Ip::RouteCacheConf


class Native::Interface::Fortygigabitethernet::Ip::RouteCache : public Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cef; //type: boolean
        YLeaf flow; //type: boolean
        YLeaf policy; //type: boolean
        YLeaf same_interface; //type: boolean

}; // Native::Interface::Fortygigabitethernet::Ip::RouteCache


class Native::Interface::Fortygigabitethernet::Ip::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Native::Interface::Fortygigabitethernet::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Fortygigabitethernet::Ip::Router


class Native::Interface::Fortygigabitethernet::Ip::Router::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string

}; // Native::Interface::Fortygigabitethernet::Ip::Router::Isis


class Native::Interface::Fortygigabitethernet::Ip::Tcp : public Entity
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

        YLeaf adjust_mss; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Ip::Tcp


class Native::Interface::Fortygigabitethernet::Ip::VirtualReassembly : public Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_reassemblies; //type: uint32
        YLeaf max_fragments; //type: uint32
        YLeaf timeout; //type: uint32
        YLeaf drop_fragments; //type: empty
        YLeaf in; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ip::VirtualReassembly


class Native::Interface::Fortygigabitethernet::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Ip::Dhcp


class Native::Interface::Fortygigabitethernet::Ip::SummaryAddress : public Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eigrp; //type: Native::Interface::Fortygigabitethernet::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::Fortygigabitethernet::Ip::SummaryAddress


class Native::Interface::Fortygigabitethernet::Ip::SummaryAddress::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf metric; //type: uint32

}; // Native::Interface::Fortygigabitethernet::Ip::SummaryAddress::Eigrp


class Native::Interface::Fortygigabitethernet::Ip::Verify : public Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Interface::Fortygigabitethernet::Ip::Verify::Source
        class Unicast; //type: Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::Fortygigabitethernet::Ip::Verify


class Native::Interface::Fortygigabitethernet::Ip::Verify::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Fortygigabitethernet::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::Fortygigabitethernet::Ip::Verify::Source


class Native::Interface::Fortygigabitethernet::Ip::Verify::Source::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DhcpSnooping; //type: Native::Interface::Fortygigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::Fortygigabitethernet::Ip::Verify::Source::Vlan


class Native::Interface::Fortygigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
{
    public:
        DhcpSnooping();
        ~DhcpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_security; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast : public Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ReversePath; //type: Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast


class Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast::ReversePath : public Entity
{
    public:
        ReversePath();
        ~ReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast::ReversePath


class Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reachable_via; //type: ReachableViaEnum
        YLeaf allow_self_ping; //type: empty
        YLeaf allow_default; //type: empty
        class ReachableViaEnum;

}; // Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast::Source


class Native::Interface::Fortygigabitethernet::Ipv6 : public Entity
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

        YLeaf enable; //type: empty
        YLeaf mtu; //type: uint16
        YLeaf redirects; //type: boolean
        class DestinationGuard; //type: Native::Interface::Fortygigabitethernet::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::Fortygigabitethernet::Ipv6::Dhcp
        class Address; //type: Native::Interface::Fortygigabitethernet::Ipv6::Address
        class Nd; //type: Native::Interface::Fortygigabitethernet::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::Fortygigabitethernet::Ipv6::TrafficFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::Fortygigabitethernet::Ipv6


class Native::Interface::Fortygigabitethernet::Ipv6::DestinationGuard : public Entity
{
    public:
        DestinationGuard();
        ~DestinationGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Fortygigabitethernet::Ipv6::DestinationGuard


class Native::Interface::Fortygigabitethernet::Ipv6::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Ipv6::Dhcp


class Native::Interface::Fortygigabitethernet::Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::Fortygigabitethernet::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::Fortygigabitethernet::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::Fortygigabitethernet::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::Fortygigabitethernet::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::Fortygigabitethernet::Ipv6::Address


class Native::Interface::Fortygigabitethernet::Ipv6::Address::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rapid_commit; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ipv6::Address::Dhcp


class Native::Interface::Fortygigabitethernet::Ipv6::Address::Autoconfig : public Entity
{
    public:
        Autoconfig();
        ~Autoconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ipv6::Address::Autoconfig


class Native::Interface::Fortygigabitethernet::Ipv6::Address::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf anycast; //type: empty
        YLeaf eui_64; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ipv6::Address::PrefixList


class Native::Interface::Fortygigabitethernet::Ipv6::Address::LinkLocalAddress : public Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf link_local; //type: empty

}; // Native::Interface::Fortygigabitethernet::Ipv6::Address::LinkLocalAddress


class Native::Interface::Fortygigabitethernet::Ipv6::Nd : public Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fortygigabitethernet::Ipv6::Nd


class Native::Interface::Fortygigabitethernet::Ipv6::TrafficFilter : public Entity
{
    public:
        TrafficFilter();
        ~TrafficFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf access_list; //type: string
        class DirectionEnum;

}; // Native::Interface::Fortygigabitethernet::Ipv6::TrafficFilter


class Native::Interface::Fortygigabitethernet::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Event; //type: Native::Interface::Fortygigabitethernet::Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Logging::Event> event;
        
}; // Native::Interface::Fortygigabitethernet::Logging


class Native::Interface::Fortygigabitethernet::Logging::Event : public Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: empty
        YLeaf link_status; //type: empty
        YLeaf trunk_status; //type: empty
        YLeaf nfas_status; //type: empty
        YLeaf power_inline_status; //type: empty
        YLeaf status; //type: empty
        class SpanningTree; //type: Native::Interface::Fortygigabitethernet::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::Fortygigabitethernet::Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::Fortygigabitethernet::Logging::Event


class Native::Interface::Fortygigabitethernet::Logging::Event::SpanningTree : public Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: empty

}; // Native::Interface::Fortygigabitethernet::Logging::Event::SpanningTree


class Native::Interface::Fortygigabitethernet::Logging::Event::SubifLinkStatus : public Entity
{
    public:
        SubifLinkStatus();
        ~SubifLinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore_bulk; //type: empty

}; // Native::Interface::Fortygigabitethernet::Logging::Event::SubifLinkStatus


class Native::Interface::Fortygigabitethernet::Mdix : public Entity
{
    public:
        Mdix();
        ~Mdix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: boolean

}; // Native::Interface::Fortygigabitethernet::Mdix


class Native::Interface::Fortygigabitethernet::Mop : public Entity
{
    public:
        Mop();
        ~Mop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Native::Interface::Fortygigabitethernet::Mop


class Native::Interface::Fortygigabitethernet::Interface_Qos : public Entity
{
    public:
        Interface_Qos();
        ~Interface_Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Trust; //type: Native::Interface::Fortygigabitethernet::Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Interface_Qos::Trust> trust;
        
}; // Native::Interface::Fortygigabitethernet::Interface_Qos


class Native::Interface::Fortygigabitethernet::Interface_Qos::Trust : public Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device; //type: DeviceEnum
        class DeviceEnum;

}; // Native::Interface::Fortygigabitethernet::Interface_Qos::Trust


class Native::Interface::Fortygigabitethernet::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: VersionEnum
        YLeaf bfd; //type: empty
        YLeaf mac_refresh; //type: uint8
        class Delay; //type: Native::Interface::Fortygigabitethernet::Standby::Delay
        class UseBia; //type: Native::Interface::Fortygigabitethernet::Standby::UseBia
        class StandbyList; //type: Native::Interface::Fortygigabitethernet::Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::Fortygigabitethernet::Standby


class Native::Interface::Fortygigabitethernet::Standby::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minimum; //type: uint16
        YLeaf reload; //type: uint16

}; // Native::Interface::Fortygigabitethernet::Standby::Delay


class Native::Interface::Fortygigabitethernet::Standby::UseBia : public Entity
{
    public:
        UseBia();
        ~UseBia();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Scope; //type: Native::Interface::Fortygigabitethernet::Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::Fortygigabitethernet::Standby::UseBia


class Native::Interface::Fortygigabitethernet::Standby::UseBia::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty

}; // Native::Interface::Fortygigabitethernet::Standby::UseBia::Scope


class Native::Interface::Fortygigabitethernet::Standby::StandbyList : public Entity
{
    public:
        StandbyList();
        ~StandbyList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_number; //type: uint16
        YLeaf follow; //type: string
        YLeaf ipv6; //type: one of string, enumeration
        YLeaf mac_address; //type: string
        YLeaf name; //type: string
        YLeaf priority; //type: uint8
        class Authentication; //type: Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::Fortygigabitethernet::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::Fortygigabitethernet::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::Fortygigabitethernet::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::Fortygigabitethernet::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::Fortygigabitethernet::Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::Fortygigabitethernet::Standby::StandbyList


class Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        YLeaf text; //type: string
        class Md5; //type: Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication


class Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication::Md5


class Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        YLeaf timeout; //type: uint16
        class EncryptEnum;

}; // Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString

class Native::Interface::Fortygigabitethernet::MediaTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_select;
        static const Enum::YLeaf rj45;
        static const Enum::YLeaf sfp;

};

class Native::Interface::Fortygigabitethernet::PortTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf nni;

};

class Native::Interface::Fortygigabitethernet::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Fortygigabitethernet::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Fortygigabitethernet::ChannelProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf pagp;

};

class Native::Interface::Fortygigabitethernet::DuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf full;
        static const Enum::YLeaf half;

};

class Native::Interface::Fortygigabitethernet::Switchport::Access::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};

class Native::Interface::Fortygigabitethernet::Switchport::Mode::DynamicEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf desirable;

};

class Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Fortygigabitethernet::Switchport::PortSecurity::Aging::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf inactivity;

};

class Native::Interface::Fortygigabitethernet::Switchport::Trunk::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf isl;
        static const Enum::YLeaf negotiate;

};

class Native::Interface::Fortygigabitethernet::Switchport::Trunk::Native_::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf tag;

};

class Native::Interface::Fortygigabitethernet::Switchport::Voice::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1p;
        static const Enum::YLeaf none;
        static const Enum::YLeaf untagged;

};

class Native::Interface::Fortygigabitethernet::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Fortygigabitethernet::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Fortygigabitethernet::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Fortygigabitethernet::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Fortygigabitethernet::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Fortygigabitethernet::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Fortygigabitethernet::HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Fortygigabitethernet::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};

class Native::Interface::Fortygigabitethernet::Ipv6::TrafficFilter::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Fortygigabitethernet::Interface_Qos::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;

};

class Native::Interface::Fortygigabitethernet::Standby::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::Fortygigabitethernet::Standby::StandbyList::Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf autoconfig;

};

class Native::Interface::Fortygigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_36_ */

