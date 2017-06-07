#ifndef _CISCO_IOS_XE_NATIVE_64_
#define _CISCO_IOS_XE_NATIVE_64_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_60.hpp"
#include "Cisco_IOS_XE_native_63.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public Entity
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
        class EncryptEnum;

}; // Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public Entity
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
        class EncryptEnum;

}; // Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public Entity
{
    public:
        Aes256();
        ~Aes256();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public Entity
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
        class EncryptEnum;

}; // Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::Tunnel::Ospfv3::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peering; //type: Native::Interface::Tunnel::Ospfv3::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::Tunnel::Ospfv3::Manet


class Native::Interface::Tunnel::Ospfv3::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::Tunnel::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Tunnel::Ospfv3::Manet::Peering


class Native::Interface::Tunnel::Ospfv3::Manet::Peering::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Tunnel::Ospfv3::Manet::Peering::Cost


class Native::Interface::Tunnel::Ospfv3::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf cost; //type: uint32

}; // Native::Interface::Tunnel::Ospfv3::MultiArea


class Native::Interface::Tunnel::Ospfv3::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint32
        YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::Tunnel::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Tunnel::Ospfv3::Neighbor


class Native::Interface::Tunnel::Ospfv3::Neighbor::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Tunnel::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::Tunnel::Ospfv3::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf manet; //type: empty
        YLeaf non_broadcast; //type: empty
        YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::Tunnel::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Tunnel::Ospfv3::Network


class Native::Interface::Tunnel::Ospfv3::Network::PointToMultipoint : public Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_broadcast; //type: empty

}; // Native::Interface::Tunnel::Ospfv3::Network::PointToMultipoint


class Native::Interface::Tunnel::Ospfv3::PrefixSuppression : public Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Tunnel::Ospfv3::PrefixSuppression


class Native::Interface::Tunnel::Udld : public Entity
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

        class Port; //type: Native::Interface::Tunnel::Udld::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Udld::Port> port; // presence node
        
}; // Native::Interface::Tunnel::Udld


class Native::Interface::Tunnel::Udld::Port : public Entity
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

}; // Native::Interface::Tunnel::Udld::Port


class Native::Interface::Tunnel::ZoneMember : public Entity
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

}; // Native::Interface::Tunnel::ZoneMember


