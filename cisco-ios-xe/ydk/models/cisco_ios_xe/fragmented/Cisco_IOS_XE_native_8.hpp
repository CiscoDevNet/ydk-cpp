#ifndef _CISCO_IOS_XE_NATIVE_8_
#define _CISCO_IOS_XE_NATIVE_8_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_7.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Ip::Route::Static_::Bfd : public Entity
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

        YLeaf interface; //type: string
        YLeaf gateway_ip; //type: string

}; // Native::Ip::Route::Static_::Bfd


class Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop : public Entity
{
    public:
        InstallRoutesRecurseViaNexthop();
        ~InstallRoutesRecurseViaNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop


class Native::Ip::Route::Vrf : public Entity
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
        class IpRouteInterfaceForwardingList; //type: Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList> > ip_route_interface_forwarding_list;
        
}; // Native::Ip::Route::Vrf


class Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList : public Entity
{
    public:
        IpRouteInterfaceForwardingList();
        ~IpRouteInterfaceForwardingList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf mask; //type: string
        class FwdList; //type: Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList> > fwd_list;
        
}; // Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList


class Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList : public Entity
{
    public:
        FwdList();
        ~FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fwd; //type: one of string, enumeration
        YLeaf metric; //type: uint8
        YLeaf forwarding_router_adr; //type: string
        YLeaf global; //type: empty
        YLeaf name; //type: string
        YLeaf permanent; //type: empty
        YLeaf multicast; //type: empty
        YLeaf dhcp; //type: empty
        YLeaf tag; //type: uint32
        YLeaf track; //type: uint16
        class FwdEnum;

}; // Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList


class Native::Ip::ExplicitPath : public Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf mode; //type: ModeEnum
        YLeafList next_address; //type: list of  string
        YLeafList next_label; //type: list of  uint32
        YLeafList exclude_address; //type: list of  string
        class ModeEnum;

}; // Native::Ip::ExplicitPath


class Native::Ip::Scp : public Entity
{
    public:
        Scp();
        ~Scp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Server; //type: Native::Ip::Scp::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Scp::Server> server;
        
}; // Native::Ip::Scp


class Native::Ip::Scp::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Ip::Scp::Server


class Native::Ip::Spd : public Entity
{
    public:
        Spd();
        ~Spd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mode; //type: ModeEnum
        class Queue; //type: Native::Ip::Spd::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Spd::Queue> queue;
                class ModeEnum;

}; // Native::Ip::Spd


class Native::Ip::Spd::Queue : public Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_threshold; //type: uint16
        YLeaf min_threshold; //type: uint16

}; // Native::Ip::Spd::Queue


class Native::Ip::Bootp : public Entity
{
    public:
        Bootp();
        ~Bootp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server; //type: boolean

}; // Native::Ip::Bootp


class Native::Ip::Ssh : public Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authentication_retries; //type: uint8
        YLeaf dscp; //type: uint8
        YLeaf precedence; //type: uint8
        YLeaf source_interface; //type: string
        YLeaf time_out; //type: uint8
        YLeaf version; //type: uint8
        class Logging; //type: Native::Ip::Ssh::Logging
        class PubkeyChain; //type: Native::Ip::Ssh::PubkeyChain
        class Rsa; //type: Native::Ip::Ssh::Rsa
        class Port; //type: Native::Ip::Ssh::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ssh::Logging> logging;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ssh::Port> > port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ssh::PubkeyChain> pubkey_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ssh::Rsa> rsa;
        
}; // Native::Ip::Ssh


class Native::Ip::Ssh::Logging : public Entity
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

        YLeaf events; //type: empty

}; // Native::Ip::Ssh::Logging


class Native::Ip::Ssh::PubkeyChain : public Entity
{
    public:
        PubkeyChain();
        ~PubkeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Username; //type: Native::Ip::Ssh::PubkeyChain::Username

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ssh::PubkeyChain::Username> > username;
        
}; // Native::Ip::Ssh::PubkeyChain


class Native::Ip::Ssh::PubkeyChain::Username : public Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class KeyHash; //type: Native::Ip::Ssh::PubkeyChain::Username::KeyHash

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ssh::PubkeyChain::Username::KeyHash> > key_hash;
        
}; // Native::Ip::Ssh::PubkeyChain::Username


class Native::Ip::Ssh::PubkeyChain::Username::KeyHash : public Entity
{
    public:
        KeyHash();
        ~KeyHash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_type; //type: KeyTypeEnum
        YLeaf key_hash_value; //type: string
        class KeyTypeEnum;

}; // Native::Ip::Ssh::PubkeyChain::Username::KeyHash


class Native::Ip::Ssh::Rsa : public Entity
{
    public:
        Rsa();
        ~Rsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keypair_name; //type: string

}; // Native::Ip::Ssh::Rsa


class Native::Ip::Ssh::Port : public Entity
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

        YLeaf port_no; //type: uint16
        YLeaf low_rotary; //type: uint8
        YLeaf high_rotary; //type: uint8

}; // Native::Ip::Ssh::Port


class Native::Ip::Tcp : public Entity
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

        YLeaf selective_ack; //type: empty
        YLeaf synwait_time; //type: uint16
        YLeaf timestamp; //type: empty
        YLeaf window_size; //type: uint32
        class PathMtuDiscovery; //type: Native::Ip::Tcp::PathMtuDiscovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tcp::PathMtuDiscovery> path_mtu_discovery; // presence node
        
}; // Native::Ip::Tcp


class Native::Ip::Tcp::PathMtuDiscovery : public Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf age_timer; //type: one of uint8, enumeration
        class AgeTimerEnum;

}; // Native::Ip::Tcp::PathMtuDiscovery


class Native::Ip::Tftp : public Entity
{
    public:
        Tftp();
        ~Tftp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf blocksize; //type: uint16
        class BootInterface; //type: Native::Ip::Tftp::BootInterface
        class SourceInterface; //type: Native::Ip::Tftp::SourceInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface> boot_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface> source_interface;
        
}; // Native::Ip::Tftp


class Native::Ip::Tftp::BootInterface : public Entity
{
    public:
        BootInterface();
        ~BootInterface();

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
        class AtmSubinterface; //type: Native::Ip::Tftp::BootInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::Tftp::BootInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::Tftp::BootInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Tftp::BootInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Tftp::BootInterface


class Native::Ip::Tftp::BootInterface::AtmSubinterface : public Entity
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

}; // Native::Ip::Tftp::BootInterface::AtmSubinterface


class Native::Ip::Tftp::BootInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Ip::Tftp::BootInterface::AtmAcrsubinterface


