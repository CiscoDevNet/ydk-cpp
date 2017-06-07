#ifndef _CISCO_IOS_XE_NATIVE_151_
#define _CISCO_IOS_XE_NATIVE_151_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_150.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::SnmpServer::Enable::EnableChoice::Traps::Vstack : public Entity
{
    public:
        Vstack();
        ~Vstack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addition; //type: empty
        YLeaf failure; //type: empty
        YLeaf lost; //type: empty
        YLeaf operation_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vstack


class Native::SnmpServer::Enable::EnableChoice::Traps::Wireless : public Entity
{
    public:
        Wireless();
        ~Wireless();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bsnmobilestation; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation> bsnmobilestation; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Wireless


class Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation : public Entity
{
    public:
        Bsnmobilestation();
        ~Bsnmobilestation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bsnaccesspoint; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint> bsnaccesspoint; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation


class Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint : public Entity
{
    public:
        Bsnaccesspoint();
        ~Bsnaccesspoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bsnrogue; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint


class Native::SnmpServer::Engineid : public Entity
{
    public:
        Engineid();
        ~Engineid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: string
        class Remote; //type: Native::SnmpServer::Engineid::Remote

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Engineid::Remote> remote;
        
}; // Native::SnmpServer::Engineid


class Native::SnmpServer::Engineid::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Engineid::Remote


class Native::SnmpServer::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        class V1; //type: Native::SnmpServer::Group::V1
        class V2C; //type: Native::SnmpServer::Group::V2C
        class V3; //type: Native::SnmpServer::Group::V3

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Group::V1> v1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Group::V2C> v2c;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Group::V3> v3;
        
}; // Native::SnmpServer::Group


class Native::SnmpServer::Group::V1 : public Entity
{
    public:
        V1();
        ~V1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Group::V1


class Native::SnmpServer::Group::V2C : public Entity
{
    public:
        V2C();
        ~V2C();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Group::V2C


class Native::SnmpServer::Group::V3 : public Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf security_level; //type: SecurityLevelEnum
        YLeaf context; //type: string
        YLeaf match; //type: MatchEnum
        YLeaf read; //type: string
        YLeaf write; //type: string
        YLeaf notify; //type: string
        YLeaf access; //type: one of uint8, string
        class SecurityLevelEnum;
        class MatchEnum;

}; // Native::SnmpServer::Group::V3


class Native::SnmpServer::Host : public Entity
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

        YLeaf ip_address; //type: one of union, string
        YLeaf community_string; //type: string
        YLeaf vrf; //type: string
        YLeaf informs; //type: empty
        YLeaf traps; //type: empty
        YLeaf version; //type: VersionEnum
        YLeaf security_level; //type: SecurityLevelEnum
        class TrapEnable; //type: Native::SnmpServer::Host::TrapEnable

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Host::TrapEnable> trap_enable;
                class VersionEnum;
        class SecurityLevelEnum;

}; // Native::SnmpServer::Host


class Native::SnmpServer::Host::TrapEnable : public Entity
{
    public:
        TrapEnable();
        ~TrapEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_server; //type: empty
        YLeaf alarms; //type: empty
        YLeaf atm; //type: empty
        YLeaf bfd; //type: empty
        YLeaf bgp; //type: empty
        YLeaf bstun; //type: empty
        YLeaf bulkstat; //type: empty
        YLeaf call_home; //type: empty
        YLeaf casa; //type: empty
        YLeaf cef; //type: empty
        YLeaf cnpd; //type: empty
        YLeaf config; //type: empty
        YLeaf config_copy; //type: empty
        YLeaf config_ctid; //type: empty
        YLeaf cpu; //type: empty
        YLeaf dhcp; //type: empty
        YLeaf dlsw; //type: empty
        YLeaf ds1; //type: empty
        YLeaf dsp; //type: empty
        YLeaf dspu; //type: empty
        YLeaf eigrp; //type: empty
        YLeaf entity_; //type: empty
        YLeaf entity_diag; //type: empty
        YLeaf entity_qfp; //type: empty
        YLeaf entity_state; //type: empty
        YLeaf ethernet_cfm; //type: empty
        YLeaf evc; //type: empty
        YLeaf event_manager; //type: empty
        YLeaf firewall; //type: empty
        YLeaf flash; //type: empty
        YLeaf flowmon; //type: empty
        YLeaf frame_relay; //type: empty
        YLeaf fru_ctrl; //type: empty
        YLeaf gdoi; //type: empty
        YLeaf hsrp; //type: empty
        YLeaf iplocalpool; //type: empty
        YLeaf ipmulticast; //type: empty
        YLeaf ipsec; //type: empty
        YLeaf ipsla; //type: empty
        YLeaf isakmp; //type: empty
        YLeaf isg_mib; //type: empty
        YLeaf isis; //type: empty
        YLeaf l2tun_pseudowire_status; //type: empty
        YLeaf l2tun_session; //type: empty
        YLeaf license; //type: empty
        YLeaf memory; //type: empty
        YLeaf mpls_fast_reroute; //type: empty
        YLeaf mpls_ldp; //type: empty
        YLeaf mpls_traffic_eng; //type: empty
        YLeaf mpls_vpn; //type: empty
        YLeaf msdp; //type: empty
        YLeaf mvpn; //type: empty
        YLeaf nhrp; //type: empty
        YLeaf ospf; //type: empty
        YLeaf ospfv3; //type: empty
        YLeaf pfr; //type: empty
        YLeaf pim; //type: empty
        YLeaf pw_vc; //type: empty
        YLeaf resource_policy; //type: empty
        YLeaf rf; //type: empty
        YLeaf rsrb; //type: empty
        YLeaf rsvp; //type: empty
        YLeaf sdlc; //type: empty
        YLeaf sdllc; //type: empty
        YLeaf snmp; //type: empty
        YLeaf sonet; //type: empty
        YLeaf srp; //type: empty
        YLeaf stun; //type: empty
        YLeaf syslog; //type: empty
        YLeaf trustsec_sxp; //type: empty
        YLeaf tty; //type: empty
        YLeaf udp_port; //type: uint16
        YLeaf voice; //type: empty
        YLeaf vrfmib; //type: empty
        YLeaf vrrp; //type: empty
        YLeaf x25; //type: empty

}; // Native::SnmpServer::Host::TrapEnable


class Native::SnmpServer::Ip : public Entity
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

        YLeaf dscp; //type: uint8
        YLeaf precedence; //type: uint8

}; // Native::SnmpServer::Ip


class Native::SnmpServer::Ifindex : public Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf persist; //type: empty

}; // Native::SnmpServer::Ifindex


class Native::SnmpServer::Manager : public Entity
{
    public:
        Manager();
        ~Manager();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_timeout; //type: uint32

}; // Native::SnmpServer::Manager


class Native::SnmpServer::SourceInterface : public Entity
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

        class Informs; //type: Native::SnmpServer::SourceInterface::Informs
        class Traps; //type: Native::SnmpServer::SourceInterface::Traps

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs> informs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps> traps;
        
}; // Native::SnmpServer::SourceInterface