class Native::Interface::VirtualTemplate : public Entity
{
    public:
        VirtualTemplate();
        ~VirtualTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        YLeaf type; //type: TypeEnum
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
        class SwitchportConf; //type: Native::Interface::VirtualTemplate::SwitchportConf
        class Switchport; //type: Native::Interface::VirtualTemplate::Switchport
        class Arp; //type: Native::Interface::VirtualTemplate::Arp
        class Backup; //type: Native::Interface::VirtualTemplate::Backup
        class Cemoudp; //type: Native::Interface::VirtualTemplate::Cemoudp
        class CwsTunnel; //type: Native::Interface::VirtualTemplate::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::VirtualTemplate::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::VirtualTemplate::Encapsulation
        class FairQueueConf; //type: Native::Interface::VirtualTemplate::FairQueueConf
        class FairQueue; //type: Native::Interface::VirtualTemplate::FairQueue
        class Flowcontrol; //type: Native::Interface::VirtualTemplate::Flowcontrol
        class Isis; //type: Native::Interface::VirtualTemplate::Isis
        class KeepaliveSettings; //type: Native::Interface::VirtualTemplate::KeepaliveSettings
        class Bfd; //type: Native::Interface::VirtualTemplate::Bfd
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Bandwidth
        class Dampening; //type: Native::Interface::VirtualTemplate::Dampening
        class Domain; //type: Native::Interface::VirtualTemplate::Domain
        class HoldQueue; //type: Native::Interface::VirtualTemplate::HoldQueue
        class Mpls; //type: Native::Interface::VirtualTemplate::Mpls
        class IpVrf; //type: Native::Interface::VirtualTemplate::IpVrf
        class Vrf; //type: Native::Interface::VirtualTemplate::Vrf
        class Ip; //type: Native::Interface::VirtualTemplate::Ip
        class Ipv6; //type: Native::Interface::VirtualTemplate::Ipv6
        class Logging; //type: Native::Interface::VirtualTemplate::Logging
        class Mdix; //type: Native::Interface::VirtualTemplate::Mdix
        class Mop; //type: Native::Interface::VirtualTemplate::Mop
        class Interface_Qos; //type: Native::Interface::VirtualTemplate::Interface_Qos
        class Standby; //type: Native::Interface::VirtualTemplate::Standby
        class AccessSession; //type: Native::Interface::VirtualTemplate::AccessSession
        class StormControl; //type: Native::Interface::VirtualTemplate::StormControl
        class Trust; //type: Native::Interface::VirtualTemplate::Trust
        class Utd; //type: Native::Interface::VirtualTemplate::Utd
        class PriorityQueue; //type: Native::Interface::VirtualTemplate::PriorityQueue
        class RcvQueue; //type: Native::Interface::VirtualTemplate::RcvQueue
        class Peer; //type: Native::Interface::VirtualTemplate::Peer
        class PmPath; //type: Native::Interface::VirtualTemplate::PmPath
        class CarrierDelay; //type: Native::Interface::VirtualTemplate::CarrierDelay
        class ChannelGroup; //type: Native::Interface::VirtualTemplate::ChannelGroup
        class Ethernet; //type: Native::Interface::VirtualTemplate::Ethernet
        class Negotiation; //type: Native::Interface::VirtualTemplate::Negotiation
        class Synchronous; //type: Native::Interface::VirtualTemplate::Synchronous
        class Speed; //type: Native::Interface::VirtualTemplate::Speed
        class Plim; //type: Native::Interface::VirtualTemplate::Plim
        class Pppoe; //type: Native::Interface::VirtualTemplate::Pppoe
        class Service; //type: Native::Interface::VirtualTemplate::Service
        class Cdp; //type: Native::Interface::VirtualTemplate::Cdp
        class Nhrp; //type: Native::Interface::VirtualTemplate::Nhrp
        class Tunnel; //type: Native::Interface::VirtualTemplate::Tunnel
        class Crypto; //type: Native::Interface::VirtualTemplate::Crypto
        class Cts; //type: Native::Interface::VirtualTemplate::Cts
        class ServicePolicy; //type: Native::Interface::VirtualTemplate::ServicePolicy
        class Snmp; //type: Native::Interface::VirtualTemplate::Snmp
        class Ppp; //type: Native::Interface::VirtualTemplate::Ppp
        class Mab; //type: Native::Interface::VirtualTemplate::Mab
        class ZoneMember; //type: Native::Interface::VirtualTemplate::ZoneMember

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cdp> cdp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ChannelGroup> channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Crypto> crypto;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Mab> mab; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Negotiation> negotiation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Nhrp> nhrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim> plim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp> ppp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Speed> speed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Synchronous> synchronous;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel> tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ZoneMember> zone_member;
                class TypeEnum;
        class IfStateEnum;
        class ServiceInsertionEnum;
        class ChannelProtocolEnum;
        class DuplexEnum;

}; // Native::Interface::VirtualTemplate


class Native::Interface::VirtualTemplate::SwitchportConf : public Entity
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

}; // Native::Interface::VirtualTemplate::SwitchportConf


class Native::Interface::VirtualTemplate::Switchport : public Entity
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


}; // Native::Interface::VirtualTemplate::Switchport


class Native::Interface::VirtualTemplate::Arp : public Entity
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

}; // Native::Interface::VirtualTemplate::Arp


class Native::Interface::VirtualTemplate::Backup : public Entity
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

        class Delay; //type: Native::Interface::VirtualTemplate::Backup::Delay
        class Interface_; //type: Native::Interface::VirtualTemplate::Backup::Interface_
        class Load; //type: Native::Interface::VirtualTemplate::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Backup::Load> load;
        
}; // Native::Interface::VirtualTemplate::Backup


class Native::Interface::VirtualTemplate::Backup::Delay : public Entity
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

}; // Native::Interface::VirtualTemplate::Backup::Delay


class Native::Interface::VirtualTemplate::Backup::Interface_ : public Entity
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
        class AtmSubinterface; //type: Native::Interface::VirtualTemplate::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::VirtualTemplate::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::VirtualTemplate::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::VirtualTemplate::Backup::Interface_


