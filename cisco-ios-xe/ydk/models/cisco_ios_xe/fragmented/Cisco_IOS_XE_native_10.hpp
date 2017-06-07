#ifndef _CISCO_IOS_XE_NATIVE_10_
#define _CISCO_IOS_XE_NATIVE_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_9.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Ip::Wccp::Vrf : public Entity
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
        YLeaf source_interface; //type: string
        class WccpList; //type: Native::Ip::Wccp::Vrf::WccpList
        class WebCache; //type: Native::Ip::Wccp::Vrf::WebCache

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WccpList> > wccp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WebCache> web_cache;
        
}; // Native::Ip::Wccp::Vrf


class Native::Ip::Wccp::Vrf::WccpList : public Entity
{
    public:
        WccpList();
        ~WccpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        YLeaf group_address; //type: string
        YLeaf group_list; //type: one of uint16, string
        YLeaf mode; //type: ModeEnum
        YLeaf redirect_list; //type: one of uint16, string
        YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::Vrf::WccpList::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WccpList::Password> password;
                class ModeEnum;

}; // Native::Ip::Wccp::Vrf::WccpList


class Native::Ip::Wccp::Vrf::WccpList::Password : public Entity
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

}; // Native::Ip::Wccp::Vrf::WccpList::Password


class Native::Ip::Wccp::Vrf::WebCache : public Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf group_list; //type: one of uint16, string
        YLeaf mode; //type: ModeEnum
        YLeaf redirect_list; //type: one of uint16, string
        YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::Vrf::WebCache::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WebCache::Password> password;
                class ModeEnum;

}; // Native::Ip::Wccp::Vrf::WebCache


class Native::Ip::Wccp::Vrf::WebCache::Password : public Entity
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

}; // Native::Ip::Wccp::Vrf::WebCache::Password


class Native::Mka : public Entity
{
    public:
        Mka();
        ~Mka();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Policy; //type: Native::Mka::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mka::Policy> > policy;
        
}; // Native::Mka


class Native::Mka::Policy : public Entity
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

        YLeaf name; //type: string
        class MacsecCipherSuite; //type: Native::Mka::Policy::MacsecCipherSuite

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mka::Policy::MacsecCipherSuite> macsec_cipher_suite;
        
}; // Native::Mka::Policy


class Native::Mka::Policy::MacsecCipherSuite : public Entity
{
    public:
        MacsecCipherSuite();
        ~MacsecCipherSuite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gcm_aes_128; //type: empty
        YLeaf gcm_aes_256; //type: empty

}; // Native::Mka::Policy::MacsecCipherSuite


class Native::Macro : public Entity
{
    public:
        Macro();
        ~Macro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Global; //type: Native::Macro::Global
        class Auto_; //type: Native::Macro::Auto_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Macro::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Macro::Global> global;
        
}; // Native::Macro


class Native::Macro::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string

}; // Native::Macro::Global


class Native::Macro::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Execute; //type: Native::Macro::Auto_::Execute
        class Global; //type: Native::Macro::Auto_::Global

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Macro::Auto_::Execute> > execute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Macro::Auto_::Global> global;
        
}; // Native::Macro::Auto_


class Native::Macro::Auto_::Execute : public Entity
{
    public:
        Execute();
        ~Execute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trigger_event; //type: string
        class Builtin; //type: Native::Macro::Auto_::Execute::Builtin

        std::shared_ptr<Cisco_IOS_XE_native::Native::Macro::Auto_::Execute::Builtin> builtin;
        
}; // Native::Macro::Auto_::Execute


class Native::Macro::Auto_::Execute::Builtin : public Entity
{
    public:
        Builtin();
        ~Builtin();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf smart_port_configuration; //type: SmartPortConfigurationEnum
        YLeaf parameters; //type: string
        class SmartPortConfigurationEnum;

}; // Native::Macro::Auto_::Execute::Builtin


class Native::Macro::Auto_::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processing; //type: empty

}; // Native::Macro::Auto_::Global


class Native::Ipv6 : public Entity
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

        YLeaf unicast_routing; //type: empty
        YLeaf source_route; //type: boolean
        class SourceGuard; //type: Native::Ipv6::SourceGuard
        class DestinationGuard; //type: Native::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Ipv6::Dhcp
        class AccessList; //type: Native::Ipv6::AccessList
        class Multicast; //type: Native::Ipv6::Multicast
        class Cef; //type: Native::Ipv6::Cef
        class Nd; //type: Native::Ipv6::Nd
        class Pim; //type: Native::Ipv6::Pim
        class Route; //type: Native::Ipv6::Route
        class Router; //type: Native::Ipv6::Router
        class Spd; //type: Native::Ipv6::Spd
        class PrefixList; //type: Native::Ipv6::PrefixList
        class Mld; //type: Native::Ipv6::Mld
        class MulticastRouting; //type: Native::Ipv6::MulticastRouting
        class Rip; //type: Native::Ipv6::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList> access_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Cef> cef; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::DestinationGuard> destination_guard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Mld> mld;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::MulticastRouting> multicast_routing; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd> nd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::PrefixList> prefix_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Route> route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::SourceGuard> source_guard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Spd> spd;
        
}; // Native::Ipv6


class Native::Ipv6::SourceGuard : public Entity
{
    public:
        SourceGuard();
        ~SourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Policy; //type: Native::Ipv6::SourceGuard::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy> > policy;
        
}; // Native::Ipv6::SourceGuard


