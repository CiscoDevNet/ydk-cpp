#ifndef _CISCO_IOS_XE_NATIVE_18_
#define _CISCO_IOS_XE_NATIVE_18_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_17.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::AppnavCompress::Peer::Default_::Ip::Address : public Entity
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

        YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::AppnavCompress::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::AppnavCompress::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::AppnavCompress::Peer::Default_::Ip::Address


class Native::Interface::AppnavCompress::Peer::Default_::Ip::Address::DhcpPool : public Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pools; //type: string

}; // Native::Interface::AppnavCompress::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::AppnavCompress::Peer::Default_::Ip::Address::Pool : public Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pools; //type: string

}; // Native::Interface::AppnavCompress::Peer::Default_::Ip::Address::Pool


class Native::Interface::AppnavCompress::PmPath : public Entity
{
    public:
        PmPath();
        ~PmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf interface_id; //type: uint8

}; // Native::Interface::AppnavCompress::PmPath


class Native::Interface::AppnavUncompress : public Entity
{
    public:
        AppnavUncompress();
        ~AppnavUncompress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        class SwitchportConf; //type: Native::Interface::AppnavUncompress::SwitchportConf
        class Switchport; //type: Native::Interface::AppnavUncompress::Switchport
        class Arp; //type: Native::Interface::AppnavUncompress::Arp
        class Backup; //type: Native::Interface::AppnavUncompress::Backup
        class Cemoudp; //type: Native::Interface::AppnavUncompress::Cemoudp
        class CwsTunnel; //type: Native::Interface::AppnavUncompress::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::AppnavUncompress::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::AppnavUncompress::Encapsulation
        class FairQueueConf; //type: Native::Interface::AppnavUncompress::FairQueueConf
        class FairQueue; //type: Native::Interface::AppnavUncompress::FairQueue
        class Flowcontrol; //type: Native::Interface::AppnavUncompress::Flowcontrol
        class Isis; //type: Native::Interface::AppnavUncompress::Isis
        class KeepaliveSettings; //type: Native::Interface::AppnavUncompress::KeepaliveSettings
        class Bfd; //type: Native::Interface::AppnavUncompress::Bfd
        class Bandwidth; //type: Native::Interface::AppnavUncompress::Bandwidth
        class Dampening; //type: Native::Interface::AppnavUncompress::Dampening
        class Domain; //type: Native::Interface::AppnavUncompress::Domain
        class HoldQueue; //type: Native::Interface::AppnavUncompress::HoldQueue
        class Mpls; //type: Native::Interface::AppnavUncompress::Mpls
        class IpVrf; //type: Native::Interface::AppnavUncompress::IpVrf
        class Vrf; //type: Native::Interface::AppnavUncompress::Vrf
        class Ip; //type: Native::Interface::AppnavUncompress::Ip
        class Ipv6; //type: Native::Interface::AppnavUncompress::Ipv6
        class Logging; //type: Native::Interface::AppnavUncompress::Logging
        class Mdix; //type: Native::Interface::AppnavUncompress::Mdix
        class Mop; //type: Native::Interface::AppnavUncompress::Mop
        class Interface_Qos; //type: Native::Interface::AppnavUncompress::Interface_Qos
        class Standby; //type: Native::Interface::AppnavUncompress::Standby
        class AccessSession; //type: Native::Interface::AppnavUncompress::AccessSession
        class StormControl; //type: Native::Interface::AppnavUncompress::StormControl
        class Trust; //type: Native::Interface::AppnavUncompress::Trust
        class Utd; //type: Native::Interface::AppnavUncompress::Utd
        class PriorityQueue; //type: Native::Interface::AppnavUncompress::PriorityQueue
        class RcvQueue; //type: Native::Interface::AppnavUncompress::RcvQueue
        class Peer; //type: Native::Interface::AppnavUncompress::Peer
        class PmPath; //type: Native::Interface::AppnavUncompress::PmPath

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Vrf> vrf;
                class IfStateEnum;
        class ServiceInsertionEnum;

}; // Native::Interface::AppnavUncompress


class Native::Interface::AppnavUncompress::SwitchportConf : public Entity
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

}; // Native::Interface::AppnavUncompress::SwitchportConf


class Native::Interface::AppnavUncompress::Switchport : public Entity
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


}; // Native::Interface::AppnavUncompress::Switchport