class Native::Interface::VirtualTemplate::Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::VirtualTemplate::Backup::Interface_::AtmSubinterface


class Native::Interface::VirtualTemplate::Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::VirtualTemplate::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::VirtualTemplate::Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::VirtualTemplate::Backup::Interface_::LispSubinterface


class Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface


class Native::Interface::VirtualTemplate::Backup::Load : public Entity
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

}; // Native::Interface::VirtualTemplate::Backup::Load


class Native::Interface::VirtualTemplate::Cemoudp : public Entity
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

        class Reserve; //type: Native::Interface::VirtualTemplate::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::VirtualTemplate::Cemoudp


class Native::Interface::VirtualTemplate::Cemoudp::Reserve : public Entity
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

}; // Native::Interface::VirtualTemplate::Cemoudp::Reserve


class Native::Interface::VirtualTemplate::CwsTunnel : public Entity
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
        class Out; //type: Native::Interface::VirtualTemplate::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::CwsTunnel::Out> out;
        
}; // Native::Interface::VirtualTemplate::CwsTunnel


class Native::Interface::VirtualTemplate::CwsTunnel::Out : public Entity
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

}; // Native::Interface::VirtualTemplate::CwsTunnel::Out


class Native::Interface::VirtualTemplate::L2ProtocolTunnel : public Entity
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
        class DropThreshold; //type: Native::Interface::VirtualTemplate::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::VirtualTemplate::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::VirtualTemplate::L2ProtocolTunnel


class Native::Interface::VirtualTemplate::L2ProtocolTunnel::DropThreshold : public Entity
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

}; // Native::Interface::VirtualTemplate::L2ProtocolTunnel::DropThreshold


class Native::Interface::VirtualTemplate::L2ProtocolTunnel::ShutdownThreshold : public Entity
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

}; // Native::Interface::VirtualTemplate::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::VirtualTemplate::Encapsulation : public Entity
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

        class Dot1Q; //type: Native::Interface::VirtualTemplate::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::VirtualTemplate::Encapsulation::Isl
        class Ppp; //type: Native::Interface::VirtualTemplate::Encapsulation::Ppp
        class Slip; //type: Native::Interface::VirtualTemplate::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::VirtualTemplate::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::VirtualTemplate::Encapsulation


class Native::Interface::VirtualTemplate::Encapsulation::Dot1Q : public Entity
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

}; // Native::Interface::VirtualTemplate::Encapsulation::Dot1Q


class Native::Interface::VirtualTemplate::Encapsulation::Isl : public Entity
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

}; // Native::Interface::VirtualTemplate::Encapsulation::Isl


class Native::Interface::VirtualTemplate::Encapsulation::Ppp : public Entity
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


}; // Native::Interface::VirtualTemplate::Encapsulation::Ppp


class Native::Interface::VirtualTemplate::Encapsulation::Slip : public Entity
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


}; // Native::Interface::VirtualTemplate::Encapsulation::Slip


class Native::Interface::VirtualTemplate::Encapsulation::FrameRelay : public Entity
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

}; // Native::Interface::VirtualTemplate::Encapsulation::FrameRelay


class Native::Interface::VirtualTemplate::FairQueueConf : public Entity
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

}; // Native::Interface::VirtualTemplate::FairQueueConf


class Native::Interface::VirtualTemplate::FairQueue : public Entity
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

}; // Native::Interface::VirtualTemplate::FairQueue


class Native::Interface::VirtualTemplate::Flowcontrol : public Entity
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

}; // Native::Interface::VirtualTemplate::Flowcontrol