class Native::Ipv6::SourceGuard::Policy : public Entity
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

        YLeaf source_guard_policy_name; //type: string
        class Validate; //type: Native::Ipv6::SourceGuard::Policy::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy::Validate> validate;
        
}; // Native::Ipv6::SourceGuard::Policy


class Native::Ipv6::SourceGuard::Policy::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty
        YLeaf prefix; //type: empty

}; // Native::Ipv6::SourceGuard::Policy::Validate


class Native::Ipv6::DestinationGuard : public Entity
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

        class Policy; //type: Native::Ipv6::DestinationGuard::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::DestinationGuard::Policy> > policy;
        
}; // Native::Ipv6::DestinationGuard


class Native::Ipv6::DestinationGuard::Policy : public Entity
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

        YLeaf destination_guard_policy_name; //type: string
        class Enforcement; //type: Native::Ipv6::DestinationGuard::Policy::Enforcement

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::DestinationGuard::Policy::Enforcement> enforcement;
        
}; // Native::Ipv6::DestinationGuard::Policy


class Native::Ipv6::DestinationGuard::Policy::Enforcement : public Entity
{
    public:
        Enforcement();
        ~Enforcement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        YLeaf stressed; //type: empty

}; // Native::Ipv6::DestinationGuard::Policy::Enforcement


class Native::Ipv6::Dhcp : public Entity
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

        class Server; //type: Native::Ipv6::Dhcp::Server
        class Guard; //type: Native::Ipv6::Dhcp::Guard
        class Pool; //type: Native::Ipv6::Dhcp::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard> guard;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool> > pool;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Server> server;
        
}; // Native::Ipv6::Dhcp


class Native::Ipv6::Dhcp::Server : public Entity
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

        class Vrf; //type: Native::Ipv6::Dhcp::Server::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Server::Vrf> vrf;
        
}; // Native::Ipv6::Dhcp::Server


class Native::Ipv6::Dhcp::Server::Vrf : public Entity
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

        YLeaf enable; //type: empty

}; // Native::Ipv6::Dhcp::Server::Vrf


class Native::Ipv6::Dhcp::Guard : public Entity
{
    public:
        Guard();
        ~Guard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Policy; //type: Native::Ipv6::Dhcp::Guard::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard::Policy> > policy;
        
}; // Native::Ipv6::Dhcp::Guard


class Native::Ipv6::Dhcp::Guard::Policy : public Entity
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

        YLeaf dhcp_guard_policy_name; //type: string
        class DeviceRole; //type: Native::Ipv6::Dhcp::Guard::Policy::DeviceRole

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard::Policy::DeviceRole> device_role;
        
}; // Native::Ipv6::Dhcp::Guard::Policy


class Native::Ipv6::Dhcp::Guard::Policy::DeviceRole : public Entity
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

        YLeaf server; //type: empty
        YLeaf client; //type: empty

}; // Native::Ipv6::Dhcp::Guard::Policy::DeviceRole


class Native::Ipv6::Dhcp::Pool : public Entity
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

        YLeaf name; //type: string
        YLeaf vrf; //type: string
        YLeaf domain_name; //type: string
        YLeafList dns_server; //type: list of  string
        class Address; //type: Native::Ipv6::Dhcp::Pool::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Address> address;
        
}; // Native::Ipv6::Dhcp::Pool


class Native::Ipv6::Dhcp::Pool::Address : public Entity
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

        class Prefix; //type: Native::Ipv6::Dhcp::Pool::Address::Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Address::Prefix> > prefix;
        
}; // Native::Ipv6::Dhcp::Pool::Address


class Native::Ipv6::Dhcp::Pool::Address::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_address; //type: string
        class Lifetime; //type: Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime> lifetime;
        
}; // Native::Ipv6::Dhcp::Pool::Address::Prefix


class Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime : public Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf valid_lifetime; //type: one of uint32, enumeration
        YLeaf preferred_lifetime; //type: one of uint32, enumeration
        class ValidLifetimeEnum;
        class PreferredLifetimeEnum;

}; // Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime


class Native::Ipv6::AccessList : public Entity
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
        class NamedAcl; //type: Native::Ipv6::AccessList::NamedAcl
        class NamedRbAcl; //type: Native::Ipv6::AccessList::NamedRbAcl
        class LogUpdate; //type: Native::Ipv6::AccessList::LogUpdate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::LogUpdate> log_update;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl> > named_acl;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl> > named_rb_acl;
        
}; // Native::Ipv6::AccessList


class Native::Ipv6::AccessList::NamedAcl : public Entity
{
    public:
        NamedAcl();
        ~NamedAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule
        class Default_; //type: Native::Ipv6::AccessList::NamedAcl::Default_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::Default_> default_;
        
}; // Native::Ipv6::AccessList::NamedAcl


class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule : public Entity
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
        class AceRule; //type: Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule


class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule : public Entity
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
        YLeaf source_host; //type: one of union, string
        YLeaf source_address; //type: string
        YLeaf source_wildcard_bits; //type: string
        YLeaf source_prefix; //type: string
        YLeaf any; //type: empty
        YLeaf src_eq; //type: one of uint16, enumeration
        YLeaf src_gt; //type: one of uint16, enumeration
        YLeaf src_lt; //type: one of uint16, enumeration
        YLeaf src_neq; //type: one of uint16, enumeration
        YLeaf src_range1; //type: one of uint16, enumeration
        YLeaf src_range2; //type: one of uint16, enumeration
        YLeaf destination_host; //type: one of union, string
        YLeaf destination_address; //type: string
        YLeaf destination_wildcard_bits; //type: string
        YLeaf destination_prefix; //type: string
        YLeaf destination_any; //type: empty
        YLeaf dst_eq; //type: one of uint16, enumeration
        YLeaf dst_gt; //type: one of uint16, enumeration
        YLeaf dst_lt; //type: one of uint16, enumeration
        YLeaf dst_neq; //type: one of uint16, enumeration
        YLeaf dst_range1; //type: one of uint16, enumeration
        YLeaf dst_range2; //type: one of uint16, enumeration
        YLeaf auth; //type: empty
        YLeaf dest_option; //type: empty
        YLeaf dscp; //type: one of uint8, enumeration
        YLeaf flow_label; //type: uint32
        YLeaf fragments; //type: empty
        YLeaf hbh; //type: empty
        YLeaf log; //type: empty
        YLeaf log_input; //type: empty
        YLeaf mobility; //type: empty
        YLeaf mobility_type; //type: one of uint8, enumeration
        YLeaf routing; //type: empty
        YLeaf routing_type; //type: uint8
        YLeaf time_range; //type: string
        YLeaf ack; //type: empty
        YLeaf fin; //type: empty
        YLeaf psh; //type: empty
        YLeaf rst; //type: empty
        YLeaf syn; //type: empty
        YLeaf urg; //type: empty
        YLeaf established; //type: empty
        YLeaf msg_type_case; //type: uint8
        YLeaf msg_code; //type: uint8
        YLeaf named_msg_type; //type: NamedMsgTypeEnum
        class ActionEnum;
        class ProtocolEnum;
        class NamedMsgTypeEnum;

}; // Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::NamedAcl::Default_ : public Entity
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

        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ipv6::AccessList::NamedAcl::Default_


class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule : public Entity
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
        class AceRule; //type: Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule


class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule : public Entity
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
        YLeaf source_host; //type: one of union, string
        YLeaf source_address; //type: string
        YLeaf source_wildcard_bits; //type: string
        YLeaf source_prefix; //type: string
        YLeaf any; //type: empty
        YLeaf src_eq; //type: one of uint16, enumeration
        YLeaf src_gt; //type: one of uint16, enumeration
        YLeaf src_lt; //type: one of uint16, enumeration
        YLeaf src_neq; //type: one of uint16, enumeration
        YLeaf src_range1; //type: one of uint16, enumeration
        YLeaf src_range2; //type: one of uint16, enumeration
        YLeaf destination_host; //type: one of union, string
        YLeaf destination_address; //type: string
        YLeaf destination_wildcard_bits; //type: string
        YLeaf destination_prefix; //type: string
        YLeaf destination_any; //type: empty
        YLeaf dst_eq; //type: one of uint16, enumeration
        YLeaf dst_gt; //type: one of uint16, enumeration
        YLeaf dst_lt; //type: one of uint16, enumeration
        YLeaf dst_neq; //type: one of uint16, enumeration
        YLeaf dst_range1; //type: one of uint16, enumeration
        YLeaf dst_range2; //type: one of uint16, enumeration
        YLeaf auth; //type: empty
        YLeaf dest_option; //type: empty
        YLeaf dscp; //type: one of uint8, enumeration
        YLeaf flow_label; //type: uint32
        YLeaf fragments; //type: empty
        YLeaf hbh; //type: empty
        YLeaf log; //type: empty
        YLeaf log_input; //type: empty
        YLeaf mobility; //type: empty
        YLeaf mobility_type; //type: one of uint8, enumeration
        YLeaf routing; //type: empty
        YLeaf routing_type; //type: uint8
        YLeaf time_range; //type: string
        YLeaf ack; //type: empty
        YLeaf fin; //type: empty
        YLeaf psh; //type: empty
        YLeaf rst; //type: empty
        YLeaf syn; //type: empty
        YLeaf urg; //type: empty
        YLeaf established; //type: empty
        YLeaf msg_type_case; //type: uint8
        YLeaf msg_code; //type: uint8
        YLeaf named_msg_type; //type: NamedMsgTypeEnum
        class ActionEnum;
        class ProtocolEnum;
        class NamedMsgTypeEnum;

}; // Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::NamedRbAcl : public Entity
{
    public:
        NamedRbAcl();
        ~NamedRbAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf role_based; //type: empty
        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule
        class Default_; //type: Native::Ipv6::AccessList::NamedRbAcl::Default_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::Default_> default_;
        
}; // Native::Ipv6::AccessList::NamedRbAcl


class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule : public Entity
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
        class AceRule; //type: Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule


class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule : public Entity
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
        YLeaf source_host; //type: one of union, string
        YLeaf source_address; //type: string
        YLeaf source_wildcard_bits; //type: string
        YLeaf source_prefix; //type: string
        YLeaf any; //type: empty
        YLeaf src_eq; //type: one of uint16, enumeration
        YLeaf src_gt; //type: one of uint16, enumeration
        YLeaf src_lt; //type: one of uint16, enumeration
        YLeaf src_neq; //type: one of uint16, enumeration
        YLeaf src_range1; //type: one of uint16, enumeration
        YLeaf src_range2; //type: one of uint16, enumeration
        YLeaf destination_host; //type: one of union, string
        YLeaf destination_address; //type: string
        YLeaf destination_wildcard_bits; //type: string
        YLeaf destination_prefix; //type: string
        YLeaf destination_any; //type: empty
        YLeaf dst_eq; //type: one of uint16, enumeration
        YLeaf dst_gt; //type: one of uint16, enumeration
        YLeaf dst_lt; //type: one of uint16, enumeration
        YLeaf dst_neq; //type: one of uint16, enumeration
        YLeaf dst_range1; //type: one of uint16, enumeration
        YLeaf dst_range2; //type: one of uint16, enumeration
        YLeaf auth; //type: empty
        YLeaf dest_option; //type: empty
        YLeaf dscp; //type: one of uint8, enumeration
        YLeaf flow_label; //type: uint32
        YLeaf fragments; //type: empty
        YLeaf hbh; //type: empty
        YLeaf log; //type: empty
        YLeaf log_input; //type: empty
        YLeaf mobility; //type: empty
        YLeaf mobility_type; //type: one of uint8, enumeration
        YLeaf routing; //type: empty
        YLeaf routing_type; //type: uint8
        YLeaf time_range; //type: string
        YLeaf ack; //type: empty
        YLeaf fin; //type: empty
        YLeaf psh; //type: empty
        YLeaf rst; //type: empty
        YLeaf syn; //type: empty
        YLeaf urg; //type: empty
        YLeaf established; //type: empty
        YLeaf msg_type_case; //type: uint8
        YLeaf msg_code; //type: uint8
        YLeaf named_msg_type; //type: NamedMsgTypeEnum
        class ActionEnum;
        class ProtocolEnum;
        class NamedMsgTypeEnum;

}; // Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::NamedRbAcl::Default_ : public Entity
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

        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ipv6::AccessList::NamedRbAcl::Default_


class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule : public Entity
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
        class AceRule; //type: Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule


class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule : public Entity
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
        YLeaf source_host; //type: one of union, string
        YLeaf source_address; //type: string
        YLeaf source_wildcard_bits; //type: string
        YLeaf source_prefix; //type: string
        YLeaf any; //type: empty
        YLeaf src_eq; //type: one of uint16, enumeration
        YLeaf src_gt; //type: one of uint16, enumeration
        YLeaf src_lt; //type: one of uint16, enumeration
        YLeaf src_neq; //type: one of uint16, enumeration
        YLeaf src_range1; //type: one of uint16, enumeration
        YLeaf src_range2; //type: one of uint16, enumeration
        YLeaf destination_host; //type: one of union, string
        YLeaf destination_address; //type: string
        YLeaf destination_wildcard_bits; //type: string
        YLeaf destination_prefix; //type: string
        YLeaf destination_any; //type: empty
        YLeaf dst_eq; //type: one of uint16, enumeration
        YLeaf dst_gt; //type: one of uint16, enumeration
        YLeaf dst_lt; //type: one of uint16, enumeration
        YLeaf dst_neq; //type: one of uint16, enumeration
        YLeaf dst_range1; //type: one of uint16, enumeration
        YLeaf dst_range2; //type: one of uint16, enumeration
        YLeaf auth; //type: empty
        YLeaf dest_option; //type: empty
        YLeaf dscp; //type: one of uint8, enumeration
        YLeaf flow_label; //type: uint32
        YLeaf fragments; //type: empty
        YLeaf hbh; //type: empty
        YLeaf log; //type: empty
        YLeaf log_input; //type: empty
        YLeaf mobility; //type: empty
        YLeaf mobility_type; //type: one of uint8, enumeration
        YLeaf routing; //type: empty
        YLeaf routing_type; //type: uint8
        YLeaf time_range; //type: string
        YLeaf ack; //type: empty
        YLeaf fin; //type: empty
        YLeaf psh; //type: empty
        YLeaf rst; //type: empty
        YLeaf syn; //type: empty
        YLeaf urg; //type: empty
        YLeaf established; //type: empty
        YLeaf msg_type_case; //type: uint8
        YLeaf msg_code; //type: uint8
        YLeaf named_msg_type; //type: NamedMsgTypeEnum
        class ActionEnum;
        class ProtocolEnum;
        class NamedMsgTypeEnum;

}; // Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::LogUpdate : public Entity
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

}; // Native::Ipv6::AccessList::LogUpdate


class Native::Ipv6::Multicast : public Entity
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

        YLeaf vrf; //type: string
        class Rpf; //type: Native::Ipv6::Multicast::Rpf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Multicast::Rpf> rpf;
        
}; // Native::Ipv6::Multicast


class Native::Ipv6::Multicast::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf use_bgp; //type: empty
        class Backoff; //type: Native::Ipv6::Multicast::Rpf::Backoff

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Multicast::Rpf::Backoff> backoff;
        
}; // Native::Ipv6::Multicast::Rpf


class Native::Ipv6::Multicast::Rpf::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf initial_delay; //type: uint16
        YLeaf max_delay; //type: uint16

}; // Native::Ipv6::Multicast::Rpf::Backoff


class Native::Ipv6::Cef : public Entity
{
    public:
        Cef();
        ~Cef();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distributed; //type: empty
        class Accounting; //type: Native::Ipv6::Cef::Accounting

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Cef::Accounting> accounting;
        
}; // Native::Ipv6::Cef


class Native::Ipv6::Cef::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf per_prefix; //type: empty
        YLeaf prefix_length; //type: empty

}; // Native::Ipv6::Cef::Accounting


class Native::Ipv6::Nd : public Entity
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

        class Inspection; //type: Native::Ipv6::Nd::Inspection
        class Cache; //type: Native::Ipv6::Nd::Cache
        class Raguard; //type: Native::Ipv6::Nd::Raguard

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Cache> cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection> inspection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard> raguard;
        
}; // Native::Ipv6::Nd


class Native::Ipv6::Nd::Inspection : public Entity
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

        class Policy; //type: Native::Ipv6::Nd::Inspection::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy> > policy;
        
}; // Native::Ipv6::Nd::Inspection