class Native::SnmpServer::SourceInterface::Informs : public Entity
{
    public:
        Informs();
        ~Informs();

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
        class AtmSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface
        class LispSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::LispSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::SourceInterface::Informs


class Native::SnmpServer::SourceInterface::Informs::AtmSubinterface : public Entity
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

}; // Native::SnmpServer::SourceInterface::Informs::AtmSubinterface


class Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface : public Entity
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

}; // Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface


class Native::SnmpServer::SourceInterface::Informs::LispSubinterface : public Entity
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

}; // Native::SnmpServer::SourceInterface::Informs::LispSubinterface


class Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface : public Entity
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

}; // Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface


class Native::SnmpServer::SourceInterface::Traps : public Entity
{
    public:
        Traps();
        ~Traps();

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
        class AtmSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface
        class LispSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::LispSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::SourceInterface::Traps


class Native::SnmpServer::SourceInterface::Traps::AtmSubinterface : public Entity
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

}; // Native::SnmpServer::SourceInterface::Traps::AtmSubinterface


class Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface : public Entity
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

}; // Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface


class Native::SnmpServer::SourceInterface::Traps::LispSubinterface : public Entity
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

}; // Native::SnmpServer::SourceInterface::Traps::LispSubinterface


class Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface : public Entity
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

}; // Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface


class Native::SnmpServer::Trap : public Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint16
        class Link; //type: Native::SnmpServer::Trap::Link

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Trap::Link> link;
        
}; // Native::SnmpServer::Trap


class Native::SnmpServer::Trap::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ietf; //type: empty
        YLeaf switchover; //type: empty

}; // Native::SnmpServer::Trap::Link


class Native::SnmpServer::TrapSource : public Entity
{
    public:
        TrapSource();
        ~TrapSource();

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
        class AtmSubinterface; //type: Native::SnmpServer::TrapSource::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::SnmpServer::TrapSource::AtmAcrsubinterface
        class LispSubinterface; //type: Native::SnmpServer::TrapSource::LispSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::TrapSource::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::TrapSource


class Native::SnmpServer::TrapSource::AtmSubinterface : public Entity
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

}; // Native::SnmpServer::TrapSource::AtmSubinterface


class Native::SnmpServer::TrapSource::AtmAcrsubinterface : public Entity
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

}; // Native::SnmpServer::TrapSource::AtmAcrsubinterface


class Native::SnmpServer::TrapSource::LispSubinterface : public Entity
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

}; // Native::SnmpServer::TrapSource::LispSubinterface


class Native::SnmpServer::TrapSource::PortChannelSubinterface : public Entity
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

}; // Native::SnmpServer::TrapSource::PortChannelSubinterface


class Native::SnmpServer::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Names; //type: Native::SnmpServer::User::Names

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User::Names> > names;
        
}; // Native::SnmpServer::User


class Native::SnmpServer::User::Names : public Entity
{
    public:
        Names();
        ~Names();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf username; //type: string
        YLeaf grpname; //type: string
        class V3; //type: Native::SnmpServer::User::Names::V3

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3> v3; // presence node
        
}; // Native::SnmpServer::User::Names