class Native::Interface::VirtualTemplate::Isis : public Entity
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

        YLeaf lsp_interval; //type: uint32
        YLeaf mesh_group; //type: one of uint32, enumeration
        YLeaf network; //type: NetworkEnum
        YLeaf protocol; //type: ProtocolEnum
        YLeaf retransmit_interval; //type: uint16
        YLeaf retransmit_throttle_interval; //type: uint16
        YLeaf tag; //type: uint32
        class AdjacencyFilter; //type: Native::Interface::VirtualTemplate::Isis::AdjacencyFilter
        class Advertise; //type: Native::Interface::VirtualTemplate::Isis::Advertise
        class Authentication; //type: Native::Interface::VirtualTemplate::Isis::Authentication
        class CircuitType; //type: Native::Interface::VirtualTemplate::Isis::CircuitType
        class CsnpInterval; //type: Native::Interface::VirtualTemplate::Isis::CsnpInterval
        class Hello; //type: Native::Interface::VirtualTemplate::Isis::Hello
        class HelloInterval; //type: Native::Interface::VirtualTemplate::Isis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::VirtualTemplate::Isis::HelloMultiplier
        class Ipv6; //type: Native::Interface::VirtualTemplate::Isis::Ipv6
        class Metric; //type: Native::Interface::VirtualTemplate::Isis::Metric
        class Password; //type: Native::Interface::VirtualTemplate::Isis::Password
        class Priority; //type: Native::Interface::VirtualTemplate::Isis::Priority
        class ThreeWayHandshake; //type: Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::CircuitType> circuit_type; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::CsnpInterval> csnp_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroupEnum;
        class NetworkEnum;
        class ProtocolEnum;

}; // Native::Interface::VirtualTemplate::Isis


class Native::Interface::VirtualTemplate::Isis::AdjacencyFilter : public Entity
{
    public:
        AdjacencyFilter();
        ~AdjacencyFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf match_all; //type: empty

}; // Native::Interface::VirtualTemplate::Isis::AdjacencyFilter


class Native::Interface::VirtualTemplate::Isis::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: empty

}; // Native::Interface::VirtualTemplate::Isis::Advertise


class Native::Interface::VirtualTemplate::Isis::Authentication : public Entity
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

        class Mode; //type: Native::Interface::VirtualTemplate::Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Authentication::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::VirtualTemplate::Isis::Authentication


class Native::Interface::VirtualTemplate::Isis::Authentication::Mode : public Entity
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

        class Md5; //type: Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::VirtualTemplate::Isis::Authentication::Mode


class Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5 : public Entity
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

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5


class Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text : public Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text


class Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain : public Entity
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

        YLeaf name; //type: string
        class KeyChainList; //type: Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain


class Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList : public Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum
        YLeaf name; //type: string

}; // Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly : public Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly


class Native::Interface::VirtualTemplate::Isis::CircuitType : public Entity
{
    public:
        CircuitType();
        ~CircuitType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        class LevelsEnum;

}; // Native::Interface::VirtualTemplate::Isis::CircuitType


class Native::Interface::VirtualTemplate::Isis::CsnpInterval : public Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        class CsnpIntervalList; //type: Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList> > csnp_interval_list;
        
}; // Native::Interface::VirtualTemplate::Isis::CsnpInterval


class Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList : public Entity
{
    public:
        CsnpIntervalList();
        ~CsnpIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint16
        class LevelsEnum;

}; // Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::VirtualTemplate::Isis::Hello : public Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Padding; //type: Native::Interface::VirtualTemplate::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::VirtualTemplate::Isis::Hello


class Native::Interface::VirtualTemplate::Isis::Hello::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty

}; // Native::Interface::VirtualTemplate::Isis::Hello::Padding


class Native::Interface::VirtualTemplate::Isis::HelloInterval : public Entity
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

        YLeaf value_; //type: one of uint16, enumeration
        class HelloIntervalList; //type: Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList> > hello_interval_list;
                class ValueEnum;

}; // Native::Interface::VirtualTemplate::Isis::HelloInterval


class Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList : public Entity
{
    public:
        HelloIntervalList();
        ~HelloIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint16, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList


class Native::Interface::VirtualTemplate::Isis::HelloMultiplier : public Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        class HelloMultiplierList; //type: Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList> > hello_multiplier_list;
        
}; // Native::Interface::VirtualTemplate::Isis::HelloMultiplier


class Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList : public Entity
{
    public:
        HelloMultiplierList();
        ~HelloMultiplierList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint16
        class LevelsEnum;

}; // Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::VirtualTemplate::Isis::Ipv6 : public Entity
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

        YLeaf tag; //type: uint32
        class Metric; //type: Native::Interface::VirtualTemplate::Isis::Ipv6::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Ipv6::Metric> metric;
        
}; // Native::Interface::VirtualTemplate::Isis::Ipv6