class Native::Interface::AppnavUncompress::Arp : public Entity
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

}; // Native::Interface::AppnavUncompress::Arp


class Native::Interface::AppnavUncompress::Backup : public Entity
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

        class Delay; //type: Native::Interface::AppnavUncompress::Backup::Delay
        class Interface_; //type: Native::Interface::AppnavUncompress::Backup::Interface_
        class Load; //type: Native::Interface::AppnavUncompress::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Backup::Load> load;
        
}; // Native::Interface::AppnavUncompress::Backup


class Native::Interface::AppnavUncompress::Backup::Delay : public Entity
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

}; // Native::Interface::AppnavUncompress::Backup::Delay


class Native::Interface::AppnavUncompress::Backup::Interface_ : public Entity
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
        class AtmSubinterface; //type: Native::Interface::AppnavUncompress::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::AppnavUncompress::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::AppnavUncompress::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::AppnavUncompress::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::AppnavUncompress::Backup::Interface_


class Native::Interface::AppnavUncompress::Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::AppnavUncompress::Backup::Interface_::AtmSubinterface


class Native::Interface::AppnavUncompress::Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::AppnavUncompress::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::AppnavUncompress::Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::AppnavUncompress::Backup::Interface_::LispSubinterface


class Native::Interface::AppnavUncompress::Backup::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::AppnavUncompress::Backup::Interface_::PortChannelSubinterface


class Native::Interface::AppnavUncompress::Backup::Load : public Entity
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

}; // Native::Interface::AppnavUncompress::Backup::Load


class Native::Interface::AppnavUncompress::Cemoudp : public Entity
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

        class Reserve; //type: Native::Interface::AppnavUncompress::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::AppnavUncompress::Cemoudp


class Native::Interface::AppnavUncompress::Cemoudp::Reserve : public Entity
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

}; // Native::Interface::AppnavUncompress::Cemoudp::Reserve


class Native::Interface::AppnavUncompress::CwsTunnel : public Entity
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
        class Out; //type: Native::Interface::AppnavUncompress::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::CwsTunnel::Out> out;
        
}; // Native::Interface::AppnavUncompress::CwsTunnel


class Native::Interface::AppnavUncompress::CwsTunnel::Out : public Entity
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

}; // Native::Interface::AppnavUncompress::CwsTunnel::Out


class Native::Interface::AppnavUncompress::L2ProtocolTunnel : public Entity
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
        class DropThreshold; //type: Native::Interface::AppnavUncompress::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::AppnavUncompress::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::AppnavUncompress::L2ProtocolTunnel


class Native::Interface::AppnavUncompress::L2ProtocolTunnel::DropThreshold : public Entity
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

}; // Native::Interface::AppnavUncompress::L2ProtocolTunnel::DropThreshold


class Native::Interface::AppnavUncompress::L2ProtocolTunnel::ShutdownThreshold : public Entity
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

}; // Native::Interface::AppnavUncompress::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::AppnavUncompress::Encapsulation : public Entity
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

        class Dot1Q; //type: Native::Interface::AppnavUncompress::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::AppnavUncompress::Encapsulation::Isl
        class Ppp; //type: Native::Interface::AppnavUncompress::Encapsulation::Ppp
        class Slip; //type: Native::Interface::AppnavUncompress::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::AppnavUncompress::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::AppnavUncompress::Encapsulation


class Native::Interface::AppnavUncompress::Encapsulation::Dot1Q : public Entity
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

}; // Native::Interface::AppnavUncompress::Encapsulation::Dot1Q


class Native::Interface::AppnavUncompress::Encapsulation::Isl : public Entity
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

}; // Native::Interface::AppnavUncompress::Encapsulation::Isl


class Native::Interface::AppnavUncompress::Encapsulation::Ppp : public Entity
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


}; // Native::Interface::AppnavUncompress::Encapsulation::Ppp


class Native::Interface::AppnavUncompress::Encapsulation::Slip : public Entity
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


}; // Native::Interface::AppnavUncompress::Encapsulation::Slip


class Native::Interface::AppnavUncompress::Encapsulation::FrameRelay : public Entity
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

}; // Native::Interface::AppnavUncompress::Encapsulation::FrameRelay


class Native::Interface::AppnavUncompress::FairQueueConf : public Entity
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

}; // Native::Interface::AppnavUncompress::FairQueueConf


