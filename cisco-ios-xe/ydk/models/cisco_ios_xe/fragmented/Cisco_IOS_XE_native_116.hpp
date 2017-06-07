#ifndef _CISCO_IOS_XE_NATIVE_116_
#define _CISCO_IOS_XE_NATIVE_116_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_102.hpp"
#include "Cisco_IOS_XE_native_113.hpp"
#include "Cisco_IOS_XE_native_115.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface : public Entity
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
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Limit


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr : public Entity
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

        class MapResolver; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr::MapResolver : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr::MapResolver


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::ItrEnable : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::ItrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EtrEnable : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EtrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr : public Entity
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
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCacheLimit : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCacheLimit


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SiteRegistration : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SolicitMapRequest : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SolicitMapRequest


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache : public Entity
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

        class EidCont; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont> > eid_cont;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont : public Entity
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
        class EtrInterfaceIp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp


class Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation : public Entity
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

        class Filter; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter> filter;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation


class Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter : public Entity
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

        class Rloc; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter


class Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc : public Entity
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

        class Source; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc


class Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid : public Entity
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
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping
        class EidNotify; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify> eid_notify;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping : public Entity
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

        class Ipv4Prefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix
        class Mac; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix> > ipv4_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac> mac;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify : public Entity
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

        class AuthenticationKey; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey
        class GatewayKey; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey> > gateway_key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey : public Entity
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
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key : public Entity
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

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer : public Entity
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
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm : public Entity
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
        class LsbReports; //type: Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm


class Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports


class Native::Router::Lisp::InstanceContainer::InstanceList::MapServer : public Entity
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

        class Rloc; //type: Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::SiteRegistration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc> rloc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::SiteRegistration> site_registration;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc : public Entity
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

        class Members; //type: Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc::Members

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc::Members> members;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc


class Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc::Members : public Entity
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
        class ModifyDiscovered; //type: Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc::Members


class Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::SiteRegistration : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::OtherXtrProbe : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::OtherXtrProbe


class Native::Router::Lisp::InstanceContainer::InstanceList::RemoteRlocProbe : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::RemoteRlocProbe


class Native::Router::Lisp::InstanceContainer::InstanceList::Service : public Entity
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

        class Ipv4; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4
        class Ipv6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6
        class Ethernet; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4 : public Entity
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
        class Default_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_
        class EidTable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::EidTable
        class Itr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest
        class Alt; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Alt
        class Distance; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::UsePetr
        class RouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::RouteImport
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_ : public Entity
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

        YLeaf alt_vrf; //type: string
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class EidTable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::EidTable
        class Itr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Itr
        class ItrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::EtrEnable
        class Etr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCacheLimit
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::SolicitMapRequest
        class Alt; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Alt
        class Distance; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Distance
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteExport
        class UsePetr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::UsePetr
        class RouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::EidTable : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::EidTable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Itr : public Entity
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

        class MapResolver; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Itr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Itr::MapResolver : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Itr::MapResolver


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::ItrEnable : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::ItrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::EtrEnable : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::EtrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr : public Entity
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
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCacheLimit : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCacheLimit


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::SiteRegistration : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::SolicitMapRequest : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::SolicitMapRequest


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Alt : public Entity
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

        class SummaryRoute; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Alt::SummaryRoute

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Alt


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Alt::SummaryRoute : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Alt::SummaryRoute


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Distance : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Distance


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache : public Entity
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
        class EidInterface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::EidInterface
        class AwayEids; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::AwayEids> away_eids;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::EidInterface> > eid_interface;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::EidInterface : public Entity
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
        class EtrInterfaceIp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::EidInterface::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::EidInterface::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::EidInterface


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::EidInterface::EtrInterfaceIp : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::EidInterface::EtrInterfaceIp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::AwayEids : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCache::AwayEids


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCachePersistent : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::MapCachePersistent


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::ProxyItr : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::ProxyItr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteExport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteExport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::UsePetr : public Entity
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
        class Priority; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::UsePetr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::UsePetr::Priority : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::UsePetr::Priority


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport : public Entity
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

        class Database; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database : public Entity
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

        class Application; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Application
        class Bgp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Nd
        class Ospf; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Ospf
        class Static_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Static_
        class Rip; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Application : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Application


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Application::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Bgp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Bgp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Bgp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Connected : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Connected


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Connected::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Eigrp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Eigrp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Eigrp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Isis : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Isis


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Isis::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Nd : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Nd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Nd::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Ospf : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Ospf


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Ospf::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Static_ : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Static_


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Static_::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Rip : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Rip


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Rip::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache : public Entity
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

        class Application; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Application
        class Bgp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Nd
        class Ospf; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Ospf
        class Static_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Static_
        class Rip; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Application : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Application


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Application::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Bgp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Bgp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Bgp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Connected : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Connected


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Connected::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Eigrp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Eigrp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Isis : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Isis


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Isis::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Nd : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Nd::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Nd::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Nd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Nd::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Nd::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Ospf : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Ospf


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Ospf::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Static_ : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Static_


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Static_::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Rip : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Rip


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Rip::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping : public Entity
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

        class EidCont; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont
        class Limit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::Limit

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont : public Entity
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
        class Ipv4Addrees; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Addrees
        class Ipv4Interface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Interface
        class Ipv6Interface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Interface> > ipv6_interface;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Addrees : public Entity
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
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Addrees : public Entity
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
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Interface : public Entity
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
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Interface


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Interface : public Entity
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
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Interface


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::DatabaseMapping::Limit


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::EidTable : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::EidTable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Itr : public Entity
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

        class MapResolver; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Itr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Itr::MapResolver : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Itr::MapResolver


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr : public Entity
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
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::AcceptMapRequestMapping : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest : public Entity
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

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::OperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf add;
        static const Enum::YLeaf override;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_116_ */