class Native::Interface::VirtualTemplate::Isis::Ipv6::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::VirtualTemplate::Isis::Ipv6::Metric


class Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList : public Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint32, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList


class Native::Interface::VirtualTemplate::Isis::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::VirtualTemplate::Isis::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::VirtualTemplate::Isis::Metric


class Native::Interface::VirtualTemplate::Isis::Metric::MetricList : public Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint32, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::VirtualTemplate::Isis::Metric::MetricList


class Native::Interface::VirtualTemplate::Isis::Password : public Entity
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

        YLeaf password; //type: string
        class PasswordList; //type: Native::Interface::VirtualTemplate::Isis::Password::PasswordList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Password::PasswordList> > password_list;
        
}; // Native::Interface::VirtualTemplate::Isis::Password


class Native::Interface::VirtualTemplate::Isis::Password::PasswordList : public Entity
{
    public:
        PasswordList();
        ~PasswordList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf password; //type: string
        class LevelsEnum;

}; // Native::Interface::VirtualTemplate::Isis::Password::PasswordList


class Native::Interface::VirtualTemplate::Isis::Priority : public Entity
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

        YLeaf value_; //type: uint8
        class PriorityList; //type: Native::Interface::VirtualTemplate::Isis::Priority::PriorityList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Isis::Priority::PriorityList> > priority_list;
        
}; // Native::Interface::VirtualTemplate::Isis::Priority


class Native::Interface::VirtualTemplate::Isis::Priority::PriorityList : public Entity
{
    public:
        PriorityList();
        ~PriorityList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint8
        class LevelsEnum;

}; // Native::Interface::VirtualTemplate::Isis::Priority::PriorityList


class Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake : public Entity
{
    public:
        ThreeWayHandshake();
        ~ThreeWayHandshake();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf implementor; //type: ImplementorEnum
        class ImplementorEnum;

}; // Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake


class Native::Interface::VirtualTemplate::KeepaliveSettings : public Entity
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

        class Keepalive; //type: Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::VirtualTemplate::KeepaliveSettings


class Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive : public Entity
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

}; // Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive


class Native::Interface::VirtualTemplate::Bfd : public Entity
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


}; // Native::Interface::VirtualTemplate::Bfd


class Native::Interface::VirtualTemplate::Bandwidth : public Entity
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
        class Receive; //type: Native::Interface::VirtualTemplate::Bandwidth::Receive
        class Inherit; //type: Native::Interface::VirtualTemplate::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Bandwidth::Receive> receive;
        
}; // Native::Interface::VirtualTemplate::Bandwidth


class Native::Interface::VirtualTemplate::Bandwidth::Receive : public Entity
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

}; // Native::Interface::VirtualTemplate::Bandwidth::Receive


class Native::Interface::VirtualTemplate::Bandwidth::Inherit : public Entity
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

}; // Native::Interface::VirtualTemplate::Bandwidth::Inherit


class Native::Interface::VirtualTemplate::Dampening : public Entity
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
        class Restart; //type: Native::Interface::VirtualTemplate::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Dampening::Restart> restart;
        
}; // Native::Interface::VirtualTemplate::Dampening


class Native::Interface::VirtualTemplate::Dampening::Restart : public Entity
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

}; // Native::Interface::VirtualTemplate::Dampening::Restart


class Native::Interface::VirtualTemplate::Domain : public Entity
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

}; // Native::Interface::VirtualTemplate::Domain


class Native::Interface::VirtualTemplate::HoldQueue : public Entity
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

}; // Native::Interface::VirtualTemplate::HoldQueue


class Native::Interface::VirtualTemplate::Mpls : public Entity
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


}; // Native::Interface::VirtualTemplate::Mpls


class Native::Interface::VirtualTemplate::IpVrf : public Entity
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

        class Ip; //type: Native::Interface::VirtualTemplate::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::IpVrf::Ip> ip;
        
}; // Native::Interface::VirtualTemplate::IpVrf