class Native::Ip::Tftp::BootInterface::LispSubinterface : public Entity
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

}; // Native::Ip::Tftp::BootInterface::LispSubinterface


class Native::Ip::Tftp::BootInterface::PortChannelSubinterface : public Entity
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

}; // Native::Ip::Tftp::BootInterface::PortChannelSubinterface


class Native::Ip::Tftp::SourceInterface : public Entity
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
        class AtmSubinterface; //type: Native::Ip::Tftp::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::Tftp::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Tftp::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Tftp::SourceInterface


class Native::Ip::Tftp::SourceInterface::AtmSubinterface : public Entity
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

}; // Native::Ip::Tftp::SourceInterface::AtmSubinterface


class Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface


class Native::Ip::Tftp::SourceInterface::LispSubinterface : public Entity
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

}; // Native::Ip::Tftp::SourceInterface::LispSubinterface


class Native::Ip::Tftp::SourceInterface::PortChannelSubinterface : public Entity
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

}; // Native::Ip::Tftp::SourceInterface::PortChannelSubinterface


class Native::Ip::AccessList : public Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf match_local_traffic; //type: empty
        YLeaf persistent; //type: empty
        class Standard; //type: Native::Ip::AccessList::Standard
        class RoleBased; //type: Native::Ip::AccessList::RoleBased
        class Extended; //type: Native::Ip::AccessList::Extended
        class Helper; //type: Native::Ip::AccessList::Helper
        class LogUpdate; //type: Native::Ip::AccessList::LogUpdate
        class Logging; //type: Native::Ip::AccessList::Logging
        class Resequence; //type: Native::Ip::AccessList::Resequence

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended> > extended;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Helper> helper;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::LogUpdate> log_update;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Resequence> resequence;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased> > role_based;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard> > standard;
        
}; // Native::Ip::AccessList


class Native::Ip::AccessList::Standard : public Entity
{
    public:
        Standard();
        ~Standard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of uint16, string
        class AccessListSeqRule; //type: Native::Ip::AccessList::Standard::AccessListSeqRule
        class Default_; //type: Native::Ip::AccessList::Standard::Default_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_> default_;
        
}; // Native::Ip::AccessList::Standard


class Native::Ip::AccessList::Standard::AccessListSeqRule : public Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint64
        YLeaf remark; //type: string
        class Deny; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Deny
        class Permit; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Permit> permit;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule


class Native::Ip::AccessList::Standard::AccessListSeqRule::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Deny


class Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce : public Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_prefix; //type: string
        YLeaf mask; //type: string
        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce


class Native::Ip::AccessList::Standard::AccessListSeqRule::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Permit


class Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce : public Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_prefix; //type: string
        YLeaf mask; //type: string
        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce


class Native::Ip::AccessList::Standard::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessListSeqRule; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ip::AccessList::Standard::Default_


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule : public Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint64
        YLeaf remark; //type: string
        class Deny; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny
        class Permit; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit> permit;
        
}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce : public Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_prefix; //type: string
        YLeaf mask; //type: string
        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce : public Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_prefix; //type: string
        YLeaf mask; //type: string
        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce


class Native::Ip::AccessList::RoleBased : public Entity
{
    public:
        RoleBased();
        ~RoleBased();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class AccessListSeqRule; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule
        class Default_; //type: Native::Ip::AccessList::RoleBased::Default_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_> default_;
        
}; // Native::Ip::AccessList::RoleBased


class Native::Ip::AccessList::RoleBased::AccessListSeqRule : public Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint64
        YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule : public Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: ActionEnum
        YLeaf protocol; //type: one of uint8, enumeration
        YLeaf object_group_str; //type: string
        YLeaf dscp; //type: one of uint8, enumeration
        YLeaf fragments; //type: empty
        YLeaf log; //type: empty
        YLeaf log_input; //type: empty
        YLeaf option; //type: one of uint8, enumeration
        YLeaf precedence; //type: one of uint8, enumeration
        YLeaf time_range; //type: string
        YLeaf tos; //type: one of uint8, enumeration
        YLeaf ack; //type: empty
        YLeaf fin; //type: empty
        YLeaf psh; //type: empty
        YLeaf rst; //type: empty
        YLeaf syn; //type: empty
        YLeaf urg; //type: empty
        YLeaf established; //type: empty
        YLeaf msg_type; //type: uint8
        YLeaf msg_code; //type: uint8
        YLeaf named_msg_type; //type: NamedMsgTypeEnum
        class Ttl; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl> ttl;
                class ActionEnum;
        class ProtocolEnum;
        class OptionEnum;
        class PrecedenceEnum;
        class TosEnum;
        class NamedMsgTypeEnum;

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl : public Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eq; //type: uint8
        YLeaf gt; //type: uint8
        YLeaf lt; //type: uint8
        YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value1; //type: uint8
        YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll : public Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf plusack; //type: empty
        YLeaf plusfin; //type: empty
        YLeaf pluspsh; //type: empty
        YLeaf plusrst; //type: empty
        YLeaf plussyn; //type: empty
        YLeaf plusurg; //type: empty
        YLeaf minusack; //type: empty
        YLeaf minusfin; //type: empty
        YLeaf minuspsh; //type: empty
        YLeaf minusrst; //type: empty
        YLeaf minussyn; //type: empty
        YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny : public Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf plusack; //type: empty
        YLeaf plusfin; //type: empty
        YLeaf pluspsh; //type: empty
        YLeaf plusrst; //type: empty
        YLeaf plussyn; //type: empty
        YLeaf plusurg; //type: empty
        YLeaf minusack; //type: empty
        YLeaf minusfin; //type: empty
        YLeaf minuspsh; //type: empty
        YLeaf minusrst; //type: empty
        YLeaf minussyn; //type: empty
        YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::RoleBased::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessListSeqRule; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default_


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule : public Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint64
        YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule : public Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: ActionEnum
        YLeaf protocol; //type: one of uint8, enumeration
        YLeaf object_group_str; //type: string
        YLeaf dscp; //type: one of uint8, enumeration
        YLeaf fragments; //type: empty
        YLeaf log; //type: empty
        YLeaf log_input; //type: empty
        YLeaf option; //type: one of uint8, enumeration
        YLeaf precedence; //type: one of uint8, enumeration
        YLeaf time_range; //type: string
        YLeaf tos; //type: one of uint8, enumeration
        YLeaf ack; //type: empty
        YLeaf fin; //type: empty
        YLeaf psh; //type: empty
        YLeaf rst; //type: empty
        YLeaf syn; //type: empty
        YLeaf urg; //type: empty
        YLeaf established; //type: empty
        YLeaf msg_type; //type: uint8
        YLeaf msg_code; //type: uint8
        YLeaf named_msg_type; //type: NamedMsgTypeEnum
        class Ttl; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl> ttl;
                class ActionEnum;
        class ProtocolEnum;
        class OptionEnum;
        class PrecedenceEnum;
        class TosEnum;
        class NamedMsgTypeEnum;

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl : public Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eq; //type: uint8
        YLeaf gt; //type: uint8
        YLeaf lt; //type: uint8
        YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value1; //type: uint8
        YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll : public Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf plusack; //type: empty
        YLeaf plusfin; //type: empty
        YLeaf pluspsh; //type: empty
        YLeaf plusrst; //type: empty
        YLeaf plussyn; //type: empty
        YLeaf plusurg; //type: empty
        YLeaf minusack; //type: empty
        YLeaf minusfin; //type: empty
        YLeaf minuspsh; //type: empty
        YLeaf minusrst; //type: empty
        YLeaf minussyn; //type: empty
        YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny : public Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf plusack; //type: empty
        YLeaf plusfin; //type: empty
        YLeaf pluspsh; //type: empty
        YLeaf plusrst; //type: empty
        YLeaf plussyn; //type: empty
        YLeaf plusurg; //type: empty
        YLeaf minusack; //type: empty
        YLeaf minusfin; //type: empty
        YLeaf minuspsh; //type: empty
        YLeaf minusrst; //type: empty
        YLeaf minussyn; //type: empty
        YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::Extended : public Entity
{
    public:
        Extended();
        ~Extended();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of uint16, string
        class AccessListSeqRule; //type: Native::Ip::AccessList::Extended::AccessListSeqRule
        class Default_; //type: Native::Ip::AccessList::Extended::Default_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_> default_;
        
}; // Native::Ip::AccessList::Extended