class Native::Interface::AppnavUncompress::FairQueue : public Entity
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

}; // Native::Interface::AppnavUncompress::FairQueue


class Native::Interface::AppnavUncompress::Flowcontrol : public Entity
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

}; // Native::Interface::AppnavUncompress::Flowcontrol


class Native::Interface::AppnavUncompress::Isis : public Entity
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


}; // Native::Interface::AppnavUncompress::Isis


class Native::Interface::AppnavUncompress::KeepaliveSettings : public Entity
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

        class Keepalive; //type: Native::Interface::AppnavUncompress::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::AppnavUncompress::KeepaliveSettings


class Native::Interface::AppnavUncompress::KeepaliveSettings::Keepalive : public Entity
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

}; // Native::Interface::AppnavUncompress::KeepaliveSettings::Keepalive


class Native::Interface::AppnavUncompress::Bfd : public Entity
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


}; // Native::Interface::AppnavUncompress::Bfd


class Native::Interface::AppnavUncompress::Bandwidth : public Entity
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
        class Receive; //type: Native::Interface::AppnavUncompress::Bandwidth::Receive
        class Inherit; //type: Native::Interface::AppnavUncompress::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Bandwidth::Receive> receive;
        
}; // Native::Interface::AppnavUncompress::Bandwidth


class Native::Interface::AppnavUncompress::Bandwidth::Receive : public Entity
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

}; // Native::Interface::AppnavUncompress::Bandwidth::Receive


class Native::Interface::AppnavUncompress::Bandwidth::Inherit : public Entity
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

}; // Native::Interface::AppnavUncompress::Bandwidth::Inherit


class Native::Interface::AppnavUncompress::Dampening : public Entity
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
        class Restart; //type: Native::Interface::AppnavUncompress::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Dampening::Restart> restart;
        
}; // Native::Interface::AppnavUncompress::Dampening


class Native::Interface::AppnavUncompress::Dampening::Restart : public Entity
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

}; // Native::Interface::AppnavUncompress::Dampening::Restart


class Native::Interface::AppnavUncompress::Domain : public Entity
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

}; // Native::Interface::AppnavUncompress::Domain


class Native::Interface::AppnavUncompress::HoldQueue : public Entity
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

}; // Native::Interface::AppnavUncompress::HoldQueue


class Native::Interface::AppnavUncompress::Mpls : public Entity
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


}; // Native::Interface::AppnavUncompress::Mpls


class Native::Interface::AppnavUncompress::IpVrf : public Entity
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

        class Ip; //type: Native::Interface::AppnavUncompress::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::IpVrf::Ip> ip;
        
}; // Native::Interface::AppnavUncompress::IpVrf


class Native::Interface::AppnavUncompress::IpVrf::Ip : public Entity
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

        class Vrf; //type: Native::Interface::AppnavUncompress::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::AppnavUncompress::IpVrf::Ip


class Native::Interface::AppnavUncompress::IpVrf::Ip::Vrf : public Entity
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

}; // Native::Interface::AppnavUncompress::IpVrf::Ip::Vrf


class Native::Interface::AppnavUncompress::Vrf : public Entity
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

}; // Native::Interface::AppnavUncompress::Vrf


class Native::Interface::AppnavUncompress::Ip : public Entity
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
        class AccessGroup; //type: Native::Interface::AppnavUncompress::Ip::AccessGroup
        class Arp; //type: Native::Interface::AppnavUncompress::Ip::Arp
        class Vrf; //type: Native::Interface::AppnavUncompress::Ip::Vrf
        class NoAddress; //type: Native::Interface::AppnavUncompress::Ip::NoAddress
        class Address; //type: Native::Interface::AppnavUncompress::Ip::Address
        class HelloInterval; //type: Native::Interface::AppnavUncompress::Ip::HelloInterval
        class Authentication; //type: Native::Interface::AppnavUncompress::Ip::Authentication
        class HoldTime; //type: Native::Interface::AppnavUncompress::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::AppnavUncompress::Ip::HelperAddress
        class Pim; //type: Native::Interface::AppnavUncompress::Ip::Pim
        class Policy; //type: Native::Interface::AppnavUncompress::Ip::Policy
        class RouteCacheConf; //type: Native::Interface::AppnavUncompress::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::AppnavUncompress::Ip::RouteCache
        class Router; //type: Native::Interface::AppnavUncompress::Ip::Router
        class Tcp; //type: Native::Interface::AppnavUncompress::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::AppnavUncompress::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::AppnavUncompress::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::AppnavUncompress::Ip::SummaryAddress
        class Verify; //type: Native::Interface::AppnavUncompress::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Vrf> vrf;
        
}; // Native::Interface::AppnavUncompress::Ip