class Native::Ipv6::Nd::Inspection::Policy : public Entity
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

        YLeaf name_nd_inspection_policy; //type: string
        YLeaf drop_unsecure; //type: empty
        YLeaf trusted_port; //type: empty
        class DeviceRole; //type: Native::Ipv6::Nd::Inspection::Policy::DeviceRole
        class Limit; //type: Native::Ipv6::Nd::Inspection::Policy::Limit
        class SecLevel; //type: Native::Ipv6::Nd::Inspection::Policy::SecLevel
        class Tracking; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking
        class Validate; //type: Native::Ipv6::Nd::Inspection::Policy::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::DeviceRole> device_role;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Limit> limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::SecLevel> sec_level;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking> tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Validate> validate;
        
}; // Native::Ipv6::Nd::Inspection::Policy


class Native::Ipv6::Nd::Inspection::Policy::DeviceRole : public Entity
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

        YLeaf host; //type: empty
        YLeaf monitor; //type: empty
        YLeaf router; //type: empty
        YLeaf switch; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::DeviceRole


class Native::Ipv6::Nd::Inspection::Policy::Limit : public Entity
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

}; // Native::Ipv6::Nd::Inspection::Policy::Limit


class Native::Ipv6::Nd::Inspection::Policy::SecLevel : public Entity
{
    public:
        SecLevel();
        ~SecLevel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minimum; //type: uint8

}; // Native::Ipv6::Nd::Inspection::Policy::SecLevel


class Native::Ipv6::Nd::Inspection::Policy::Tracking : public Entity
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

        class Disable; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable
        class Enable; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable> disable; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable> enable; // presence node
        
}; // Native::Ipv6::Nd::Inspection::Policy::Tracking


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable : public Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class StaleLifetime; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime> stale_lifetime;
        
}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime : public Entity
{
    public:
        StaleLifetime();
        ~StaleLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf infinite; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ReachableLifetime; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime> reachable_lifetime;
        
}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime : public Entity
{
    public:
        ReachableLifetime();
        ~ReachableLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf infinite; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime


class Native::Ipv6::Nd::Inspection::Policy::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_mac; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::Validate


class Native::Ipv6::Nd::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Expire; //type: Native::Ipv6::Nd::Cache::Expire

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Cache::Expire> expire;
        
}; // Native::Ipv6::Nd::Cache


class Native::Ipv6::Nd::Cache::Expire : public Entity
{
    public:
        Expire();
        ~Expire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint16
        YLeaf refresh; //type: empty

}; // Native::Ipv6::Nd::Cache::Expire


class Native::Ipv6::Nd::Raguard : public Entity
{
    public:
        Raguard();
        ~Raguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string
        class Policy; //type: Native::Ipv6::Nd::Raguard::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard::Policy> > policy;
        
}; // Native::Ipv6::Nd::Raguard


class Native::Ipv6::Nd::Raguard::Policy : public Entity
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

        YLeaf raguard_policy_name; //type: string
        YLeaf trusted_port; //type: empty
        class DeviceRole; //type: Native::Ipv6::Nd::Raguard::Policy::DeviceRole
        class HopLimit; //type: Native::Ipv6::Nd::Raguard::Policy::HopLimit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard::Policy::DeviceRole> device_role;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard::Policy::HopLimit> hop_limit;
        
}; // Native::Ipv6::Nd::Raguard::Policy


class Native::Ipv6::Nd::Raguard::Policy::DeviceRole : public Entity
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

        YLeaf host; //type: empty
        YLeaf monitor; //type: empty
        YLeaf router; //type: empty
        YLeaf switch; //type: empty

}; // Native::Ipv6::Nd::Raguard::Policy::DeviceRole


class Native::Ipv6::Nd::Raguard::Policy::HopLimit : public Entity
{
    public:
        HopLimit();
        ~HopLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: uint8
        YLeaf minimum; //type: uint8

}; // Native::Ipv6::Nd::Raguard::Policy::HopLimit


class Native::Ipv6::Pim : public Entity
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

        class RpAddress; //type: Native::Ipv6::Pim::RpAddress
        class Vrf; //type: Native::Ipv6::Pim::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Pim::RpAddress> rp_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Pim::Vrf> > vrf;
        
}; // Native::Ipv6::Pim


class Native::Ipv6::Pim::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf access_list; //type: string
        YLeaf bidir; //type: empty

}; // Native::Ipv6::Pim::RpAddress


class Native::Ipv6::Pim::Vrf : public Entity
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

        YLeaf id; //type: string
        class RpAddress; //type: Native::Ipv6::Pim::Vrf::RpAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Pim::Vrf::RpAddress> rp_address;
        
}; // Native::Ipv6::Pim::Vrf


class Native::Ipv6::Pim::Vrf::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf access_list; //type: string
        YLeaf bidir; //type: empty

}; // Native::Ipv6::Pim::Vrf::RpAddress


class Native::Ipv6::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6RouteList; //type: Native::Ipv6::Route::Ipv6RouteList
        class Vrf; //type: Native::Ipv6::Route::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Route::Ipv6RouteList> > ipv6_route_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Route::Vrf> > vrf;
        
}; // Native::Ipv6::Route


class Native::Ipv6::Route::Ipv6RouteList : public Entity
{
    public:
        Ipv6RouteList();
        ~Ipv6RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        class Ipv6FwdList; //type: Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList> > ipv6_fwd_list;
        
}; // Native::Ipv6::Route::Ipv6RouteList


class Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList : public Entity
{
    public:
        Ipv6FwdList();
        ~Ipv6FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fwd; //type: one of string, enumeration
        YLeaf next_hop; //type: string
        YLeaf distance; //type: uint8
        YLeaf multicast; //type: empty
        YLeaf unicast; //type: empty
        YLeaf tag; //type: uint32
        YLeaf track; //type: uint32
        class FwdEnum;

}; // Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList


class Native::Ipv6::Route::Vrf : public Entity
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
        class Ipv6RouteList; //type: Native::Ipv6::Route::Vrf::Ipv6RouteList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Route::Vrf::Ipv6RouteList> > ipv6_route_list;
        
}; // Native::Ipv6::Route::Vrf


class Native::Ipv6::Route::Vrf::Ipv6RouteList : public Entity
{
    public:
        Ipv6RouteList();
        ~Ipv6RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        class Ipv6FwdList; //type: Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList> > ipv6_fwd_list;
        
}; // Native::Ipv6::Route::Vrf::Ipv6RouteList


class Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList : public Entity
{
    public:
        Ipv6FwdList();
        ~Ipv6FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fwd; //type: one of string, enumeration
        YLeaf next_hop; //type: string
        YLeaf distance; //type: uint8
        YLeaf multicast; //type: empty
        YLeaf unicast; //type: empty
        YLeaf tag; //type: uint32
        YLeaf track; //type: uint32
        class FwdEnum;

}; // Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList


class Native::Ipv6::Router : public Entity
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

        class Eigrp; //type: Native::Ipv6::Router::Eigrp
        class Rip; //type: Native::Ipv6::Router::Rip

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip> > rip;
        
}; // Native::Ipv6::Router


class Native::Ipv6::Router::Eigrp : public Entity
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

        YLeaf id; //type: uint16
        class DefaultMetric; //type: Native::Ipv6::Router::Eigrp::DefaultMetric
        class Distance; //type: Native::Ipv6::Router::Eigrp::Distance
        class DistributeList; //type: Native::Ipv6::Router::Eigrp::DistributeList
        class Eigrp_; //type: Native::Ipv6::Router::Eigrp::Eigrp_
        class PassiveInterface; //type: Native::Ipv6::Router::Eigrp::PassiveInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::DefaultMetric> default_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::Eigrp_> eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::PassiveInterface> > passive_interface;
        
}; // Native::Ipv6::Router::Eigrp


class Native::Ipv6::Router::Eigrp::DefaultMetric : public Entity
{
    public:
        DefaultMetric();
        ~DefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dm_rdr; //type: uint32
        YLeaf dm_rdr0; //type: uint32
        YLeaf dm_rdr_pct; //type: uint8
        YLeaf effective_bandwith_metric; //type: uint8
        YLeaf mtu; //type: uint16

}; // Native::Ipv6::Router::Eigrp::DefaultMetric


class Native::Ipv6::Router::Eigrp::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eigrp_; //type: Native::Ipv6::Router::Eigrp::Distance::Eigrp_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::Distance::Eigrp_> eigrp;
        
}; // Native::Ipv6::Router::Eigrp::Distance


class Native::Ipv6::Router::Eigrp::Distance::Eigrp_ : public Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal_route; //type: uint8
        YLeaf external_route; //type: uint8

}; // Native::Ipv6::Router::Eigrp::Distance::Eigrp_


class Native::Ipv6::Router::Eigrp::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixList; //type: Native::Ipv6::Router::Eigrp::DistributeList::PrefixList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::DistributeList::PrefixList> > prefix_list;
        
}; // Native::Ipv6::Router::Eigrp::DistributeList


class Native::Ipv6::Router::Eigrp::DistributeList::PrefixList : public Entity
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

        YLeaf name; //type: string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Ipv6::Router::Eigrp::DistributeList::PrefixList


class Native::Ipv6::Router::Eigrp::Eigrp_ : public Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string

}; // Native::Ipv6::Router::Eigrp::Eigrp_


class Native::Ipv6::Router::Eigrp::PassiveInterface : public Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of string, enumeration
        class NameEnum;

}; // Native::Ipv6::Router::Eigrp::PassiveInterface


class Native::Ipv6::Router::Rip : public Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf distance; //type: uint8
        YLeaf maximum_paths; //type: uint32
        YLeaf poison_reverse; //type: empty
        YLeaf split_horizon; //type: empty
        class DistributeList; //type: Native::Ipv6::Router::Rip::DistributeList
        class Redistribute; //type: Native::Ipv6::Router::Rip::Redistribute
        class Timers; //type: Native::Ipv6::Router::Rip::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Timers> timers;
        
}; // Native::Ipv6::Router::Rip


class Native::Ipv6::Router::Rip::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixList; //type: Native::Ipv6::Router::Rip::DistributeList::PrefixList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::DistributeList::PrefixList> > prefix_list;
        
}; // Native::Ipv6::Router::Rip::DistributeList


class Native::Ipv6::Router::Rip::DistributeList::PrefixList : public Entity
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

        YLeaf name; //type: string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Ipv6::Router::Rip::DistributeList::PrefixList