class Native::SnmpServer::User::Names::V3 : public Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Auth; //type: Native::SnmpServer::User::Names::V3::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth> auth;
        
}; // Native::SnmpServer::User::Names::V3


class Native::SnmpServer::User::Names::V3::Auth : public Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sha; //type: Native::SnmpServer::User::Names::V3::Auth::Sha

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha> sha;
        
}; // Native::SnmpServer::User::Names::V3::Auth


class Native::SnmpServer::User::Names::V3::Auth::Sha : public Entity
{
    public:
        Sha();
        ~Sha();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Auth_; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_> auth;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_ : public Entity
{
    public:
        Auth_();
        ~Auth_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authpass; //type: string
        class Priv; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv> priv;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv : public Entity
{
    public:
        Priv();
        ~Priv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aes; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes> aes;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes : public Entity
{
    public:
        Aes();
        ~Aes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Algo128; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128> algo128;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128 : public Entity
{
    public:
        Algo128();
        ~Algo128();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Privpass; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass> privpass;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass : public Entity
{
    public:
        Privpass();
        ~Privpass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf privpass; //type: string
        YLeaf access; //type: string

}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass


class Native::SnmpServer::View : public Entity
{
    public:
        View();
        ~View();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf mib; //type: string
        YLeaf inc_exl; //type: IncExlEnum
        class IncExlEnum;

}; // Native::SnmpServer::View


class Native::SegmentRouting : public Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mpls; //type: Native::SegmentRouting::Mpls

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls> mpls; // presence node
        
}; // Native::SegmentRouting


class Native::SegmentRouting::Mpls : public Entity
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

        YLeaf shutdown; //type: empty
        class ConnectedPrefixSidMap; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap
        class GlobalBlock; //type: Native::SegmentRouting::Mpls::GlobalBlock
        class MappingServer; //type: Native::SegmentRouting::Mpls::MappingServer
        class SetAttributes; //type: Native::SegmentRouting::Mpls::SetAttributes

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap> connected_prefix_sid_map; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::GlobalBlock> global_block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer> mapping_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes> set_attributes; // presence node
        
}; // Native::SegmentRouting::Mpls


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap : public Entity
{
    public:
        ConnectedPrefixSidMap();
        ~ConnectedPrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressFamily; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily : public Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4
        class Ipv4StrictSpf; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf> ipv4_strict_spf;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4 : public Entity
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

        class Prefixes; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes> > prefixes;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipprefix; //type: string
        class Index_; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_
        class Absolute; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute> absolute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_> index_;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_ : public Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_start; //type: uint32
        YLeaf range; //type: uint32
        YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute : public Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_start; //type: uint32
        YLeaf range; //type: uint32

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf : public Entity
{
    public:
        Ipv4StrictSpf();
        ~Ipv4StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4> ipv4;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4 : public Entity
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

        class StrictSpf; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf> strict_spf; // presence node
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf : public Entity
{
    public:
        StrictSpf();
        ~StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prefixes; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes> > prefixes;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipprefix; //type: string
        class Index_; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_
        class Absolute; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute> absolute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_> index_;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_ : public Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_start; //type: uint32
        YLeaf range; //type: uint32
        YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute : public Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_start; //type: uint32
        YLeaf range; //type: uint32

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute


class Native::SegmentRouting::Mpls::GlobalBlock : public Entity
{
    public:
        GlobalBlock();
        ~GlobalBlock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_start; //type: uint32
        YLeaf range_end; //type: uint32

}; // Native::SegmentRouting::Mpls::GlobalBlock


class Native::SegmentRouting::Mpls::MappingServer : public Entity
{
    public:
        MappingServer();
        ~MappingServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixSidMap; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap> prefix_sid_map; // presence node
        
}; // Native::SegmentRouting::Mpls::MappingServer


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap : public Entity
{
    public:
        PrefixSidMap();
        ~PrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressFamily; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily : public Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4
        class Ipv4StrictSpf; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf> ipv4_strict_spf;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4 : public Entity
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

        class Prefixes; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes> > prefixes;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipprefix; //type: string
        class Index_; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_
        class Absolute; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute> absolute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_> index_;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_ : public Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_start; //type: uint32
        YLeaf range; //type: uint32
        YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute : public Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_start; //type: uint32
        YLeaf range; //type: uint32

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf : public Entity
{
    public:
        Ipv4StrictSpf();
        ~Ipv4StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4> ipv4;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4 : public Entity
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

        class StrictSpf; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf> strict_spf; // presence node
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf : public Entity
{
    public:
        StrictSpf();
        ~StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prefixes; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes> > prefixes;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipprefix; //type: string
        class Index_; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_
        class Absolute; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute> absolute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_> index_;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_ : public Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_start; //type: uint32
        YLeaf range; //type: uint32
        YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute : public Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_start; //type: uint32
        YLeaf range; //type: uint32

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute


class Native::SegmentRouting::Mpls::SetAttributes : public Entity
{
    public:
        SetAttributes();
        ~SetAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressFamily; //type: Native::SegmentRouting::Mpls::SetAttributes::AddressFamily

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::SetAttributes


class Native::SegmentRouting::Mpls::SetAttributes::AddressFamily : public Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4> ipv4; // presence node
        
}; // Native::SegmentRouting::Mpls::SetAttributes::AddressFamily


class Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4 : public Entity
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

        YLeaf explicit_null; //type: empty
        YLeaf sr_label_preferred; //type: empty

}; // Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4


class Native::License : public Entity
{
    public:
        License();
        ~License();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf smart; //type: SmartEnum
        class Udi; //type: Native::License::Udi
        class Feature; //type: Native::License::Feature
        class Accept; //type: Native::License::Accept
        class Boot; //type: Native::License::Boot

        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Accept> accept;
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot> boot;
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Feature> feature;
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Udi> udi;
                class SmartEnum;

}; // Native::License


class Native::License::Udi : public Entity
{
    public:
        Udi();
        ~Udi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pid; //type: string
        YLeaf sn; //type: string

}; // Native::License::Udi


class Native::License::Feature : public Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Port; //type: Native::License::Feature::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Feature::Port> port;
        
}; // Native::License::Feature


class Native::License::Feature::Port : public Entity
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

        YLeaf bulk; //type: empty
        YLeaf onegig; //type: uint8
        YLeaf b_6xonegig; //type: uint8
        YLeaf tengig; //type: uint8

}; // Native::License::Feature::Port


class Native::License::Accept : public Entity
{
    public:
        Accept();
        ~Accept();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf end; //type: empty
        YLeaf user; //type: empty
        YLeaf agreement; //type: empty

}; // Native::License::Accept


class Native::License::Boot : public Entity
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

        class Level; //type: Native::License::Boot::Level
        class BootModule; //type: Native::License::Boot::BootModule

        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::BootModule> boot_module;
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::Level> level;
        
}; // Native::License::Boot


class Native::License::Boot::Level : public Entity
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

        YLeaf ipbasek9; //type: empty
        YLeaf lanbasek9; //type: empty
        YLeaf advancedmetroipaccess; //type: empty
        YLeaf metroaccess; //type: empty
        YLeaf metroipaccess; //type: empty
        YLeaf entservices; //type: empty
        YLeaf adventerprise; //type: empty
        YLeaf appx; //type: empty
        YLeaf appxk9; //type: empty
        YLeaf securityk9; //type: empty
        class Ipbase; //type: Native::License::Boot::Level::Ipbase
        class Ipservices; //type: Native::License::Boot::Level::Ipservices
        class Ipservicesk9; //type: Native::License::Boot::Level::Ipservicesk9
        class Lanbase; //type: Native::License::Boot::Level::Lanbase
        class Lite; //type: Native::License::Boot::Level::Lite
        class Metroaggrservices; //type: Native::License::Boot::Level::Metroaggrservices
        class Uck9; //type: Native::License::Boot::Level::Uck9

        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::Level::Ipbase> ipbase; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::Level::Ipservices> ipservices; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::Level::Ipservicesk9> ipservicesk9; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::Level::Lanbase> lanbase; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::Level::Lite> lite; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::Level::Metroaggrservices> metroaggrservices; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::Level::Uck9> uck9; // presence node
        
}; // Native::License::Boot::Level


class Native::License::Boot::Level::Ipbase : public Entity
{
    public:
        Ipbase();
        ~Ipbase();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: uint8

}; // Native::License::Boot::Level::Ipbase


class Native::License::Boot::Level::Ipservices : public Entity
{
    public:
        Ipservices();
        ~Ipservices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: empty

}; // Native::License::Boot::Level::Ipservices


class Native::License::Boot::Level::Ipservicesk9 : public Entity
{
    public:
        Ipservicesk9();
        ~Ipservicesk9();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: empty

}; // Native::License::Boot::Level::Ipservicesk9


class Native::License::Boot::Level::Lanbase : public Entity
{
    public:
        Lanbase();
        ~Lanbase();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: empty

}; // Native::License::Boot::Level::Lanbase


class Native::License::Boot::Level::Lite : public Entity
{
    public:
        Lite();
        ~Lite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: empty

}; // Native::License::Boot::Level::Lite


class Native::License::Boot::Level::Metroaggrservices : public Entity
{
    public:
        Metroaggrservices();
        ~Metroaggrservices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: empty

}; // Native::License::Boot::Level::Metroaggrservices


class Native::License::Boot::Level::Uck9 : public Entity
{
    public:
        Uck9();
        ~Uck9();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::License::Boot::Level::Uck9


class Native::License::Boot::BootModule : public Entity
{
    public:
        BootModule();
        ~BootModule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module; //type: ModuleEnum
        class TechnologyPackage; //type: Native::License::Boot::BootModule::TechnologyPackage

        std::shared_ptr<Cisco_IOS_XE_native::Native::License::Boot::BootModule::TechnologyPackage> technology_package;
                class ModuleEnum;

}; // Native::License::Boot::BootModule


class Native::License::Boot::BootModule::TechnologyPackage : public Entity
{
    public:
        TechnologyPackage();
        ~TechnologyPackage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf securityk9; //type: empty
        YLeaf uck9; //type: empty
        YLeaf datak9; //type: empty

}; // Native::License::Boot::BootModule::TechnologyPackage


class Native::MemorySize : public Entity
{
    public:
        MemorySize();
        ~MemorySize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iomem; //type: uint8

}; // Native::MemorySize


class Native::Transceiver : public Entity
{
    public:
        Transceiver();
        ~Transceiver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Type; //type: Native::Transceiver::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Transceiver::Type> type;
        
}; // Native::Transceiver


class Native::Transceiver::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::Transceiver::Type::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Transceiver::Type::All> all;
        
}; // Native::Transceiver::Type


class Native::Transceiver::Type::All : public Entity
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

        class Monitoring; //type: Native::Transceiver::Type::All::Monitoring

        std::shared_ptr<Cisco_IOS_XE_native::Native::Transceiver::Type::All::Monitoring> monitoring; // presence node
        
}; // Native::Transceiver::Type::All


class Native::Transceiver::Type::All::Monitoring : public Entity
{
    public:
        Monitoring();
        ~Monitoring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Transceiver::Type::All::Monitoring


class Native::ServiceInsertion : public Entity
{
    public:
        ServiceInsertion();
        ~ServiceInsertion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acg_reload_delay; //type: uint16
        class AppnavControllerGroup; //type: Native::ServiceInsertion::AppnavControllerGroup
        class ServiceContext; //type: Native::ServiceInsertion::ServiceContext
        class ServiceNodeGroup; //type: Native::ServiceInsertion::ServiceNodeGroup
        class Swap; //type: Native::ServiceInsertion::Swap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceInsertion::AppnavControllerGroup> > appnav_controller_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext> service_context;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceNodeGroup> > service_node_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceInsertion::Swap> swap;
        
}; // Native::ServiceInsertion


class Native::ServiceInsertion::AppnavControllerGroup : public Entity
{
    public:
        AppnavControllerGroup();
        ~AppnavControllerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: string
        YLeaf description; //type: string
        YLeafList appnav_controller; //type: list of  string

}; // Native::ServiceInsertion::AppnavControllerGroup


class Native::ServiceInsertion::ServiceContext : public Entity
{
    public:
        ServiceContext();
        ~ServiceContext();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Waas; //type: Native::ServiceInsertion::ServiceContext::Waas

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext::Waas> > waas;
        
}; // Native::ServiceInsertion::ServiceContext


class Native::ServiceInsertion::ServiceContext::Waas : public Entity
{
    public:
        Waas();
        ~Waas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf appnav_controller_group; //type: string
        YLeaf enable; //type: empty
        YLeaf service_node_group; //type: string
        YLeaf service_policy; //type: string
        class Authentication; //type: Native::ServiceInsertion::ServiceContext::Waas::Authentication
        class Vrf; //type: Native::ServiceInsertion::ServiceContext::Waas::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext::Waas::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext::Waas::Vrf> vrf;
        
}; // Native::ServiceInsertion::ServiceContext::Waas


class Native::ServiceInsertion::ServiceContext::Waas::Authentication : public Entity
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

        YLeaf sha1; //type: empty
        YLeaf key; //type: empty
        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::ServiceInsertion::ServiceContext::Waas::Authentication


class Native::ServiceInsertion::ServiceContext::Waas::Vrf : public Entity
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

        YLeaf default_; //type: empty
        YLeaf global; //type: empty
        YLeaf name; //type: string

}; // Native::ServiceInsertion::ServiceContext::Waas::Vrf


class Native::ServiceInsertion::ServiceNodeGroup : public Entity
{
    public:
        ServiceNodeGroup();
        ~ServiceNodeGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf node_discovery; //type: NodeDiscoveryEnum
        YLeafList service_node; //type: list of  string
        class NodeDiscoveryEnum;

}; // Native::ServiceInsertion::ServiceNodeGroup


class Native::ServiceInsertion::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf src_ip; //type: empty

}; // Native::ServiceInsertion::Swap


class Native::Udld : public Entity
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

        YLeaf aggressive; //type: empty
        YLeaf enable; //type: empty
        class Message; //type: Native::Udld::Message
        class Recovery; //type: Native::Udld::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Udld::Message> message;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Udld::Recovery> recovery; // presence node
        
}; // Native::Udld


class Native::Udld::Message : public Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint8

}; // Native::Udld::Message