class Native::Interface::AppnavUncompress::Ip::AccessGroup : public Entity
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

        class In; //type: Native::Interface::AppnavUncompress::Ip::AccessGroup::In
        class Out; //type: Native::Interface::AppnavUncompress::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::AppnavUncompress::Ip::AccessGroup


class Native::Interface::AppnavUncompress::Ip::AccessGroup::In : public Entity
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

        class CommonAcl; //type: Native::Interface::AppnavUncompress::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::AppnavUncompress::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::AppnavUncompress::Ip::AccessGroup::In


class Native::Interface::AppnavUncompress::Ip::AccessGroup::In::CommonAcl : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::AccessGroup::In::CommonAcl


class Native::Interface::AppnavUncompress::Ip::AccessGroup::In::Acl : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::AccessGroup::In::Acl


class Native::Interface::AppnavUncompress::Ip::AccessGroup::Out : public Entity
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

        class CommonAcl; //type: Native::Interface::AppnavUncompress::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::AppnavUncompress::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::AppnavUncompress::Ip::AccessGroup::Out


class Native::Interface::AppnavUncompress::Ip::AccessGroup::Out::CommonAcl : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::AppnavUncompress::Ip::AccessGroup::Out::Acl : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::AccessGroup::Out::Acl


class Native::Interface::AppnavUncompress::Ip::Arp : public Entity
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

        class Inspection; //type: Native::Interface::AppnavUncompress::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::AppnavUncompress::Ip::Arp


class Native::Interface::AppnavUncompress::Ip::Arp::Inspection : public Entity
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
        class Limit; //type: Native::Interface::AppnavUncompress::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::AppnavUncompress::Ip::Arp::Inspection


class Native::Interface::AppnavUncompress::Ip::Arp::Inspection::Limit : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Arp::Inspection::Limit


class Native::Interface::AppnavUncompress::Ip::Vrf : public Entity
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
        class Forwarding; //type: Native::Interface::AppnavUncompress::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::AppnavUncompress::Ip::Vrf


class Native::Interface::AppnavUncompress::Ip::Vrf::Forwarding : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Vrf::Forwarding


class Native::Interface::AppnavUncompress::Ip::NoAddress : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::NoAddress


class Native::Interface::AppnavUncompress::Ip::Address : public Entity
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
        class Primary; //type: Native::Interface::AppnavUncompress::Ip::Address::Primary
        class Secondary; //type: Native::Interface::AppnavUncompress::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::AppnavUncompress::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::AppnavUncompress::Ip::Address


class Native::Interface::AppnavUncompress::Ip::Address::Primary : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Address::Primary


class Native::Interface::AppnavUncompress::Ip::Address::Secondary : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Address::Secondary


class Native::Interface::AppnavUncompress::Ip::Address::Dhcp : public Entity
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
        class ClientId; //type: Native::Interface::AppnavUncompress::Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::AppnavUncompress::Ip::Address::Dhcp


class Native::Interface::AppnavUncompress::Ip::Address::Dhcp::ClientId : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Address::Dhcp::ClientId


class Native::Interface::AppnavUncompress::Ip::HelloInterval : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::HelloInterval


class Native::Interface::AppnavUncompress::Ip::Authentication : public Entity
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

        class KeyChain; //type: Native::Interface::AppnavUncompress::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::AppnavUncompress::Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::AppnavUncompress::Ip::Authentication


class Native::Interface::AppnavUncompress::Ip::Authentication::KeyChain : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Authentication::KeyChain


class Native::Interface::AppnavUncompress::Ip::Authentication::Mode : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Authentication::Mode


class Native::Interface::AppnavUncompress::Ip::HoldTime : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::HoldTime


class Native::Interface::AppnavUncompress::Ip::HelperAddress : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::HelperAddress


class Native::Interface::AppnavUncompress::Ip::Pim : public Entity
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


}; // Native::Interface::AppnavUncompress::Ip::Pim