class Native::Interface::VirtualTemplate::IpVrf::Ip : public Entity
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

        class Vrf; //type: Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::VirtualTemplate::IpVrf::Ip


class Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf : public Entity
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

}; // Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf


class Native::Interface::VirtualTemplate::Vrf : public Entity
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

}; // Native::Interface::VirtualTemplate::Vrf


class Native::Interface::VirtualTemplate::Ip : public Entity
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
        class AccessGroup; //type: Native::Interface::VirtualTemplate::Ip::AccessGroup
        class Arp; //type: Native::Interface::VirtualTemplate::Ip::Arp
        class Vrf; //type: Native::Interface::VirtualTemplate::Ip::Vrf
        class NoAddress; //type: Native::Interface::VirtualTemplate::Ip::NoAddress
        class Address; //type: Native::Interface::VirtualTemplate::Ip::Address
        class HelloInterval; //type: Native::Interface::VirtualTemplate::Ip::HelloInterval
        class Authentication; //type: Native::Interface::VirtualTemplate::Ip::Authentication
        class HoldTime; //type: Native::Interface::VirtualTemplate::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::VirtualTemplate::Ip::HelperAddress
        class Pim; //type: Native::Interface::VirtualTemplate::Ip::Pim
        class Policy; //type: Native::Interface::VirtualTemplate::Ip::Policy
        class RouteCacheConf; //type: Native::Interface::VirtualTemplate::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::VirtualTemplate::Ip::RouteCache
        class Router; //type: Native::Interface::VirtualTemplate::Ip::Router
        class Tcp; //type: Native::Interface::VirtualTemplate::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::VirtualTemplate::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::VirtualTemplate::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::VirtualTemplate::Ip::SummaryAddress
        class Verify; //type: Native::Interface::VirtualTemplate::Ip::Verify
        class Igmp; //type: Native::Interface::VirtualTemplate::Ip::Igmp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Vrf> vrf;
        
}; // Native::Interface::VirtualTemplate::Ip


class Native::Interface::VirtualTemplate::Ip::AccessGroup : public Entity
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

        class In; //type: Native::Interface::VirtualTemplate::Ip::AccessGroup::In
        class Out; //type: Native::Interface::VirtualTemplate::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::VirtualTemplate::Ip::AccessGroup


class Native::Interface::VirtualTemplate::Ip::AccessGroup::In : public Entity
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

        class CommonAcl; //type: Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::VirtualTemplate::Ip::AccessGroup::In


class Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl


class Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl


class Native::Interface::VirtualTemplate::Ip::AccessGroup::Out : public Entity
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

        class CommonAcl; //type: Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::VirtualTemplate::Ip::AccessGroup::Out


class Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl


class Native::Interface::VirtualTemplate::Ip::Arp : public Entity
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

        class Inspection; //type: Native::Interface::VirtualTemplate::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::VirtualTemplate::Ip::Arp


class Native::Interface::VirtualTemplate::Ip::Arp::Inspection : public Entity
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
        class Limit; //type: Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::VirtualTemplate::Ip::Arp::Inspection


class Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit


class Native::Interface::VirtualTemplate::Ip::Vrf : public Entity
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
        class Forwarding; //type: Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::VirtualTemplate::Ip::Vrf


class Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding


class Native::Interface::VirtualTemplate::Ip::NoAddress : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::NoAddress


class Native::Interface::VirtualTemplate::Ip::Address : public Entity
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
        class Primary; //type: Native::Interface::VirtualTemplate::Ip::Address::Primary
        class Secondary; //type: Native::Interface::VirtualTemplate::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::VirtualTemplate::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::VirtualTemplate::Ip::Address


class Native::Interface::VirtualTemplate::Ip::Address::Primary : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Address::Primary


class Native::Interface::VirtualTemplate::Ip::Address::Secondary : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Address::Secondary


class Native::Interface::VirtualTemplate::Ip::Address::Dhcp : public Entity
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
        class ClientId; //type: Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::VirtualTemplate::Ip::Address::Dhcp


class Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId


class Native::Interface::VirtualTemplate::Ip::HelloInterval : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::HelloInterval


class Native::Interface::VirtualTemplate::Ip::Authentication : public Entity
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

        class KeyChain; //type: Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::VirtualTemplate::Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::VirtualTemplate::Ip::Authentication


class Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain


class Native::Interface::VirtualTemplate::Ip::Authentication::Mode : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Authentication::Mode


class Native::Interface::VirtualTemplate::Ip::HoldTime : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::HoldTime


class Native::Interface::VirtualTemplate::Ip::HelperAddress : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::HelperAddress


class Native::Interface::VirtualTemplate::Ip::Pim : public Entity
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


}; // Native::Interface::VirtualTemplate::Ip::Pim


class Native::Interface::VirtualTemplate::Ip::Policy : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Policy


class Native::Interface::VirtualTemplate::Ip::RouteCacheConf : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::RouteCacheConf


class Native::Interface::VirtualTemplate::Ip::RouteCache : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::RouteCache


class Native::Interface::VirtualTemplate::Ip::Router : public Entity
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

        class Isis; //type: Native::Interface::VirtualTemplate::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::VirtualTemplate::Ip::Router


class Native::Interface::VirtualTemplate::Ip::Router::Isis : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Router::Isis


class Native::Interface::VirtualTemplate::Ip::Tcp : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Tcp


class Native::Interface::VirtualTemplate::Ip::VirtualReassembly : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::VirtualReassembly


class Native::Interface::VirtualTemplate::Ip::Dhcp : public Entity
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


}; // Native::Interface::VirtualTemplate::Ip::Dhcp


class Native::Interface::VirtualTemplate::Ip::SummaryAddress : public Entity
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

        class Eigrp; //type: Native::Interface::VirtualTemplate::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::VirtualTemplate::Ip::SummaryAddress


class Native::Interface::VirtualTemplate::Ip::SummaryAddress::Eigrp : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::SummaryAddress::Eigrp


class Native::Interface::VirtualTemplate::Ip::Verify : public Entity
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

        class Source; //type: Native::Interface::VirtualTemplate::Ip::Verify::Source
        class Unicast; //type: Native::Interface::VirtualTemplate::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::VirtualTemplate::Ip::Verify


class Native::Interface::VirtualTemplate::Ip::Verify::Source : public Entity
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

        class Vlan; //type: Native::Interface::VirtualTemplate::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::VirtualTemplate::Ip::Verify::Source


class Native::Interface::VirtualTemplate::Ip::Verify::Source::Vlan : public Entity
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

        class DhcpSnooping; //type: Native::Interface::VirtualTemplate::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::VirtualTemplate::Ip::Verify::Source::Vlan


class Native::Interface::VirtualTemplate::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::VirtualTemplate::Ip::Verify::Unicast : public Entity
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

        class ReversePath; //type: Native::Interface::VirtualTemplate::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::VirtualTemplate::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::VirtualTemplate::Ip::Verify::Unicast


class Native::Interface::VirtualTemplate::Ip::Verify::Unicast::ReversePath : public Entity
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


}; // Native::Interface::VirtualTemplate::Ip::Verify::Unicast::ReversePath


class Native::Interface::VirtualTemplate::Ip::Verify::Unicast::Source : public Entity
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

}; // Native::Interface::VirtualTemplate::Ip::Verify::Unicast::Source


class Native::Interface::VirtualTemplate::Ip::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        class StaticGroup; //type: Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup
        class JoinGroup; //type: Native::Interface::VirtualTemplate::Ip::Igmp::JoinGroup

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Igmp::JoinGroup> > join_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup> static_group;
        
}; // Native::Interface::VirtualTemplate::Ip::Igmp


class Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup : public Entity
{
    public:
        StaticGroup();
        ~StaticGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Groups; //type: Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup::Groups
        class ClassMap; //type: Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup::ClassMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup::ClassMap> > class_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup::Groups> > groups;
        
}; // Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup


class Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of string, enumeration
        class NameEnum;

}; // Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup::Groups


class Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup::ClassMap : public Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to Cisco_IOS_XE_native::Native::Policy::ClassMap::name)
        YLeaf id;

}; // Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup::ClassMap


class Native::Interface::VirtualTemplate::Ip::Igmp::JoinGroup : public Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_group_address; //type: string
        YLeaf source; //type: string

}; // Native::Interface::VirtualTemplate::Ip::Igmp::JoinGroup