class Native::Udld::Recovery : public Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32

}; // Native::Udld::Recovery


class Native::Wireless : public Entity
{
    public:
        Wireless();
        ~Wireless();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mdns_bridging; //type: boolean

}; // Native::Wireless


class Native::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservmib; //type: empty
        class Account; //type: Native::Qos::Account
        class ControlPackets; //type: Native::Qos::ControlPackets
        class Preserve; //type: Native::Qos::Preserve
        class Trace; //type: Native::Qos::Trace
        class QueueSoftmaxMultiplier; //type: Native::Qos::QueueSoftmaxMultiplier

        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Account> account;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::ControlPackets> control_packets; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Preserve> preserve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::QueueSoftmaxMultiplier> queue_softmax_multiplier;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Trace> trace;
        
}; // Native::Qos


class Native::Qos::Account : public Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LayerAll; //type: Native::Qos::Account::LayerAll
        class Layer2; //type: Native::Qos::Account::Layer2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Account::Layer2> layer2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Account::LayerAll> layer_all;
        
}; // Native::Qos::Account


class Native::Qos::Account::LayerAll : public Entity
{
    public:
        LayerAll();
        ~LayerAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: empty

}; // Native::Qos::Account::LayerAll


class Native::Qos::Account::Layer2 : public Entity
{
    public:
        Layer2();
        ~Layer2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Encapsulation; //type: Native::Qos::Account::Layer2::Encapsulation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Account::Layer2::Encapsulation> encapsulation;
        
}; // Native::Qos::Account::Layer2