class Native::Interface::AppnavUncompress::Ip::Policy : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Policy


class Native::Interface::AppnavUncompress::Ip::RouteCacheConf : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::RouteCacheConf


class Native::Interface::AppnavUncompress::Ip::RouteCache : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::RouteCache


class Native::Interface::AppnavUncompress::Ip::Router : public Entity
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

        class Isis; //type: Native::Interface::AppnavUncompress::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::AppnavUncompress::Ip::Router


class Native::Interface::AppnavUncompress::Ip::Router::Isis : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Router::Isis


class Native::Interface::AppnavUncompress::Ip::Tcp : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Tcp


class Native::Interface::AppnavUncompress::Ip::VirtualReassembly : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::VirtualReassembly


class Native::Interface::AppnavUncompress::Ip::Dhcp : public Entity
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


}; // Native::Interface::AppnavUncompress::Ip::Dhcp


class Native::Interface::AppnavUncompress::Ip::SummaryAddress : public Entity
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

        class Eigrp; //type: Native::Interface::AppnavUncompress::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::AppnavUncompress::Ip::SummaryAddress


class Native::Interface::AppnavUncompress::Ip::SummaryAddress::Eigrp : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::SummaryAddress::Eigrp


class Native::Interface::AppnavUncompress::Ip::Verify : public Entity
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

        class Source; //type: Native::Interface::AppnavUncompress::Ip::Verify::Source
        class Unicast; //type: Native::Interface::AppnavUncompress::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::AppnavUncompress::Ip::Verify


class Native::Interface::AppnavUncompress::Ip::Verify::Source : public Entity
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

        class Vlan; //type: Native::Interface::AppnavUncompress::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::AppnavUncompress::Ip::Verify::Source


class Native::Interface::AppnavUncompress::Ip::Verify::Source::Vlan : public Entity
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

        class DhcpSnooping; //type: Native::Interface::AppnavUncompress::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::AppnavUncompress::Ip::Verify::Source::Vlan


class Native::Interface::AppnavUncompress::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::AppnavUncompress::Ip::Verify::Unicast : public Entity
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

        class ReversePath; //type: Native::Interface::AppnavUncompress::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::AppnavUncompress::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::AppnavUncompress::Ip::Verify::Unicast


class Native::Interface::AppnavUncompress::Ip::Verify::Unicast::ReversePath : public Entity
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


}; // Native::Interface::AppnavUncompress::Ip::Verify::Unicast::ReversePath


class Native::Interface::AppnavUncompress::Ip::Verify::Unicast::Source : public Entity
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

}; // Native::Interface::AppnavUncompress::Ip::Verify::Unicast::Source


class Native::Interface::AppnavUncompress::Ipv6 : public Entity
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
        class DestinationGuard; //type: Native::Interface::AppnavUncompress::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::AppnavUncompress::Ipv6::Dhcp
        class Address; //type: Native::Interface::AppnavUncompress::Ipv6::Address
        class Nd; //type: Native::Interface::AppnavUncompress::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::AppnavUncompress::Ipv6::TrafficFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::AppnavUncompress::Ipv6


class Native::Interface::AppnavUncompress::Ipv6::DestinationGuard : public Entity
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

}; // Native::Interface::AppnavUncompress::Ipv6::DestinationGuard


class Native::Interface::AppnavUncompress::Ipv6::Dhcp : public Entity
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


}; // Native::Interface::AppnavUncompress::Ipv6::Dhcp


class Native::Interface::AppnavUncompress::Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::AppnavUncompress::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::AppnavUncompress::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::AppnavUncompress::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::AppnavUncompress::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::AppnavUncompress::Ipv6::Address


class Native::Interface::AppnavUncompress::Ipv6::Address::Dhcp : public Entity
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

}; // Native::Interface::AppnavUncompress::Ipv6::Address::Dhcp


class Native::Interface::AppnavUncompress::Ipv6::Address::Autoconfig : public Entity
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

}; // Native::Interface::AppnavUncompress::Ipv6::Address::Autoconfig


class Native::Interface::AppnavUncompress::Ipv6::Address::PrefixList : public Entity
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

}; // Native::Interface::AppnavUncompress::Ipv6::Address::PrefixList


class Native::Interface::AppnavUncompress::Ipv6::Address::LinkLocalAddress : public Entity
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

}; // Native::Interface::AppnavUncompress::Ipv6::Address::LinkLocalAddress


