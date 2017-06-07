#ifndef _CISCO_IOS_XE_NATIVE_132_
#define _CISCO_IOS_XE_NATIVE_132_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_130.hpp"
#include "Cisco_IOS_XE_native_131.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::LispList::Service::Ethernet::Etr::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Service::Ethernet::Etr::MapServer


class Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyPwd; //type: Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key


class Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::KeyPwd : public Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key0 : public Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_0; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key0


class Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key6 : public Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_6; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key6


class Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key7 : public Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_7; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key7


class Native::Router::LispList::Service::Ethernet::Etr::AcceptMapRequestMapping : public Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf accept_mappping; //type: empty
        YLeaf verify; //type: empty

}; // Native::Router::LispList::Service::Ethernet::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Service::Ethernet::MapCacheLimit : public Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_map_cache_entries; //type: uint32
        YLeaf reserve_list; //type: string
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Service::Ethernet::MapCacheLimit


class Native::Router::LispList::Service::Ethernet::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRequest; //type: Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Service::Ethernet::MapResolver


class Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest : public Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest


class Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate


class Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source : public Entity
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

        class List; //type: Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered : public Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Service::Ethernet::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRegister; //type: Native::Router::LispList::Service::Ethernet::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Service::Ethernet::MapServer


class Native::Router::LispList::Service::Ethernet::MapServer::MapRegister : public Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::LispList::Service::Ethernet::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Service::Ethernet::MapServer::MapRegister


class Native::Router::LispList::Service::Ethernet::MapServer::MapRegister::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Service::Ethernet::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Service::Ethernet::MapServer::MapRegister::Validate


class Native::Router::LispList::Service::Ethernet::MapServer::MapRegister::Validate::Source : public Entity
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

        YLeaf allowed_locator; //type: empty

}; // Native::Router::LispList::Service::Ethernet::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Service::Ethernet::SiteRegistration : public Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Service::Ethernet::SiteRegistration


class Native::Router::LispList::Service::Ethernet::SolicitMapRequest : public Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty
        YLeaf max_per_entry; //type: uint8
        YLeaf suppression_time; //type: uint16

}; // Native::Router::LispList::Service::Ethernet::SolicitMapRequest


class Native::Router::LispList::Encapsulation : public Entity
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

        YLeaf vxlan; //type: empty

}; // Native::Router::LispList::Encapsulation


class Native::Router::LispList::LocatorSet : public Entity
{
    public:
        LocatorSet();
        ~LocatorSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf auto_discover_rlocs; //type: empty
        class Ipv4Interface; //type: Native::Router::LispList::LocatorSet::Ipv4Interface
        class Ipv6Interface; //type: Native::Router::LispList::LocatorSet::Ipv6Interface
        class IpAddress; //type: Native::Router::LispList::LocatorSet::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::LocatorSet::IpAddress> > ip_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::LocatorSet::Ipv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::LocatorSet::Ipv6Interface> > ipv6_interface;
        
}; // Native::Router::LispList::LocatorSet


class Native::Router::LispList::LocatorSet::Ipv4Interface : public Entity
{
    public:
        Ipv4Interface();
        ~Ipv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::LispList::LocatorSet::Ipv4Interface


class Native::Router::LispList::LocatorSet::Ipv6Interface : public Entity
{
    public:
        Ipv6Interface();
        ~Ipv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::LispList::LocatorSet::Ipv6Interface


class Native::Router::LispList::LocatorSet::IpAddress : public Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::LispList::LocatorSet::IpAddress


class Native::Router::LispList::LocatorScope : public Entity
{
    public:
        LocatorScope();
        ~LocatorScope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeafList rloc_prefix; //type: list of  string
        YLeafList rtr_locator_set; //type: list of  string

}; // Native::Router::LispList::LocatorScope


class Native::Router::LispList::InstanceContainer : public Entity
{
    public:
        InstanceContainer();
        ~InstanceContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InstanceList; //type: Native::Router::LispList::InstanceContainer::InstanceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList> > instance_list;
        
}; // Native::Router::LispList::InstanceContainer


class Native::Router::LispList::InstanceContainer::InstanceList : public Entity
{
    public:
        InstanceList();
        ~InstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_id; //type: uint32
        YLeaf disable_ttl_propagate; //type: empty
        class Default_; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_
        class Decapsulation; //type: Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation
        class DynamicEid; //type: Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid
        class LocReachAlgorithm; //type: Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm
        class MapServer; //type: Native::Router::LispList::InstanceContainer::InstanceList::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe
        class Service; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation> decapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid> > dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service> service; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList


class Native::Router::LispList::InstanceContainer::InstanceList::Default_ : public Entity
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