class Native::Qos::Account::Layer2::Encapsulation : public Entity
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

        YLeaf arpa; //type: empty
        YLeaf dot1q; //type: empty
        YLeaf isl; //type: empty
        class Length; //type: Native::Qos::Account::Layer2::Encapsulation::Length

        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Account::Layer2::Encapsulation::Length> length; // presence node
        
}; // Native::Qos::Account::Layer2::Encapsulation


class Native::Qos::Account::Layer2::Encapsulation::Length : public Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf byte_length; //type: int8

}; // Native::Qos::Account::Layer2::Encapsulation::Length


class Native::Qos::ControlPackets : public Entity
{
    public:
        ControlPackets();
        ~ControlPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bpdu_range; //type: empty
        YLeaf cdp_vtp; //type: empty
        YLeaf eapol; //type: empty
        YLeaf lldp; //type: empty
        YLeaf protocol_tunnel; //type: empty
        YLeaf sstp; //type: empty

}; // Native::Qos::ControlPackets


class Native::Qos::Preserve : public Entity
{
    public:
        Preserve();
        ~Preserve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Marking; //type: Native::Qos::Preserve::Marking
        class Mpls; //type: Native::Qos::Preserve::Mpls

        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Preserve::Marking> marking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Preserve::Mpls> mpls;
        
}; // Native::Qos::Preserve