class Native::Interface::AppnavUncompress::Ipv6::Nd : public Entity
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


}; // Native::Interface::AppnavUncompress::Ipv6::Nd


class Native::Interface::AppnavUncompress::Ipv6::TrafficFilter : public Entity
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

}; // Native::Interface::AppnavUncompress::Ipv6::TrafficFilter


class Native::Interface::AppnavUncompress::Logging : public Entity
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

        class Event; //type: Native::Interface::AppnavUncompress::Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Logging::Event> event;
        
}; // Native::Interface::AppnavUncompress::Logging


class Native::Interface::AppnavUncompress::Logging::Event : public Entity
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
        class SpanningTree; //type: Native::Interface::AppnavUncompress::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::AppnavUncompress::Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::AppnavUncompress::Logging::Event


class Native::Interface::AppnavUncompress::Logging::Event::SpanningTree : public Entity
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

}; // Native::Interface::AppnavUncompress::Logging::Event::SpanningTree


class Native::Interface::AppnavUncompress::Logging::Event::SubifLinkStatus : public Entity
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

}; // Native::Interface::AppnavUncompress::Logging::Event::SubifLinkStatus


class Native::Interface::AppnavUncompress::Mdix : public Entity
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

}; // Native::Interface::AppnavUncompress::Mdix


class Native::Interface::AppnavUncompress::Mop : public Entity
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

}; // Native::Interface::AppnavUncompress::Mop


class Native::Interface::AppnavUncompress::Interface_Qos : public Entity
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

        class Trust; //type: Native::Interface::AppnavUncompress::Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Interface_Qos::Trust> trust;
        
}; // Native::Interface::AppnavUncompress::Interface_Qos


class Native::Interface::AppnavUncompress::Interface_Qos::Trust : public Entity
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

}; // Native::Interface::AppnavUncompress::Interface_Qos::Trust


class Native::Interface::AppnavUncompress::Standby : public Entity
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
        class Delay; //type: Native::Interface::AppnavUncompress::Standby::Delay
        class UseBia; //type: Native::Interface::AppnavUncompress::Standby::UseBia
        class StandbyList; //type: Native::Interface::AppnavUncompress::Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::AppnavUncompress::Standby


class Native::Interface::AppnavUncompress::Standby::Delay : public Entity
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

}; // Native::Interface::AppnavUncompress::Standby::Delay


class Native::Interface::AppnavUncompress::Standby::UseBia : public Entity
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

        class Scope; //type: Native::Interface::AppnavUncompress::Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::AppnavUncompress::Standby::UseBia


class Native::Interface::AppnavUncompress::Standby::UseBia::Scope : public Entity
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

}; // Native::Interface::AppnavUncompress::Standby::UseBia::Scope


class Native::Interface::AppnavUncompress::Standby::StandbyList : public Entity
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
        class Authentication; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::AppnavUncompress::Standby::StandbyList


class Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication : public Entity
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
        class Md5; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication


class Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication::Md5


class Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::AppnavUncompress::Standby::StandbyList::Ip : public Entity
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

        YLeaf address; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Ip


class Native::Interface::AppnavUncompress::Standby::StandbyList::Preempt : public Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Preempt


class Native::Interface::AppnavUncompress::Standby::StandbyList::Preempt::Delay : public Entity
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
        YLeaf sync; //type: uint16

}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Preempt::Delay


class Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect : public Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unknown; //type: empty
        class Advertisement; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect


class Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement : public Entity
{
    public:
        Advertisement();
        ~Advertisement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authentication; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
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

        class Md5; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf advertisement; //type: uint16
        YLeaf holddown; //type: uint16

}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Timers


class Native::Interface::AppnavUncompress::Standby::StandbyList::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelloInterval; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::AppnavUncompress::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Timers


class Native::Interface::AppnavUncompress::Standby::StandbyList::Timers::HelloInterval : public Entity
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

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::AppnavUncompress::Standby::StandbyList::Timers::HoldTime : public Entity
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

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Timers::HoldTime


class Native::Interface::AppnavUncompress::Standby::StandbyList::Track : public Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf decrement; //type: uint8
        YLeaf shutdown; //type: empty

}; // Native::Interface::AppnavUncompress::Standby::StandbyList::Track