class Native::Ip::AccessList::Extended::AccessListSeqRule : public Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint64
        YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::Extended::AccessListSeqRule


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule : public Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: ActionEnum
        YLeaf protocol; //type: one of uint8, enumeration
        YLeaf object_group_str; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf mask; //type: string
        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf object_group; //type: string
        YLeaf src_eq; //type: one of uint16, enumeration
        YLeaf src_gt; //type: one of uint16, enumeration
        YLeaf src_lt; //type: one of uint16, enumeration
        YLeaf src_neq; //type: one of uint16, enumeration
        YLeaf src_range1; //type: one of uint16, enumeration
        YLeaf src_range2; //type: one of uint16, enumeration
        YLeaf dest_ipv4_address; //type: string
        YLeaf dest_mask; //type: string
        YLeaf dst_any; //type: empty
        YLeaf dst_host; //type: string
        YLeaf dst_object_group; //type: string
        YLeaf dst_eq; //type: one of uint16, enumeration
        YLeaf dst_gt; //type: one of uint16, enumeration
        YLeaf dst_lt; //type: one of uint16, enumeration
        YLeaf dst_neq; //type: one of uint16, enumeration
        YLeaf dst_range1; //type: one of uint16, enumeration
        YLeaf dst_range2; //type: one of uint16, enumeration
        YLeaf dscp; //type: one of uint8, enumeration
        YLeaf fragments; //type: empty
        YLeaf log; //type: empty
        YLeaf log_input; //type: empty
        YLeaf option; //type: one of uint8, enumeration
        YLeaf precedence; //type: one of uint8, enumeration
        YLeaf time_range; //type: string
        YLeaf tos; //type: one of uint8, enumeration
        YLeaf ack; //type: empty
        YLeaf fin; //type: empty
        YLeaf psh; //type: empty
        YLeaf rst; //type: empty
        YLeaf syn; //type: empty
        YLeaf urg; //type: empty
        YLeaf established; //type: empty
        YLeaf msg_type; //type: uint8
        YLeaf msg_code; //type: uint8
        YLeaf named_msg_type; //type: NamedMsgTypeEnum
        class Ttl; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl> ttl;
                class ActionEnum;
        class ProtocolEnum;
        class OptionEnum;
        class PrecedenceEnum;
        class TosEnum;
        class NamedMsgTypeEnum;

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl : public Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eq; //type: uint8
        YLeaf gt; //type: uint8
        YLeaf lt; //type: uint8
        YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value1; //type: uint8
        YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll : public Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf plusack; //type: empty
        YLeaf plusfin; //type: empty
        YLeaf pluspsh; //type: empty
        YLeaf plusrst; //type: empty
        YLeaf plussyn; //type: empty
        YLeaf plusurg; //type: empty
        YLeaf minusack; //type: empty
        YLeaf minusfin; //type: empty
        YLeaf minuspsh; //type: empty
        YLeaf minusrst; //type: empty
        YLeaf minussyn; //type: empty
        YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny : public Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf plusack; //type: empty
        YLeaf plusfin; //type: empty
        YLeaf pluspsh; //type: empty
        YLeaf plusrst; //type: empty
        YLeaf plussyn; //type: empty
        YLeaf plusurg; //type: empty
        YLeaf minusack; //type: empty
        YLeaf minusfin; //type: empty
        YLeaf minuspsh; //type: empty
        YLeaf minusrst; //type: empty
        YLeaf minussyn; //type: empty
        YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::Extended::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessListSeqRule; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ip::AccessList::Extended::Default_


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule : public Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint64
        YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule : public Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: ActionEnum
        YLeaf protocol; //type: one of uint8, enumeration
        YLeaf object_group_str; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf mask; //type: string
        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf object_group; //type: string
        YLeaf src_eq; //type: one of uint16, enumeration
        YLeaf src_gt; //type: one of uint16, enumeration
        YLeaf src_lt; //type: one of uint16, enumeration
        YLeaf src_neq; //type: one of uint16, enumeration
        YLeaf src_range1; //type: one of uint16, enumeration
        YLeaf src_range2; //type: one of uint16, enumeration
        YLeaf dest_ipv4_address; //type: string
        YLeaf dest_mask; //type: string
        YLeaf dst_any; //type: empty
        YLeaf dst_host; //type: string
        YLeaf dst_object_group; //type: string
        YLeaf dst_eq; //type: one of uint16, enumeration
        YLeaf dst_gt; //type: one of uint16, enumeration
        YLeaf dst_lt; //type: one of uint16, enumeration
        YLeaf dst_neq; //type: one of uint16, enumeration
        YLeaf dst_range1; //type: one of uint16, enumeration
        YLeaf dst_range2; //type: one of uint16, enumeration
        YLeaf dscp; //type: one of uint8, enumeration
        YLeaf fragments; //type: empty
        YLeaf log; //type: empty
        YLeaf log_input; //type: empty
        YLeaf option; //type: one of uint8, enumeration
        YLeaf precedence; //type: one of uint8, enumeration
        YLeaf time_range; //type: string
        YLeaf tos; //type: one of uint8, enumeration
        YLeaf ack; //type: empty
        YLeaf fin; //type: empty
        YLeaf psh; //type: empty
        YLeaf rst; //type: empty
        YLeaf syn; //type: empty
        YLeaf urg; //type: empty
        YLeaf established; //type: empty
        YLeaf msg_type; //type: uint8
        YLeaf msg_code; //type: uint8
        YLeaf named_msg_type; //type: NamedMsgTypeEnum
        class Ttl; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl> ttl;
                class ActionEnum;
        class ProtocolEnum;
        class OptionEnum;
        class PrecedenceEnum;
        class TosEnum;
        class NamedMsgTypeEnum;

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl : public Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eq; //type: uint8
        YLeaf gt; //type: uint8
        YLeaf lt; //type: uint8
        YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value1; //type: uint8
        YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll : public Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf plusack; //type: empty
        YLeaf plusfin; //type: empty
        YLeaf pluspsh; //type: empty
        YLeaf plusrst; //type: empty
        YLeaf plussyn; //type: empty
        YLeaf plusurg; //type: empty
        YLeaf minusack; //type: empty
        YLeaf minusfin; //type: empty
        YLeaf minuspsh; //type: empty
        YLeaf minusrst; //type: empty
        YLeaf minussyn; //type: empty
        YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny : public Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf plusack; //type: empty
        YLeaf plusfin; //type: empty
        YLeaf pluspsh; //type: empty
        YLeaf plusrst; //type: empty
        YLeaf plussyn; //type: empty
        YLeaf plusurg; //type: empty
        YLeaf minusack; //type: empty
        YLeaf minusfin; //type: empty
        YLeaf minuspsh; //type: empty
        YLeaf minusrst; //type: empty
        YLeaf minussyn; //type: empty
        YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::Helper : public Entity
{
    public:
        Helper();
        ~Helper();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf egress; //type: empty
        YLeaf check; //type: empty

}; // Native::Ip::AccessList::Helper