class Native::Qos::Preserve::Marking : public Entity
{
    public:
        Marking();
        ~Marking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hipriority; //type: empty

}; // Native::Qos::Preserve::Marking


class Native::Qos::Preserve::Mpls : public Entity
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

        YLeaf exp; //type: empty

}; // Native::Qos::Preserve::Mpls


class Native::Qos::Trace : public Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Resize; //type: Native::Qos::Trace::Resize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Qos::Trace::Resize> resize;
        
}; // Native::Qos::Trace


class Native::Qos::Trace::Resize : public Entity
{
    public:
        Resize();
        ~Resize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: int32
        YLeaf all; //type: int32
        YLeaf error; //type: int32
        YLeaf event; //type: int32
        YLeaf warning; //type: int32

}; // Native::Qos::Trace::Resize


class Native::Qos::QueueSoftmaxMultiplier : public Entity
{
    public:
        QueueSoftmaxMultiplier();
        ~QueueSoftmaxMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: int16

}; // Native::Qos::QueueSoftmaxMultiplier


class Native::TimeRange : public Entity
{
    public:
        TimeRange();
        ~TimeRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        class Absolute; //type: Native::TimeRange::Absolute

        std::shared_ptr<Cisco_IOS_XE_native::Native::TimeRange::Absolute> absolute;
        
}; // Native::TimeRange


class Native::TimeRange::Absolute : public Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Start; //type: Native::TimeRange::Absolute::Start

        std::shared_ptr<Cisco_IOS_XE_native::Native::TimeRange::Absolute::Start> start;
        
}; // Native::TimeRange::Absolute


class Native::TimeRange::Absolute::Start : public Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_time; //type: string
        YLeaf day_of_month; //type: uint8
        YLeaf month; //type: string
        YLeaf year; //type: uint16

}; // Native::TimeRange::Absolute::Start


class Native::DeviceTracking : public Entity
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

        class Policy; //type: Native::DeviceTracking::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::DeviceTracking::Policy> > policy;
        
}; // Native::DeviceTracking


class Native::DeviceTracking::Policy : public Entity
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

        YLeaf word; //type: string
        class DeviceRole; //type: Native::DeviceTracking::Policy::DeviceRole
        class Protocol; //type: Native::DeviceTracking::Policy::Protocol
        class Tracking; //type: Native::DeviceTracking::Policy::Tracking
        class Limit; //type: Native::DeviceTracking::Policy::Limit
        class SecurityLevel; //type: Native::DeviceTracking::Policy::SecurityLevel

        std::shared_ptr<Cisco_IOS_XE_native::Native::DeviceTracking::Policy::DeviceRole> device_role;
        std::shared_ptr<Cisco_IOS_XE_native::Native::DeviceTracking::Policy::Limit> limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::DeviceTracking::Policy::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::DeviceTracking::Policy::SecurityLevel> security_level;
        std::shared_ptr<Cisco_IOS_XE_native::Native::DeviceTracking::Policy::Tracking> tracking;
        
}; // Native::DeviceTracking::Policy