        YLeaf disable_ttl_propagate; //type: empty
        class Decapsulation; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation
        class DynamicEid; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid
        class LocReachAlgorithm; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::LocReachAlgorithm
        class MapServer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::RemoteRlocProbe
        class Service; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation> decapsulation;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid> > dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service> service; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation : public Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Filter; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter> filter;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rloc; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc : public Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source : public Entity
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

        YLeaf locator_set; //type: string
        YLeaf member; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid : public Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf map_notify_group; //type: string
        class DatabaseMapping; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping
        class EidNotify; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify
        class MapServer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify> eid_notify;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer> > map_server;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping : public Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Prefix; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix
        class Mac; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Mac

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix> > ipv4_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Mac> mac;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix : public Entity
{
    public:
        Ipv4Prefix();
        ~Ipv4Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eid_prefix; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_addr; //type: empty
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Mac


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify : public Entity
{
    public:
        EidNotify();
        ~EidNotify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AuthenticationKey; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey
        class GatewayKey; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey> > gateway_key;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf key_0; //type: string
        YLeaf key_6; //type: string
        YLeaf key_7; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey : public Entity
{
    public:
        GatewayKey();
        ~GatewayKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gateway_ip; //type: string
        class Key; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key> key;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyPwd; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0
        class Key6; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd : public Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0 : public Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_0; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6 : public Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_6; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key> key;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyPwd; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd : public Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0 : public Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_0; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6 : public Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_6; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7 : public Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_7; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::LocReachAlgorithm : public Entity
{
    public:
        LocReachAlgorithm();
        ~LocReachAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rloc_probing; //type: empty
        class LsbReports; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::LocReachAlgorithm


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports : public Entity
{
    public:
        LsbReports();
        ~LsbReports();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf do_not_transmit; //type: empty
        YLeaf ignore; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rloc; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc> rloc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration> site_registration;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc : public Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Members; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members> members;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distribute; //type: empty
        class ModifyDiscovered; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered : public Entity
{
    public:
        ModifyDiscovered();
        ~ModifyDiscovered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: OperatorEnum
        YLeaf locator_set; //type: string
        class OperatorEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration : public Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::OtherXtrProbe : public Entity
{
    public:
        OtherXtrProbe();
        ~OtherXtrProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf period; //type: uint16

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::OtherXtrProbe


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::RemoteRlocProbe : public Entity
{
    public:
        RemoteRlocProbe();
        ~RemoteRlocProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf on_membership_change; //type: empty
        YLeaf on_route_change; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::RemoteRlocProbe


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service : public Entity
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

        class Ipv4; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4
        class Ipv6; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6
        class Ethernet; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4 : public Entity
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

        YLeaf alt_vrf; //type: string
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__
        class EidTable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::EidTable
        class Itr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit
        class SiteRegistration; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest
        class Alt; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt
        class Distance; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr
        class RouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport
        class DatabaseMapping; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__ : public Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alt_vrf; //type: string
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class EidTable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EidTable
        class Itr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr
        class ItrEnable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EtrEnable
        class Etr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr
        class MapCacheLimit; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCacheLimit
        class SiteRegistration; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SolicitMapRequest
        class Alt; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt
        class Distance; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Distance
        class MapCache; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ProxyItr
        class RouteExport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteExport
        class UsePetr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr
        class RouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport
        class DatabaseMapping; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr> > use_petr;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EidTable : public Entity
{
    public:
        EidTable();
        ~EidTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf default_; //type: empty
        YLeaf vrf; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EidTable


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr : public Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapResolver; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr::MapResolver


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ItrEnable : public Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf itr; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ItrEnable


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EtrEnable : public Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etr; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EtrEnable


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr : public Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyPwd; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd : public Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0 : public Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_0; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6 : public Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_6; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7 : public Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_7; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping : public Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf accept_mappping; //type: empty
        YLeaf verify; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCacheLimit : public Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_map_cache_entries; //type: uint32
        YLeaf reserve_list; //type: string
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCacheLimit


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SiteRegistration : public Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SiteRegistration


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SolicitMapRequest : public Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty
        YLeaf max_per_entry; //type: uint8
        YLeaf suppression_time; //type: uint16

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SolicitMapRequest


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt : public Entity
{
    public:
        Alt();
        ~Alt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SummaryRoute; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt::SummaryRoute

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt::SummaryRoute : public Entity
{
    public:
        SummaryRoute();
        ~SummaryRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eid_prefix; //type: string
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt::SummaryRoute


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Distance : public Entity
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

        YLeaf alt; //type: uint8
        YLeaf away; //type: uint8
        YLeaf dyn_eid; //type: uint8
        YLeaf site_registrations; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Distance


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache : public Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registration; //type: empty
        class EidInterface; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface
        class AwayEids; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::AwayEids> away_eids;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface> > eid_interface;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface : public Entity
{
    public:
        EidInterface();
        ~EidInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eid_prefix; //type: string
        YLeaf drop; //type: empty
        YLeaf map_request; //type: empty
        YLeaf native_forward; //type: empty
        class EtrInterfaceIp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface::EtrInterfaceIp : public Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etr_interface_ip_address; //type: string
        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface::EtrInterfaceIp


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::AwayEids : public Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_map_request; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::AwayEids


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCachePersistent : public Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCachePersistent


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ProxyItr : public Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_addr; //type: string
        YLeaf ipv6_addr; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ProxyItr


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteExport : public Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registrations; //type: empty
        YLeaf away_eids; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteExport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr : public Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr::Priority : public Entity
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

        YLeaf priority_value; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr::Priority


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport : public Entity
{
    public:
        RouteImport();
        ~RouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Database; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database
        class MapCache; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache> map_cache;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application
        class Bgp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::MaximumPrefix
        class Nd; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd
        class Ospf; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf
        class Static_; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_
        class Rip; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_> static_;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application : public Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application::LispIpRouteImport : public Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp : public Entity
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

        YLeaf id; //type: one of uint32, string
        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp::LispIpRouteImport : public Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected : public Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected::LispIpRouteImport : public Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp::LispIpRouteImport : public Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis : public Entity
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

        YLeaf process_id; //type: string
        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis::LispIpRouteImport : public Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::MaximumPrefix : public Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf warning_only; //type: empty
        YLeaf threshold; //type: uint8
        YLeaf threshold1; //type: uint8
        YLeaf warning_only1; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::MaximumPrefix


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd : public Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd::LispIpRouteImport : public Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf : public Entity
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

        YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf::LispIpRouteImport : public Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_ : public Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_::LispIpRouteImport : public Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip : public Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip::LispIpRouteImport : public Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache : public Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application
        class Bgp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::MaximumPrefix
        class Nd; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd
        class Ospf; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf
        class Static_; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_
        class Rip; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application : public Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp : public Entity
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

        YLeaf id; //type: one of uint32, string
        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected : public Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp : public Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis : public Entity
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

        YLeaf id; //type: string
        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::MaximumPrefix : public Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf warning_only; //type: empty
        YLeaf threshold; //type: uint8
        YLeaf threshold1; //type: uint8
        YLeaf warning_only1; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::MaximumPrefix


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd : public Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf : public Entity
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

        YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_ : public Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip : public Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping : public Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EidCont; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont
        class Limit; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont : public Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eid_prefix; //type: string
        YLeaf locator_set; //type: string
        YLeaf auto_discover_rlocs; //type: empty
        class Ipv4Addrees; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Addrees
        class Ipv4Interface; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Interface
        class Ipv6Interface; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Interface> > ipv6_interface;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Addrees : public Entity
{
    public:
        Ipv4Addrees();
        ~Ipv4Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8
        YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Addrees : public Entity
{
    public:
        Ipv6Addrees();
        ~Ipv6Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8
        YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Interface : public Entity
{
    public:
        Ipv4Interface();
        ~Ipv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Interface


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption : public Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8
        YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Interface : public Entity
{
    public:
        Ipv6Interface();
        ~Ipv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Interface


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption : public Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8
        YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit : public Entity
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

        YLeaf dynamic; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::EidTable : public Entity
{
    public:
        EidTable();
        ~EidTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf default_; //type: empty
        YLeaf vrf; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::EidTable


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr : public Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapResolver; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr::MapResolver


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ItrEnable : public Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf itr; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ItrEnable


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::EtrEnable : public Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etr; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::EtrEnable


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr : public Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr


class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer

class Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered::OperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf add;
        static const Enum::YLeaf override;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_132_ */