class Native::Ip::AccessList::LogUpdate : public Entity
{
    public:
        LogUpdate();
        ~LogUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: uint64

}; // Native::Ip::AccessList::LogUpdate


class Native::Ip::AccessList::Logging : public Entity
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

        YLeaf hash_generation; //type: empty
        YLeaf interval; //type: uint64

}; // Native::Ip::AccessList::Logging


class Native::Ip::AccessList::Resequence : public Entity
{
    public:
        Resequence();
        ~Resequence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf numbers; //type: union
        YLeaf start_seq_no; //type: uint64
        YLeaf step_seq_no; //type: uint64

}; // Native::Ip::AccessList::Resequence


class Native::Ip::Device : public Entity
{
    public:
        Device();
        ~Device();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tracking; //type: Native::Ip::Device::Tracking

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Device::Tracking> tracking; // presence node
        
}; // Native::Ip::Device


class Native::Ip::Device::Tracking : public Entity
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

        YLeaf trace_buffer; //type: empty
        class Probe; //type: Native::Ip::Device::Tracking::Probe

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe> probe;
        
}; // Native::Ip::Device::Tracking


class Native::Ip::Device::Tracking::Probe : public Entity
{
    public:
        Probe();
        ~Probe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint8
        YLeaf delay; //type: uint8
        YLeaf interval; //type: uint32
        class AutoSource; //type: Native::Ip::Device::Tracking::Probe::AutoSource

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe::AutoSource> auto_source; // presence node
        
}; // Native::Ip::Device::Tracking::Probe


class Native::Ip::Device::Tracking::Probe::AutoSource : public Entity
{
    public:
        AutoSource();
        ~AutoSource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf override; //type: empty
        class Fallback; //type: Native::Ip::Device::Tracking::Probe::AutoSource::Fallback

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe::AutoSource::Fallback> fallback;
        
}; // Native::Ip::Device::Tracking::Probe::AutoSource


class Native::Ip::Device::Tracking::Probe::AutoSource::Fallback : public Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf src_ip; //type: string
        YLeaf mask; //type: string

}; // Native::Ip::Device::Tracking::Probe::AutoSource::Fallback


class Native::Ip::Radius : public Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SourceInterface; //type: Native::Ip::Radius::SourceInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface> source_interface;
        
}; // Native::Ip::Radius


class Native::Ip::Radius::SourceInterface : public Entity
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
        class AtmSubinterface; //type: Native::Ip::Radius::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::Radius::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::Radius::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Radius::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Radius::SourceInterface


class Native::Ip::Radius::SourceInterface::AtmSubinterface : public Entity
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

}; // Native::Ip::Radius::SourceInterface::AtmSubinterface


class Native::Ip::Radius::SourceInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Ip::Radius::SourceInterface::AtmAcrsubinterface


class Native::Ip::Radius::SourceInterface::LispSubinterface : public Entity
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

}; // Native::Ip::Radius::SourceInterface::LispSubinterface


class Native::Ip::Radius::SourceInterface::PortChannelSubinterface : public Entity
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

}; // Native::Ip::Radius::SourceInterface::PortChannelSubinterface


class Native::Ip::Tacacs : public Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SourceInterface; //type: Native::Ip::Tacacs::SourceInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface> source_interface;
        
}; // Native::Ip::Tacacs


class Native::Ip::Tacacs::SourceInterface : public Entity
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
        class AtmSubinterface; //type: Native::Ip::Tacacs::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::Tacacs::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Tacacs::SourceInterface


class Native::Ip::Tacacs::SourceInterface::AtmSubinterface : public Entity
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

}; // Native::Ip::Tacacs::SourceInterface::AtmSubinterface


class Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface


class Native::Ip::Tacacs::SourceInterface::LispSubinterface : public Entity
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

}; // Native::Ip::Tacacs::SourceInterface::LispSubinterface


class Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface : public Entity
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

}; // Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface


class Native::Ip::CommunityList : public Entity
{
    public:
        CommunityList();
        ~CommunityList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NumberStandard; //type: Native::Ip::CommunityList::NumberStandard
        class NumberExpanded; //type: Native::Ip::CommunityList::NumberExpanded
        class Expanded; //type: Native::Ip::CommunityList::Expanded
        class Standard; //type: Native::Ip::CommunityList::Standard

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded> > expanded;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded> > number_expanded;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard> > number_standard;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard> > standard;
        
}; // Native::Ip::CommunityList