class Native::DeviceTracking::Policy::DeviceRole : public Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node; //type: boolean
        YLeaf switch; //type: empty

}; // Native::DeviceTracking::Policy::DeviceRole


class Native::DeviceTracking::Policy::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf udp; //type: boolean
        YLeaf arp; //type: boolean
        YLeaf dhcp4; //type: boolean
        YLeaf dhcp6; //type: boolean
        YLeaf ndp; //type: boolean

}; // Native::DeviceTracking::Policy::Protocol


class Native::DeviceTracking::Policy::Tracking : public Entity
{
    public:
        Tracking();
        ~Tracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tracking_on_off; //type: TrackingOnOffEnum
        class TrackingOnOffEnum;

}; // Native::DeviceTracking::Policy::Tracking


class Native::DeviceTracking::Policy::Limit : public Entity
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

        YLeaf address_count; //type: uint16

}; // Native::DeviceTracking::Policy::Limit


class Native::DeviceTracking::Policy::SecurityLevel : public Entity
{
    public:
        SecurityLevel();
        ~SecurityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf glean; //type: empty

}; // Native::DeviceTracking::Policy::SecurityLevel


class Native::Fhrp : public Entity
{
    public:
        Fhrp();
        ~Fhrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Version; //type: Native::Fhrp::Version

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fhrp::Version> version;
        
}; // Native::Fhrp


class Native::Fhrp::Version : public Entity
{
    public:
        Version();
        ~Version();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrrp; //type: VrrpEnum
        class VrrpEnum;

}; // Native::Fhrp::Version


class Native::Metadata : public Entity
{
    public:
        Metadata();
        ~Metadata();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: Native::Metadata::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Metadata::Flow> flow; // presence node
        
}; // Native::Metadata


class Native::Metadata::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit; //type: empty

}; // Native::Metadata::Flow


class Native::Profile : public Entity
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

        YLeaf flow; //type: empty

}; // Native::Profile


class Native::Alias : public Entity
{
    public:
        Alias();
        ~Alias();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Exec; //type: Native::Alias::Exec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Alias::Exec> exec;
        
}; // Native::Alias


class Native::Alias::Exec : public Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alias_name; //type: string
        YLeaf new_alias_name; //type: string

}; // Native::Alias::Exec


class Native::Line : public Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LineList; //type: Native::Line::LineList
        class Aux; //type: Native::Line::Aux
        class Console; //type: Native::Line::Console
        class Vty; //type: Native::Line::Vty

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux> > aux;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console> > console;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList> > line_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty> > vty;
        
}; // Native::Line


class Native::Line::LineList : public Entity
{
    public:
        LineList();
        ~LineList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf first_number; //type: uint8
        YLeaf last_number; //type: uint16
        YLeaf no_activation_character; //type: boolean
        YLeaf activation_character; //type: one of string, uint8
        YLeaf data_character_bits; //type: uint8
        YLeaf domain_lookup; //type: empty
        YLeaf editing; //type: empty
        YLeaf exec_banner; //type: empty
        YLeaf exec_character_bits; //type: uint8
        YLeaf full_help; //type: empty
        YLeaf international; //type: empty
        YLeaf length; //type: uint16
        YLeaf line; //type: uint8
        YLeaf location; //type: string
        YLeaf monitor; //type: empty
        YLeaf motd_banner; //type: empty
        YLeaf notify; //type: empty
        YLeaf refuse_message; //type: string
        YLeaf rotary; //type: uint8
        YLeaf rxspeed; //type: uint32
        YLeaf special_character_bits; //type: uint8
        YLeaf speed; //type: uint32
        YLeaf start_character; //type: one of uint8, string
        YLeaf stop_character; //type: one of uint8, string
        YLeaf stopbits; //type: StopbitsEnum
        YLeaf terminal_type; //type: string
        YLeaf txspeed; //type: uint32
        YLeaf width; //type: uint16
        class Authorization; //type: Native::Line::LineList::Authorization
        class AccessClass; //type: Native::Line::LineList::AccessClass
        class Autocommand; //type: Native::Line::LineList::Autocommand
        class AutocommandOptions; //type: Native::Line::LineList::AutocommandOptions
        class Databits; //type: Native::Line::LineList::Databits
        class EscapeCharacter; //type: Native::Line::LineList::EscapeCharacter
        class NoExec; //type: Native::Line::LineList::NoExec
        class Exec; //type: Native::Line::LineList::Exec
        class ExecTimeout; //type: Native::Line::LineList::ExecTimeout
        class Flowcontrol; //type: Native::Line::LineList::Flowcontrol
        class History; //type: Native::Line::LineList::History
        class Ip; //type: Native::Line::LineList::Ip
        class Ipv6; //type: Native::Line::LineList::Ipv6
        class Logging; //type: Native::Line::LineList::Logging
        class Login; //type: Native::Line::LineList::Login
        class MediaType; //type: Native::Line::LineList::MediaType
        class Modem; //type: Native::Line::LineList::Modem
        class Padding; //type: Native::Line::LineList::Padding
        class Parity; //type: Native::Line::LineList::Parity
        class Password; //type: Native::Line::LineList::Password
        class Prc; //type: Native::Line::LineList::Prc
        class Privilege; //type: Native::Line::LineList::Privilege
        class SessionTimeout; //type: Native::Line::LineList::SessionTimeout
        class Timeout; //type: Native::Line::LineList::Timeout
        class Telnet; //type: Native::Line::LineList::Telnet
        class Transport; //type: Native::Line::LineList::Transport
        class UsbInactivityTimeout; //type: Native::Line::LineList::UsbInactivityTimeout
        class VacantMessage; //type: Native::Line::LineList::VacantMessage

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AccessClass> access_class;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Autocommand> autocommand;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Databits> databits;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::EscapeCharacter> escape_character;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Exec> exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::ExecTimeout> exec_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::History> history; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Login> login; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Modem> modem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::NoExec> no_exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Padding> padding;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Parity> parity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Prc> prc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Privilege> privilege;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::SessionTimeout> session_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Telnet> telnet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Timeout> timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Transport> transport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::UsbInactivityTimeout> usb_inactivity_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::VacantMessage> vacant_message; // presence node
                class StopbitsEnum;

}; // Native::Line::LineList