class Native::Interface::VirtualTemplate::Ipv6 : public Entity
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
        class DestinationGuard; //type: Native::Interface::VirtualTemplate::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::VirtualTemplate::Ipv6::Dhcp
        class Address; //type: Native::Interface::VirtualTemplate::Ipv6::Address
        class Nd; //type: Native::Interface::VirtualTemplate::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::VirtualTemplate::Ipv6::TrafficFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::VirtualTemplate::Ipv6


class Native::Interface::VirtualTemplate::Ipv6::DestinationGuard : public Entity
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

}; // Native::Interface::VirtualTemplate::Ipv6::DestinationGuard


class Native::Interface::VirtualTemplate::Ipv6::Dhcp : public Entity
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


}; // Native::Interface::VirtualTemplate::Ipv6::Dhcp


class Native::Interface::VirtualTemplate::Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::VirtualTemplate::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::VirtualTemplate::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::VirtualTemplate::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::VirtualTemplate::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::VirtualTemplate::Ipv6::Address


class Native::Interface::VirtualTemplate::Ipv6::Address::Dhcp : public Entity
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

}; // Native::Interface::VirtualTemplate::Ipv6::Address::Dhcp


class Native::Interface::VirtualTemplate::Ipv6::Address::Autoconfig : public Entity
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

}; // Native::Interface::VirtualTemplate::Ipv6::Address::Autoconfig


class Native::Interface::VirtualTemplate::Ipv6::Address::PrefixList : public Entity
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

}; // Native::Interface::VirtualTemplate::Ipv6::Address::PrefixList


class Native::Interface::VirtualTemplate::Ipv6::Address::LinkLocalAddress : public Entity
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

}; // Native::Interface::VirtualTemplate::Ipv6::Address::LinkLocalAddress


class Native::Interface::VirtualTemplate::Ipv6::Nd : public Entity
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


}; // Native::Interface::VirtualTemplate::Ipv6::Nd


class Native::Interface::VirtualTemplate::Ipv6::TrafficFilter : public Entity
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

}; // Native::Interface::VirtualTemplate::Ipv6::TrafficFilter


class Native::Interface::VirtualTemplate::Logging : public Entity
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

        class Event; //type: Native::Interface::VirtualTemplate::Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Logging::Event> event;
        
}; // Native::Interface::VirtualTemplate::Logging


class Native::Interface::VirtualTemplate::Logging::Event : public Entity
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
        class SpanningTree; //type: Native::Interface::VirtualTemplate::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::VirtualTemplate::Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::VirtualTemplate::Logging::Event

class Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Ospfv3::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::VirtualTemplate::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf serial;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf vpn;

};

class Native::Interface::VirtualTemplate::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::VirtualTemplate::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::VirtualTemplate::ChannelProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf pagp;

};

class Native::Interface::VirtualTemplate::DuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf full;
        static const Enum::YLeaf half;

};

class Native::Interface::VirtualTemplate::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::VirtualTemplate::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::VirtualTemplate::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::VirtualTemplate::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::VirtualTemplate::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::VirtualTemplate::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::VirtualTemplate::Isis::MeshGroupEnum : public Enum
{
    public:
        static const Enum::YLeaf blocked;

};

class Native::Interface::VirtualTemplate::Isis::NetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf point_to_point;

};

class Native::Interface::VirtualTemplate::Isis::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf shutdown;

};

class Native::Interface::VirtualTemplate::Isis::CircuitType::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2_only;

};

class Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::VirtualTemplate::Isis::HelloInterval::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::VirtualTemplate::Isis::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::VirtualTemplate::Isis::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::VirtualTemplate::Isis::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::VirtualTemplate::Isis::Password::PasswordList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::ImplementorEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf ietf;

};

class Native::Interface::VirtualTemplate::HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::VirtualTemplate::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};

class Native::Interface::VirtualTemplate::Ip::Igmp::StaticGroup::Groups::NameEnum : public Enum
{
    public:
        static const Enum::YLeaf Y__STAR__;

};

class Native::Interface::VirtualTemplate::Ipv6::TrafficFilter::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_64_ */