class Native::Ip::CommunityList::NumberStandard : public Entity
{
    public:
        NumberStandard();
        ~NumberStandard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::CommunityList::NumberStandard::Deny
        class Permit; //type: Native::Ip::CommunityList::NumberStandard::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard::Permit> permit;
        
}; // Native::Ip::CommunityList::NumberStandard


class Native::Ip::CommunityList::NumberStandard::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList deny_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::NumberStandard::Deny


class Native::Ip::CommunityList::NumberStandard::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList permit_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::NumberStandard::Permit


class Native::Ip::CommunityList::NumberExpanded : public Entity
{
    public:
        NumberExpanded();
        ~NumberExpanded();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::CommunityList::NumberExpanded::Deny
        class Permit; //type: Native::Ip::CommunityList::NumberExpanded::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded::Permit> permit;
        
}; // Native::Ip::CommunityList::NumberExpanded


class Native::Ip::CommunityList::NumberExpanded::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList deny_list; //type: list of  string

}; // Native::Ip::CommunityList::NumberExpanded::Deny


class Native::Ip::CommunityList::NumberExpanded::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList permit_list; //type: list of  string

}; // Native::Ip::CommunityList::NumberExpanded::Permit


class Native::Ip::CommunityList::Expanded : public Entity
{
    public:
        Expanded();
        ~Expanded();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Deny; //type: Native::Ip::CommunityList::Expanded::Deny
        class Permit; //type: Native::Ip::CommunityList::Expanded::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded::Permit> permit;
        
}; // Native::Ip::CommunityList::Expanded


class Native::Ip::CommunityList::Expanded::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList deny_list; //type: list of  string

}; // Native::Ip::CommunityList::Expanded::Deny


class Native::Ip::CommunityList::Expanded::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList permit_list; //type: list of  string

}; // Native::Ip::CommunityList::Expanded::Permit


class Native::Ip::CommunityList::Standard : public Entity
{
    public:
        Standard();
        ~Standard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Deny; //type: Native::Ip::CommunityList::Standard::Deny
        class Permit; //type: Native::Ip::CommunityList::Standard::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard::Permit> permit;
        
}; // Native::Ip::CommunityList::Standard


class Native::Ip::CommunityList::Standard::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList deny_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::Standard::Deny


class Native::Ip::CommunityList::Standard::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList permit_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::Standard::Permit


class Native::Ip::ExtcommunityList : public Entity
{
    public:
        ExtcommunityList();
        ~ExtcommunityList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NumberStandard; //type: Native::Ip::ExtcommunityList::NumberStandard
        class NumberExpanded; //type: Native::Ip::ExtcommunityList::NumberExpanded
        class Expanded; //type: Native::Ip::ExtcommunityList::Expanded
        class Standard; //type: Native::Ip::ExtcommunityList::Standard

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Expanded> > expanded;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberExpanded> > number_expanded;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard> > number_standard;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard> > standard;
        
}; // Native::Ip::ExtcommunityList


class Native::Ip::ExtcommunityList::NumberStandard : public Entity
{
    public:
        NumberStandard();
        ~NumberStandard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::NumberStandard


class Native::Ip::ExtcommunityList::NumberStandard::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rt; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt> > rt;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo> > soo;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher> > vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::NumberStandard::Deny


class Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt : public Entity
{
    public:
        Rt();
        ~Rt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt


class Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo : public Entity
{
    public:
        Soo();
        ~Soo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo


class Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher : public Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher


class Native::Ip::ExtcommunityList::NumberStandard::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rt; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt> > rt;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo> > soo;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher> > vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::NumberStandard::Permit


class Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt : public Entity
{
    public:
        Rt();
        ~Rt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt


class Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo : public Entity
{
    public:
        Soo();
        ~Soo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo


class Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher : public Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher


class Native::Ip::ExtcommunityList::NumberExpanded : public Entity
{
    public:
        NumberExpanded();
        ~NumberExpanded();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::ExtcommunityList::NumberExpanded::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::NumberExpanded::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberExpanded::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberExpanded::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::NumberExpanded


class Native::Ip::ExtcommunityList::NumberExpanded::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList deny_list; //type: list of  string

}; // Native::Ip::ExtcommunityList::NumberExpanded::Deny


class Native::Ip::ExtcommunityList::NumberExpanded::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList permit_list; //type: list of  string

}; // Native::Ip::ExtcommunityList::NumberExpanded::Permit


class Native::Ip::ExtcommunityList::Expanded : public Entity
{
    public:
        Expanded();
        ~Expanded();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Deny; //type: Native::Ip::ExtcommunityList::Expanded::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::Expanded::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Expanded::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Expanded::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::Expanded


class Native::Ip::ExtcommunityList::Expanded::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList deny_list; //type: list of  string

}; // Native::Ip::ExtcommunityList::Expanded::Deny


class Native::Ip::ExtcommunityList::Expanded::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList permit_list; //type: list of  string

}; // Native::Ip::ExtcommunityList::Expanded::Permit


class Native::Ip::ExtcommunityList::Standard : public Entity
{
    public:
        Standard();
        ~Standard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Deny; //type: Native::Ip::ExtcommunityList::Standard::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::Standard::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::Standard


class Native::Ip::ExtcommunityList::Standard::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rt; //type: Native::Ip::ExtcommunityList::Standard::Deny::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::Standard::Deny::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Deny::Rt> > rt;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Deny::Soo> > soo;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher> > vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::Standard::Deny


class Native::Ip::ExtcommunityList::Standard::Deny::Rt : public Entity
{
    public:
        Rt();
        ~Rt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::Standard::Deny::Rt


class Native::Ip::ExtcommunityList::Standard::Deny::Soo : public Entity
{
    public:
        Soo();
        ~Soo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::Standard::Deny::Soo


class Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher : public Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher


class Native::Ip::ExtcommunityList::Standard::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rt; //type: Native::Ip::ExtcommunityList::Standard::Permit::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::Standard::Permit::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Permit::Rt> > rt;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Permit::Soo> > soo;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher> > vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::Standard::Permit


class Native::Ip::ExtcommunityList::Standard::Permit::Rt : public Entity
{
    public:
        Rt();
        ~Rt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::Standard::Permit::Rt


class Native::Ip::ExtcommunityList::Standard::Permit::Soo : public Entity
{
    public:
        Soo();
        ~Soo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::Standard::Permit::Soo


class Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher : public Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher


class Native::Ip::Http : public Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_class; //type: uint8
        YLeaf server; //type: boolean
        YLeaf secure_server; //type: boolean
        YLeaf secure_trustpoint; //type: string
        YLeaf secure_client_auth; //type: empty
        class Authentication; //type: Native::Ip::Http::Authentication
        class TimeoutPolicy; //type: Native::Ip::Http::TimeoutPolicy
        class Client; //type: Native::Ip::Http::Client

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Http::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Http::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Http::TimeoutPolicy> timeout_policy;
        
}; // Native::Ip::Http


class Native::Ip::Http::Authentication : public Entity
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