class Native::Line::LineList::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Command; //type: Native::Line::LineList::Authorization::Command

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Authorization::Command> command;
        
}; // Native::Line::LineList::Authorization


class Native::Line::LineList::Authorization::Command : public Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable_level; //type: uint8
        YLeaf auth_name; //type: string

}; // Native::Line::LineList::Authorization::Command


class Native::Line::LineList::AccessClass : public Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AcccessList; //type: Native::Line::LineList::AccessClass::AcccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::LineList::AccessClass


class Native::Line::LineList::AccessClass::AcccessList : public Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf access_list; //type: one of uint16, string
        YLeaf vrf_also; //type: empty
        class DirectionEnum;

}; // Native::Line::LineList::AccessClass::AcccessList


class Native::Line::LineList::Autocommand : public Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::LineList::Autocommand::NoSuppressLinenumber

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::LineList::Autocommand


class Native::Line::LineList::Autocommand::NoSuppressLinenumber : public Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line; //type: string

}; // Native::Line::LineList::Autocommand::NoSuppressLinenumber


class Native::Line::LineList::AutocommandOptions : public Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AbortCharacter; //type: Native::Line::LineList::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::LineList::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::LineList::AutocommandOptions::Nohangup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::LineList::AutocommandOptions


class Native::Line::LineList::AutocommandOptions::AbortCharacter : public Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf character; //type: one of uint8, string

}; // Native::Line::LineList::AutocommandOptions::AbortCharacter


class Native::Line::LineList::AutocommandOptions::Delay : public Entity
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

        YLeaf time; //type: uint8

}; // Native::Line::LineList::AutocommandOptions::Delay


class Native::Line::LineList::AutocommandOptions::Nohangup : public Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf abort_character; //type: empty
        YLeaf delay; //type: empty

}; // Native::Line::LineList::AutocommandOptions::Nohangup

class Native::SnmpServer::Group::V3::SecurityLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf auth;
        static const Enum::YLeaf noauth;
        static const Enum::YLeaf priv;

};

class Native::SnmpServer::Group::V3::MatchEnum : public Enum
{
    public:
        static const Enum::YLeaf exact;
        static const Enum::YLeaf prefix;

};

class Native::SnmpServer::Host::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2c;
        static const Enum::YLeaf Y_3;

};

class Native::SnmpServer::Host::SecurityLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf auth;
        static const Enum::YLeaf noauth;
        static const Enum::YLeaf priv;

};

class Native::SnmpServer::View::IncExlEnum : public Enum
{
    public:
        static const Enum::YLeaf excluded;
        static const Enum::YLeaf included;

};

class Native::License::SmartEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;

};

class Native::License::Boot::BootModule::ModuleEnum : public Enum
{
    public:
        static const Enum::YLeaf c2900;

};

class Native::ServiceInsertion::ServiceContext::Waas::Authentication::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::ServiceInsertion::ServiceNodeGroup::NodeDiscoveryEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;

};

class Native::DeviceTracking::Policy::Tracking::TrackingOnOffEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class Native::Fhrp::Version::VrrpEnum : public Enum
{
    public:
        static const Enum::YLeaf v2;
        static const Enum::YLeaf v3;

};

class Native::Line::LineList::StopbitsEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_1__DOT__5;
        static const Enum::YLeaf Y_2;

};

class Native::Line::LineList::AccessClass::AcccessList::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_151_ */