class Native::Ipv6::Router::Rip::Redistribute : public Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Ipv6::Router::Rip::Redistribute::Application
        class Lisp; //type: Native::Ipv6::Router::Rip::Redistribute::Lisp
        class Nd; //type: Native::Ipv6::Router::Rip::Redistribute::Nd
        class Connected; //type: Native::Ipv6::Router::Rip::Redistribute::Connected
        class Bgp; //type: Native::Ipv6::Router::Rip::Redistribute::Bgp
        class Eigrp; //type: Native::Ipv6::Router::Rip::Redistribute::Eigrp
        class Isis; //type: Native::Ipv6::Router::Rip::Redistribute::Isis
        class IsoIgrp; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp
        class Mobile; //type: Native::Ipv6::Router::Rip::Redistribute::Mobile
        class Odr; //type: Native::Ipv6::Router::Rip::Redistribute::Odr
        class Ospf; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf
        class Static_; //type: Native::Ipv6::Router::Rip::Redistribute::Static_
        class Rip_; //type: Native::Ipv6::Router::Rip::Redistribute::Rip_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Application> application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Nd> nd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Rip_> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Static_> static_; // presence node
        
}; // Native::Ipv6::Router::Rip::Redistribute


class Native::Ipv6::Router::Rip::Redistribute::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf include_connected; //type: empty
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Ipv6::Router::Rip::Redistribute::Application


class Native::Ipv6::Router::Rip::Redistribute::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf include_connected; //type: empty
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Ipv6::Router::Rip::Redistribute::Lisp


class Native::Ipv6::Router::Rip::Redistribute::Nd : public Entity
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

        YLeaf include_connected; //type: empty
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Ipv6::Router::Rip::Redistribute::Nd


class Native::Ipv6::Router::Rip::Redistribute::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Connected


class Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: one of uint32, string
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Bgp


class Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Eigrp : public Entity
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

        YLeaf as_number; //type: uint16
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Eigrp


class Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Isis : public Entity
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

        class IsisArea; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea : public Entity
{
    public:
        IsisArea();
        ~IsisArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class RipIsisRedist; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist : public Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutesEnum;

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist : public Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutesEnum;

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist


class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp : public Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsoigrpList; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList : public Entity
{
    public:
        IsoigrpList();
        ~IsoigrpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iso_area_tag; //type: string
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Mobile : public Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Mobile


class Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Odr : public Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Odr


class Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_id; //type: uint16
        class Vrf; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf
        class Match; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf> > vrf;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf : public Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match : public Entity
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

        class Internal; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External : public Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external_routes; //type: RedistOspfExternalTypeEnum
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal : public Entity
{
    public:
        NssaExternal();
        ~NssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nssa_external_routes; //type: RedistOspfExternalTypeEnum
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Static_


class Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Rip_ : public Entity
{
    public:
        Rip_();
        ~Rip_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Rip_


class Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric : public Entity
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

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Timers : public Entity
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

        YLeaf update; //type: uint16
        YLeaf timeout; //type: uint16
        YLeaf holddown; //type: uint16
        YLeaf garbage_collection; //type: uint16

}; // Native::Ipv6::Router::Rip::Timers


class Native::Ipv6::Spd : public Entity
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
        class Queue; //type: Native::Ipv6::Spd::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Spd::Queue> queue;
                class ModeEnum;

}; // Native::Ipv6::Spd


class Native::Ipv6::Spd::Queue : public Entity
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

}; // Native::Ipv6::Spd::Queue


class Native::Ipv6::PrefixList : public Entity
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

        YLeaf sequence_number; //type: empty
        class Prefixes; //type: Native::Ipv6::PrefixList::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes> > prefixes;
        
}; // Native::Ipv6::PrefixList


class Native::Ipv6::PrefixList::Prefixes : public Entity
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

        YLeaf name; //type: string
        YLeaf description; //type: string
        class Permit; //type: Native::Ipv6::PrefixList::Prefixes::Permit
        class Deny; //type: Native::Ipv6::PrefixList::Prefixes::Deny
        class Seq; //type: Native::Ipv6::PrefixList::Prefixes::Seq

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Permit> permit;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Seq> > seq;
        
}; // Native::Ipv6::PrefixList::Prefixes


class Native::Ipv6::PrefixList::Prefixes::Permit : public Entity
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

        YLeaf address; //type: string
        YLeaf ge; //type: uint8
        YLeaf le; //type: uint8

}; // Native::Ipv6::PrefixList::Prefixes::Permit


class Native::Ipv6::PrefixList::Prefixes::Deny : public Entity
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

        YLeaf address; //type: string
        YLeaf ge; //type: uint8
        YLeaf le; //type: uint8

}; // Native::Ipv6::PrefixList::Prefixes::Deny

class Native::Ip::Wccp::Vrf::WccpList::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf closed;
        static const Enum::YLeaf open;

};

class Native::Ip::Wccp::Vrf::WccpList::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Ip::Wccp::Vrf::WebCache::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf closed;
        static const Enum::YLeaf open;

};

class Native::Ip::Wccp::Vrf::WebCache::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum : public Enum
{
    public:
        static const Enum::YLeaf CISCO_AP_AUTO_SMARTPORT;
        static const Enum::YLeaf CISCO_DMP_AUTO_SMARTPORT;
        static const Enum::YLeaf CISCO_DMP_AUTO_SMARTPORT_V1;
        static const Enum::YLeaf CISCO_IP_CAMERA_AUTO_SMARTPORT;
        static const Enum::YLeaf CISCO_LAST_RESORT_SMARTPORT;
        static const Enum::YLeaf CISCO_LIGHT_AUTO_SMARTPORT;
        static const Enum::YLeaf CISCO_LWAP_AUTO_SMARTPORT;
        static const Enum::YLeaf CISCO_PHONE_AUTO_SMARTPORT;
        static const Enum::YLeaf CISCO_PHONE_AUTO_SMARTPORT_V1;
        static const Enum::YLeaf CISCO_ROUTER_AUTO_SMARTPORT;
        static const Enum::YLeaf CISCO_SWITCH_AUTO_SMARTPORT;
        static const Enum::YLeaf MS_IP_CAMERA_AUTO_SMARTPORT;
        static const Enum::YLeaf MS_VIDEO_CONF_AUTO_SMARTPORT;

};

class Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::ValidLifetimeEnum : public Enum
{
    public:
        static const Enum::YLeaf infinite;

};

class Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::PreferredLifetimeEnum : public Enum
{
    public:
        static const Enum::YLeaf infinite;

};

class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ahp;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf hbh;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pcp;
        static const Enum::YLeaf sctp;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf beyond_scope;
        static const Enum::YLeaf destination_unreachable;
        static const Enum::YLeaf dhaad_reply;
        static const Enum::YLeaf dhaad_request;
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf echo_request;
        static const Enum::YLeaf header;
        static const Enum::YLeaf hop_limit;
        static const Enum::YLeaf mld_query;
        static const Enum::YLeaf mld_reduction;
        static const Enum::YLeaf mld_report;
        static const Enum::YLeaf mpd_advertisement;
        static const Enum::YLeaf mpd_solicitation;
        static const Enum::YLeaf nd_na;
        static const Enum::YLeaf nd_ns;
        static const Enum::YLeaf next_header;
        static const Enum::YLeaf no_admin;
        static const Enum::YLeaf no_route;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf parameter_option;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf port_unreachable;
        static const Enum::YLeaf reassembly_timeout;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf reject_route;
        static const Enum::YLeaf renum_command;
        static const Enum::YLeaf renum_result;
        static const Enum::YLeaf renum_seq_number;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_renumbering;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf source_policy;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf unreachable;

};

class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ahp;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf hbh;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pcp;
        static const Enum::YLeaf sctp;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf beyond_scope;
        static const Enum::YLeaf destination_unreachable;
        static const Enum::YLeaf dhaad_reply;
        static const Enum::YLeaf dhaad_request;
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf echo_request;
        static const Enum::YLeaf header;
        static const Enum::YLeaf hop_limit;
        static const Enum::YLeaf mld_query;
        static const Enum::YLeaf mld_reduction;
        static const Enum::YLeaf mld_report;
        static const Enum::YLeaf mpd_advertisement;
        static const Enum::YLeaf mpd_solicitation;
        static const Enum::YLeaf nd_na;
        static const Enum::YLeaf nd_ns;
        static const Enum::YLeaf next_header;
        static const Enum::YLeaf no_admin;
        static const Enum::YLeaf no_route;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf parameter_option;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf port_unreachable;
        static const Enum::YLeaf reassembly_timeout;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf reject_route;
        static const Enum::YLeaf renum_command;
        static const Enum::YLeaf renum_result;
        static const Enum::YLeaf renum_seq_number;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_renumbering;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf source_policy;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf unreachable;

};

class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ahp;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf hbh;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pcp;
        static const Enum::YLeaf sctp;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf beyond_scope;
        static const Enum::YLeaf destination_unreachable;
        static const Enum::YLeaf dhaad_reply;
        static const Enum::YLeaf dhaad_request;
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf echo_request;
        static const Enum::YLeaf header;
        static const Enum::YLeaf hop_limit;
        static const Enum::YLeaf mld_query;
        static const Enum::YLeaf mld_reduction;
        static const Enum::YLeaf mld_report;
        static const Enum::YLeaf mpd_advertisement;
        static const Enum::YLeaf mpd_solicitation;
        static const Enum::YLeaf nd_na;
        static const Enum::YLeaf nd_ns;
        static const Enum::YLeaf next_header;
        static const Enum::YLeaf no_admin;
        static const Enum::YLeaf no_route;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf parameter_option;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf port_unreachable;
        static const Enum::YLeaf reassembly_timeout;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf reject_route;
        static const Enum::YLeaf renum_command;
        static const Enum::YLeaf renum_result;
        static const Enum::YLeaf renum_seq_number;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_renumbering;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf source_policy;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf unreachable;

};

class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ahp;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf hbh;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pcp;
        static const Enum::YLeaf sctp;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf beyond_scope;
        static const Enum::YLeaf destination_unreachable;
        static const Enum::YLeaf dhaad_reply;
        static const Enum::YLeaf dhaad_request;
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf echo_request;
        static const Enum::YLeaf header;
        static const Enum::YLeaf hop_limit;
        static const Enum::YLeaf mld_query;
        static const Enum::YLeaf mld_reduction;
        static const Enum::YLeaf mld_report;
        static const Enum::YLeaf mpd_advertisement;
        static const Enum::YLeaf mpd_solicitation;
        static const Enum::YLeaf nd_na;
        static const Enum::YLeaf nd_ns;
        static const Enum::YLeaf next_header;
        static const Enum::YLeaf no_admin;
        static const Enum::YLeaf no_route;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf parameter_option;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf port_unreachable;
        static const Enum::YLeaf reassembly_timeout;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf reject_route;
        static const Enum::YLeaf renum_command;
        static const Enum::YLeaf renum_result;
        static const Enum::YLeaf renum_seq_number;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_renumbering;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf source_policy;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf unreachable;

};

class Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::FwdEnum : public Enum
{
    public:
        static const Enum::YLeaf Null0;

};

class Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::FwdEnum : public Enum
{
    public:
        static const Enum::YLeaf Null0;

};

class Native::Ipv6::Router::Eigrp::PassiveInterface::NameEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Ipv6::Spd::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf aggressive;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_10_ */