        YLeaf aaa; //type: empty
        YLeaf local; //type: empty

}; // Native::Ip::Http::Authentication


class Native::Ip::Http::TimeoutPolicy : public Entity
{
    public:
        TimeoutPolicy();
        ~TimeoutPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf idle; //type: uint16
        YLeaf life; //type: uint32
        YLeaf requests; //type: uint32

}; // Native::Ip::Http::TimeoutPolicy


class Native::Ip::Http::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf secure_trustpoint; //type: string
        YLeaf source_interface; //type: string
        class ProxyServer; //type: Native::Ip::Http::Client::ProxyServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Http::Client::ProxyServer> proxy_server;
        
}; // Native::Ip::Http::Client


class Native::Ip::Http::Client::ProxyServer : public Entity
{
    public:
        ProxyServer();
        ~ProxyServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proxy_server_name; //type: string
        YLeaf proxy_port; //type: uint16

}; // Native::Ip::Http::Client::ProxyServer


class Native::Ip::Icmp : public Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RateLimit; //type: Native::Ip::Icmp::RateLimit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit> rate_limit;
        
}; // Native::Ip::Icmp


class Native::Ip::Icmp::RateLimit : public Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf redirect; //type: RedirectEnum
        class Unreachable; //type: Native::Ip::Icmp::RateLimit::Unreachable

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit::Unreachable> unreachable;
                class RedirectEnum;

}; // Native::Ip::Icmp::RateLimit


class Native::Ip::Icmp::RateLimit::Unreachable : public Entity
{
    public:
        Unreachable();
        ~Unreachable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf df; //type: empty
        class Log; //type: Native::Ip::Icmp::RateLimit::Unreachable::Log

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit::Unreachable::Log> log; // presence node
        
}; // Native::Ip::Icmp::RateLimit::Unreachable


class Native::Ip::Icmp::RateLimit::Unreachable::Log : public Entity
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

        YLeaf number_unreachables; //type: uint32
        YLeaf log_message; //type: uint32

}; // Native::Ip::Icmp::RateLimit::Unreachable::Log


class Native::Ip::Igmp : public Entity
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

        class SnoopingConf; //type: Native::Ip::Igmp::SnoopingConf
        class Snooping; //type: Native::Ip::Igmp::Snooping
        class SsmMap; //type: Native::Ip::Igmp::SsmMap
        class Vrf; //type: Native::Ip::Igmp::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping> snooping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::SnoopingConf> snooping_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::SsmMap> ssm_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Vrf> > vrf;
        
}; // Native::Ip::Igmp


class Native::Ip::Igmp::SnoopingConf : public Entity
{
    public:
        SnoopingConf();
        ~SnoopingConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snooping; //type: boolean

}; // Native::Ip::Igmp::SnoopingConf


class Native::Ip::Igmp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2_entry_limit; //type: uint32
        YLeaf last_member_query_count; //type: uint8
        YLeaf last_member_query_interval; //type: uint16
        YLeaf report_suppression; //type: empty
        YLeaf robustness_variable; //type: uint8
        class Check; //type: Native::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::Ip::Igmp::Snooping::ExplicitTracking
        class Querier; //type: Native::Ip::Igmp::Snooping::Querier
        class Tcn; //type: Native::Ip::Igmp::Snooping::Tcn
        class Vlan; //type: Native::Ip::Igmp::Snooping::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier> querier; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn> tcn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan> vlan;
        
}; // Native::Ip::Igmp::Snooping


class Native::Ip::Igmp::Snooping::Check : public Entity
{
    public:
        Check();
        ~Check();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtr_alert_option; //type: empty
        YLeaf ttl; //type: empty

}; // Native::Ip::Igmp::Snooping::Check


class Native::Ip::Igmp::Snooping::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32

}; // Native::Ip::Igmp::Snooping::ExplicitTracking


class Native::Ip::Igmp::Snooping::Querier : public Entity
{
    public:
        Querier();
        ~Querier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf max_response_time; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf version; //type: uint8
        class Tcn; //type: Native::Ip::Igmp::Snooping::Querier::Tcn
        class Timer; //type: Native::Ip::Igmp::Snooping::Querier::Timer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier::Tcn> tcn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier::Timer> timer;
        
}; // Native::Ip::Igmp::Snooping::Querier


class Native::Ip::Igmp::Snooping::Querier::Tcn : public Entity
{
    public:
        Tcn();
        ~Tcn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Query; //type: Native::Ip::Igmp::Snooping::Querier::Tcn::Query

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier::Tcn::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Querier::Tcn


class Native::Ip::Igmp::Snooping::Querier::Tcn::Query : public Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint8
        YLeaf interval; //type: uint8

}; // Native::Ip::Igmp::Snooping::Querier::Tcn::Query


class Native::Ip::Igmp::Snooping::Querier::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expiry; //type: uint16

}; // Native::Ip::Igmp::Snooping::Querier::Timer


class Native::Ip::Igmp::Snooping::Tcn : public Entity
{
    public:
        Tcn();
        ~Tcn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flood; //type: Native::Ip::Igmp::Snooping::Tcn::Flood
        class Query; //type: Native::Ip::Igmp::Snooping::Tcn::Query

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn::Flood> flood;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Tcn

class Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::FwdEnum : public Enum
{
    public:
        static const Enum::YLeaf Null0;

};

class Native::Ip::ExplicitPath::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class Native::Ip::Spd::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf aggressive;

};

class Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ssh_rsa;

};