class Native::Interface::AppnavUncompress::AccessSession : public Entity
{
    public:
        AccessSession();
        ~AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf closed; //type: empty
        YLeaf host_mode; //type: HostModeEnum
        class PortControl; //type: Native::Interface::AppnavUncompress::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::AppnavUncompress::AccessSession


class Native::Interface::AppnavUncompress::AccessSession::PortControl : public Entity
{
    public:
        PortControl();
        ~PortControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: empty

}; // Native::Interface::AppnavUncompress::AccessSession::PortControl


class Native::Interface::AppnavUncompress::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::AppnavUncompress::StormControl::Action
        class Broadcast; //type: Native::Interface::AppnavUncompress::StormControl::Broadcast
        class Multicast; //type: Native::Interface::AppnavUncompress::StormControl::Multicast
        class Unicast; //type: Native::Interface::AppnavUncompress::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Unicast> unicast;
        
}; // Native::Interface::AppnavUncompress::StormControl


class Native::Interface::AppnavUncompress::StormControl::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: decimal64
        YLeaf shutdown; //type: empty
        YLeaf trap; //type: empty

}; // Native::Interface::AppnavUncompress::StormControl::Action


class Native::Interface::AppnavUncompress::StormControl::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Include; //type: Native::Interface::AppnavUncompress::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::AppnavUncompress::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::AppnavUncompress::StormControl::Broadcast


class Native::Interface::AppnavUncompress::StormControl::Broadcast::Include : public Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast; //type: empty

}; // Native::Interface::AppnavUncompress::StormControl::Broadcast::Include


class Native::Interface::AppnavUncompress::StormControl::Broadcast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::AppnavUncompress::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::AppnavUncompress::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::AppnavUncompress::StormControl::Broadcast::Level


class Native::Interface::AppnavUncompress::StormControl::Broadcast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::AppnavUncompress::StormControl::Broadcast::Level::Bps


class Native::Interface::AppnavUncompress::StormControl::Broadcast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::AppnavUncompress::StormControl::Broadcast::Level::Pps


class Native::Interface::AppnavUncompress::StormControl::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Interface::AppnavUncompress::StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Multicast::Level> level;
        
}; // Native::Interface::AppnavUncompress::StormControl::Multicast


class Native::Interface::AppnavUncompress::StormControl::Multicast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::AppnavUncompress::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::AppnavUncompress::StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::AppnavUncompress::StormControl::Multicast::Level


class Native::Interface::AppnavUncompress::StormControl::Multicast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::AppnavUncompress::StormControl::Multicast::Level::Bps


class Native::Interface::AppnavUncompress::StormControl::Multicast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::AppnavUncompress::StormControl::Multicast::Level::Pps


class Native::Interface::AppnavUncompress::StormControl::Unicast : public Entity
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

        class Level; //type: Native::Interface::AppnavUncompress::StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Unicast::Level> level;
        
}; // Native::Interface::AppnavUncompress::StormControl::Unicast


class Native::Interface::AppnavUncompress::StormControl::Unicast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Threshold; //type: Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::AppnavUncompress::StormControl::Unicast::Level


class Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: decimal64
        YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Threshold


class Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Bps


class Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::AppnavUncompress::StormControl::Unicast::Level::Pps


class Native::Interface::AppnavUncompress::Trust : public Entity
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

}; // Native::Interface::AppnavUncompress::Trust


class Native::Interface::AppnavUncompress::Utd : public Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Interface::AppnavUncompress::Utd

class Native::Interface::AppnavUncompress::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::AppnavUncompress::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::AppnavUncompress::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::AppnavUncompress::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::AppnavUncompress::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::AppnavUncompress::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::AppnavUncompress::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::AppnavUncompress::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::AppnavUncompress::HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::AppnavUncompress::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};

class Native::Interface::AppnavUncompress::Ipv6::TrafficFilter::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::AppnavUncompress::Interface_Qos::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;

};

class Native::Interface::AppnavUncompress::Standby::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::AppnavUncompress::Standby::StandbyList::Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf autoconfig;

};

class Native::Interface::AppnavUncompress::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::AppnavUncompress::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::AppnavUncompress::AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::AppnavUncompress::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;
        static const Enum::YLeaf cts;
        static const Enum::YLeaf ip_camera;
        static const Enum::YLeaf media_player;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_18_ */