class Native::Ip::Tcp::PathMtuDiscovery::AgeTimerEnum : public Enum
{
    public:
        static const Enum::YLeaf infinite;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ahp;
        static const Enum::YLeaf eigrp;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf igmp;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf ipinip;
        static const Enum::YLeaf nos;
        static const Enum::YLeaf object_group;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf pcp;
        static const Enum::YLeaf pim;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum : public Enum
{
    public:
        static const Enum::YLeaf add_ext;
        static const Enum::YLeaf any_options;
        static const Enum::YLeaf com_security;
        static const Enum::YLeaf dps;
        static const Enum::YLeaf encode;
        static const Enum::YLeaf eool;
        static const Enum::YLeaf ext_ip;
        static const Enum::YLeaf ext_security;
        static const Enum::YLeaf finn;
        static const Enum::YLeaf imitd;
        static const Enum::YLeaf lsr;
        static const Enum::YLeaf mtup;
        static const Enum::YLeaf mtur;
        static const Enum::YLeaf no_op;
        static const Enum::YLeaf nsapa;
        static const Enum::YLeaf record_route;
        static const Enum::YLeaf router_alert;
        static const Enum::YLeaf sdb;
        static const Enum::YLeaf security;
        static const Enum::YLeaf ssr;
        static const Enum::YLeaf stream_id;
        static const Enum::YLeaf timestamp;
        static const Enum::YLeaf traceroute;
        static const Enum::YLeaf ump;
        static const Enum::YLeaf visa;
        static const Enum::YLeaf zsu;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::PrecedenceEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf routine;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::TosEnum : public Enum
{
    public:
        static const Enum::YLeaf max_reliability;
        static const Enum::YLeaf max_throughput;
        static const Enum::YLeaf min_delay;
        static const Enum::YLeaf min_monetary_cost;
        static const Enum::YLeaf normal;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf administratively_prohibited;
        static const Enum::YLeaf alternate_address;
        static const Enum::YLeaf conversion_error;
        static const Enum::YLeaf dod_host_prohibited;
        static const Enum::YLeaf dod_net_prohibited;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf general_parameter_problem;
        static const Enum::YLeaf host_isolated;
        static const Enum::YLeaf host_precedence_unreachable;
        static const Enum::YLeaf host_redirect;
        static const Enum::YLeaf host_tos_redirect;
        static const Enum::YLeaf host_tos_unreachable;
        static const Enum::YLeaf host_unknown;
        static const Enum::YLeaf host_unreachable;
        static const Enum::YLeaf information_reply;
        static const Enum::YLeaf information_request;
        static const Enum::YLeaf mask_reply;
        static const Enum::YLeaf mask_request;
        static const Enum::YLeaf mobile_redirect;
        static const Enum::YLeaf net_redirect;
        static const Enum::YLeaf net_tos_redirect;
        static const Enum::YLeaf net_tos_unreachable;
        static const Enum::YLeaf net_unreachable;
        static const Enum::YLeaf network_unknown;
        static const Enum::YLeaf no_room_for_option;
        static const Enum::YLeaf option_missing;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf port_unreachable;
        static const Enum::YLeaf precedence_unreachable;
        static const Enum::YLeaf protocol_unreachable;
        static const Enum::YLeaf reassembly_timeout;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf source_quench;
        static const Enum::YLeaf source_route_failed;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf timestamp_reply;
        static const Enum::YLeaf timestamp_request;
        static const Enum::YLeaf traceroute;
        static const Enum::YLeaf ttl_exceeded;
        static const Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ahp;
        static const Enum::YLeaf eigrp;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf igmp;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf ipinip;
        static const Enum::YLeaf nos;
        static const Enum::YLeaf object_group;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf pcp;
        static const Enum::YLeaf pim;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum : public Enum
{
    public:
        static const Enum::YLeaf add_ext;
        static const Enum::YLeaf any_options;
        static const Enum::YLeaf com_security;
        static const Enum::YLeaf dps;
        static const Enum::YLeaf encode;
        static const Enum::YLeaf eool;
        static const Enum::YLeaf ext_ip;
        static const Enum::YLeaf ext_security;
        static const Enum::YLeaf finn;
        static const Enum::YLeaf imitd;
        static const Enum::YLeaf lsr;
        static const Enum::YLeaf mtup;
        static const Enum::YLeaf mtur;
        static const Enum::YLeaf no_op;
        static const Enum::YLeaf nsapa;
        static const Enum::YLeaf record_route;
        static const Enum::YLeaf router_alert;
        static const Enum::YLeaf sdb;
        static const Enum::YLeaf security;
        static const Enum::YLeaf ssr;
        static const Enum::YLeaf stream_id;
        static const Enum::YLeaf timestamp;
        static const Enum::YLeaf traceroute;
        static const Enum::YLeaf ump;
        static const Enum::YLeaf visa;
        static const Enum::YLeaf zsu;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::PrecedenceEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf routine;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::TosEnum : public Enum
{
    public:
        static const Enum::YLeaf max_reliability;
        static const Enum::YLeaf max_throughput;
        static const Enum::YLeaf min_delay;
        static const Enum::YLeaf min_monetary_cost;
        static const Enum::YLeaf normal;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf administratively_prohibited;
        static const Enum::YLeaf alternate_address;
        static const Enum::YLeaf conversion_error;
        static const Enum::YLeaf dod_host_prohibited;
        static const Enum::YLeaf dod_net_prohibited;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf general_parameter_problem;
        static const Enum::YLeaf host_isolated;
        static const Enum::YLeaf host_precedence_unreachable;
        static const Enum::YLeaf host_redirect;
        static const Enum::YLeaf host_tos_redirect;
        static const Enum::YLeaf host_tos_unreachable;
        static const Enum::YLeaf host_unknown;
        static const Enum::YLeaf host_unreachable;
        static const Enum::YLeaf information_reply;
        static const Enum::YLeaf information_request;
        static const Enum::YLeaf mask_reply;
        static const Enum::YLeaf mask_request;
        static const Enum::YLeaf mobile_redirect;
        static const Enum::YLeaf net_redirect;
        static const Enum::YLeaf net_tos_redirect;
        static const Enum::YLeaf net_tos_unreachable;
        static const Enum::YLeaf net_unreachable;
        static const Enum::YLeaf network_unknown;
        static const Enum::YLeaf no_room_for_option;
        static const Enum::YLeaf option_missing;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf port_unreachable;
        static const Enum::YLeaf precedence_unreachable;
        static const Enum::YLeaf protocol_unreachable;
        static const Enum::YLeaf reassembly_timeout;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf source_quench;
        static const Enum::YLeaf source_route_failed;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf timestamp_reply;
        static const Enum::YLeaf timestamp_request;
        static const Enum::YLeaf traceroute;
        static const Enum::YLeaf ttl_exceeded;
        static const Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ahp;
        static const Enum::YLeaf eigrp;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf igmp;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf ipinip;
        static const Enum::YLeaf nos;
        static const Enum::YLeaf object_group;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf pcp;
        static const Enum::YLeaf pim;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum : public Enum
{
    public:
        static const Enum::YLeaf add_ext;
        static const Enum::YLeaf any_options;
        static const Enum::YLeaf com_security;
        static const Enum::YLeaf dps;
        static const Enum::YLeaf encode;
        static const Enum::YLeaf eool;
        static const Enum::YLeaf ext_ip;
        static const Enum::YLeaf ext_security;
        static const Enum::YLeaf finn;
        static const Enum::YLeaf imitd;
        static const Enum::YLeaf lsr;
        static const Enum::YLeaf mtup;
        static const Enum::YLeaf mtur;
        static const Enum::YLeaf no_op;
        static const Enum::YLeaf nsapa;
        static const Enum::YLeaf record_route;
        static const Enum::YLeaf router_alert;
        static const Enum::YLeaf sdb;
        static const Enum::YLeaf security;
        static const Enum::YLeaf ssr;
        static const Enum::YLeaf stream_id;
        static const Enum::YLeaf timestamp;
        static const Enum::YLeaf traceroute;
        static const Enum::YLeaf ump;
        static const Enum::YLeaf visa;
        static const Enum::YLeaf zsu;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::PrecedenceEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf routine;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::TosEnum : public Enum
{
    public:
        static const Enum::YLeaf max_reliability;
        static const Enum::YLeaf max_throughput;
        static const Enum::YLeaf min_delay;
        static const Enum::YLeaf min_monetary_cost;
        static const Enum::YLeaf normal;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf administratively_prohibited;
        static const Enum::YLeaf alternate_address;
        static const Enum::YLeaf conversion_error;
        static const Enum::YLeaf dod_host_prohibited;
        static const Enum::YLeaf dod_net_prohibited;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf general_parameter_problem;
        static const Enum::YLeaf host_isolated;
        static const Enum::YLeaf host_precedence_unreachable;
        static const Enum::YLeaf host_redirect;
        static const Enum::YLeaf host_tos_redirect;
        static const Enum::YLeaf host_tos_unreachable;
        static const Enum::YLeaf host_unknown;
        static const Enum::YLeaf host_unreachable;
        static const Enum::YLeaf information_reply;
        static const Enum::YLeaf information_request;
        static const Enum::YLeaf mask_reply;
        static const Enum::YLeaf mask_request;
        static const Enum::YLeaf mobile_redirect;
        static const Enum::YLeaf net_redirect;
        static const Enum::YLeaf net_tos_redirect;
        static const Enum::YLeaf net_tos_unreachable;
        static const Enum::YLeaf net_unreachable;
        static const Enum::YLeaf network_unknown;
        static const Enum::YLeaf no_room_for_option;
        static const Enum::YLeaf option_missing;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf port_unreachable;
        static const Enum::YLeaf precedence_unreachable;
        static const Enum::YLeaf protocol_unreachable;
        static const Enum::YLeaf reassembly_timeout;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf source_quench;
        static const Enum::YLeaf source_route_failed;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf timestamp_reply;
        static const Enum::YLeaf timestamp_request;
        static const Enum::YLeaf traceroute;
        static const Enum::YLeaf ttl_exceeded;
        static const Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ahp;
        static const Enum::YLeaf eigrp;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf igmp;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf ipinip;
        static const Enum::YLeaf nos;
        static const Enum::YLeaf object_group;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf pcp;
        static const Enum::YLeaf pim;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum : public Enum
{
    public:
        static const Enum::YLeaf add_ext;
        static const Enum::YLeaf any_options;
        static const Enum::YLeaf com_security;
        static const Enum::YLeaf dps;
        static const Enum::YLeaf encode;
        static const Enum::YLeaf eool;
        static const Enum::YLeaf ext_ip;
        static const Enum::YLeaf ext_security;
        static const Enum::YLeaf finn;
        static const Enum::YLeaf imitd;
        static const Enum::YLeaf lsr;
        static const Enum::YLeaf mtup;
        static const Enum::YLeaf mtur;
        static const Enum::YLeaf no_op;
        static const Enum::YLeaf nsapa;
        static const Enum::YLeaf record_route;
        static const Enum::YLeaf router_alert;
        static const Enum::YLeaf sdb;
        static const Enum::YLeaf security;
        static const Enum::YLeaf ssr;
        static const Enum::YLeaf stream_id;
        static const Enum::YLeaf timestamp;
        static const Enum::YLeaf traceroute;
        static const Enum::YLeaf ump;
        static const Enum::YLeaf visa;
        static const Enum::YLeaf zsu;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::PrecedenceEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf routine;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::TosEnum : public Enum
{
    public:
        static const Enum::YLeaf max_reliability;
        static const Enum::YLeaf max_throughput;
        static const Enum::YLeaf min_delay;
        static const Enum::YLeaf min_monetary_cost;
        static const Enum::YLeaf normal;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf administratively_prohibited;
        static const Enum::YLeaf alternate_address;
        static const Enum::YLeaf conversion_error;
        static const Enum::YLeaf dod_host_prohibited;
        static const Enum::YLeaf dod_net_prohibited;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf general_parameter_problem;
        static const Enum::YLeaf host_isolated;
        static const Enum::YLeaf host_precedence_unreachable;
        static const Enum::YLeaf host_redirect;
        static const Enum::YLeaf host_tos_redirect;
        static const Enum::YLeaf host_tos_unreachable;
        static const Enum::YLeaf host_unknown;
        static const Enum::YLeaf host_unreachable;
        static const Enum::YLeaf information_reply;
        static const Enum::YLeaf information_request;
        static const Enum::YLeaf mask_reply;
        static const Enum::YLeaf mask_request;
        static const Enum::YLeaf mobile_redirect;
        static const Enum::YLeaf net_redirect;
        static const Enum::YLeaf net_tos_redirect;
        static const Enum::YLeaf net_tos_unreachable;
        static const Enum::YLeaf net_unreachable;
        static const Enum::YLeaf network_unknown;
        static const Enum::YLeaf no_room_for_option;
        static const Enum::YLeaf option_missing;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf port_unreachable;
        static const Enum::YLeaf precedence_unreachable;
        static const Enum::YLeaf protocol_unreachable;
        static const Enum::YLeaf reassembly_timeout;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf source_quench;
        static const Enum::YLeaf source_route_failed;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf timestamp_reply;
        static const Enum::YLeaf timestamp_request;
        static const Enum::YLeaf traceroute;
        static const Enum::YLeaf ttl_exceeded;
        static const Enum::YLeaf unreachable;

};

class Native::Ip::Icmp::RateLimit::RedirectEnum : public Enum
{
    public:
        static const Enum::YLeaf host;
        static const Enum::YLeaf subnet;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_8_ */

