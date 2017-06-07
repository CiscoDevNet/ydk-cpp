#ifndef _CISCO_IOS_XE_NATIVE_122_
#define _CISCO_IOS_XE_NATIVE_122_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv6::Default__::SiteRegistration : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::SiteRegistration


class Native::Router::LispList::Default_::Service::Ipv6::Default__::SolicitMapRequest : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Distance : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Distance


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache : public Entity
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
        class AwayEids; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache::AwayEids : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache::AwayEids


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCachePersistent : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCachePersistent


class Native::Router::LispList::Default_::Service::Ipv6::Default__::ProxyItr : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::ProxyItr


class Native::Router::LispList::Default_::Service::Ipv6::Default__::RouteExport : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::RouteExport


class Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr : public Entity
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
        class Priority; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr


class Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr::Priority : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr::Priority


class Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping : public Entity
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

        class Limit; //type: Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ipv6::Itr : public Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv6::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Itr


class Native::Router::LispList::Default_::Service::Ipv6::Itr::MapResolver : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ipv6::ItrEnable : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::ItrEnable


class Native::Router::LispList::Default_::Service::Ipv6::EtrEnable : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::EtrEnable


class Native::Router::LispList::Default_::Service::Ipv6::Etr : public Entity
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
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Etr


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ipv6::MapCacheLimit : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver : public Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest : public Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source : public Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered : public Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ipv6::MapServer : public Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapServer


class Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister : public Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv6::SiteRegistration : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::SiteRegistration


class Native::Router::LispList::Default_::Service::Ipv6::SolicitMapRequest : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ipv6::Distance : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Distance


class Native::Router::LispList::Default_::Service::Ipv6::MapCache : public Entity
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
        class AwayEids; //type: Native::Router::LispList::Default_::Service::Ipv6::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapCache


class Native::Router::LispList::Default_::Service::Ipv6::MapCache::AwayEids : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapCache::AwayEids


class Native::Router::LispList::Default_::Service::Ipv6::MapCachePersistent : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapCachePersistent


class Native::Router::LispList::Default_::Service::Ipv6::ProxyItr : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::ProxyItr


class Native::Router::LispList::Default_::Service::Ipv6::RouteExport : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::RouteExport


class Native::Router::LispList::Default_::Service::Ipv6::UsePetr : public Entity
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
        class Priority; //type: Native::Router::LispList::Default_::Service::Ipv6::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::UsePetr


class Native::Router::LispList::Default_::Service::Ipv6::UsePetr::Priority : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::UsePetr::Priority


class Native::Router::LispList::Default_::Service::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__
        class Encapsulation; //type: Native::Router::LispList::Default_::Service::Ethernet::Encapsulation
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ethernet::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ethernet::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ethernet::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ethernet::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ethernet::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ethernet::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ethernet::SolicitMapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::SolicitMapRequest> solicit_map_request;
        
}; // Native::Router::LispList::Default_::Service::Ethernet


class Native::Router::LispList::Default_::Service::Ethernet::Default__ : public Entity
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

        YLeaf map_request_source; //type: string
        class Encapsulation; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Encapsulation
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::SolicitMapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::SolicitMapRequest> solicit_map_request;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Encapsulation : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Encapsulation


class Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping : public Entity
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

        class Limit; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr : public Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr::MapResolver : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ethernet::Default__::ItrEnable : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::ItrEnable


class Native::Router::LispList::Default_::Service::Ethernet::Default__::EtrEnable : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::EtrEnable


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr : public Entity
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
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapCacheLimit : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver : public Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest : public Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source : public Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered : public Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer : public Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister : public Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ethernet::Default__::SiteRegistration : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::SiteRegistration


class Native::Router::LispList::Default_::Service::Ethernet::Default__::SolicitMapRequest : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ethernet::Encapsulation : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Encapsulation


class Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping : public Entity
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

        class Limit; //type: Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ethernet::Itr : public Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ethernet::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Itr


class Native::Router::LispList::Default_::Service::Ethernet::Itr::MapResolver : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ethernet::ItrEnable : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::ItrEnable


class Native::Router::LispList::Default_::Service::Ethernet::EtrEnable : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::EtrEnable


class Native::Router::LispList::Default_::Service::Ethernet::Etr : public Entity
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
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Etr


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ethernet::MapCacheLimit : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver : public Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest : public Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source : public Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered : public Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ethernet::MapServer : public Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapServer


class Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister : public Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ethernet::SiteRegistration : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::SiteRegistration


class Native::Router::LispList::Default_::Service::Ethernet::SolicitMapRequest : public Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::SolicitMapRequest


class Native::Router::LispList::Default_::Encapsulation : public Entity
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

}; // Native::Router::LispList::Default_::Encapsulation


class Native::Router::LispList::Default_::LocatorSet : public Entity
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
        class Ipv4Interface; //type: Native::Router::LispList::Default_::LocatorSet::Ipv4Interface
        class Ipv6Interface; //type: Native::Router::LispList::Default_::LocatorSet::Ipv6Interface
        class IpAddress; //type: Native::Router::LispList::Default_::LocatorSet::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorSet::IpAddress> > ip_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorSet::Ipv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorSet::Ipv6Interface> > ipv6_interface;
        
}; // Native::Router::LispList::Default_::LocatorSet


class Native::Router::LispList::Default_::LocatorSet::Ipv4Interface : public Entity
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

}; // Native::Router::LispList::Default_::LocatorSet::Ipv4Interface


class Native::Router::LispList::Default_::LocatorSet::Ipv6Interface : public Entity
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

}; // Native::Router::LispList::Default_::LocatorSet::Ipv6Interface


class Native::Router::LispList::Default_::LocatorSet::IpAddress : public Entity
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

}; // Native::Router::LispList::Default_::LocatorSet::IpAddress


class Native::Router::LispList::Default_::LocatorScope : public Entity
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

}; // Native::Router::LispList::Default_::LocatorScope


class Native::Router::LispList::Default_::InstanceContainer : public Entity
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

        class InstanceList; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList> > instance_list;
        
}; // Native::Router::LispList::Default_::InstanceContainer


class Native::Router::LispList::Default_::InstanceContainer::InstanceList : public Entity
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
        class Default__; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__
        class Decapsulation; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Decapsulation
        class DynamicEid; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::DynamicEid
        class LocReachAlgorithm; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::LocReachAlgorithm
        class MapServer; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::RemoteRlocProbe
        class Service; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Service

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Decapsulation> decapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::DynamicEid> > dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Service> service; // presence node
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__ : public Entity
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

        YLeaf disable_ttl_propagate; //type: empty
        class Decapsulation; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation
        class DynamicEid; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid
        class LocReachAlgorithm; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm
        class MapServer; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::RemoteRlocProbe
        class Service; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation> decapsulation;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid> > dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service> service; // presence node
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation : public Entity
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

        class Filter; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter> filter;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter : public Entity
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

        class Rloc; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid : public Entity
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
        class DatabaseMapping; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping
        class EidNotify; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify
        class MapServer; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify> eid_notify;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping : public Entity
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

        class Ipv4Prefix; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix
        class Mac; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix> > ipv4_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac> mac;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify : public Entity
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

        class AuthenticationKey; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey
        class GatewayKey; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey> > gateway_key;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey : public Entity
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
        class Key; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key> key;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key : public Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key0 : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key0


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key6 : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key6


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer : public Entity
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
        class Key; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key0


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key6


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key7


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm : public Entity
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
        class LsbReports; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm::LsbReports

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm::LsbReports : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm::LsbReports


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer : public Entity
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

        class Rloc; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::SiteRegistration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc> rloc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::SiteRegistration> site_registration;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc : public Entity
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

        class Members; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc::Members

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc::Members> members;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc::Members : public Entity
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
        class ModifyDiscovered; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc::Members


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc::Members::ModifyDiscovered : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::SiteRegistration : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::SiteRegistration


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::OtherXtrProbe : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::OtherXtrProbe


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::RemoteRlocProbe : public Entity
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

}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::RemoteRlocProbe


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service : public Entity
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

        class Ipv4; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4
        class Ipv6; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6
        class Ethernet; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4 : public Entity
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
        class Default__; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__
        class EidTable; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::EidTable
        class Itr; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::MapCacheLimit
        class SiteRegistration; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::SolicitMapRequest
        class Alt; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Alt
        class Distance; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::UsePetr
        class RouteImport; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::RouteImport
        class DatabaseMapping; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4


class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__ : public Entity
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
        class EidTable; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::EidTable
        class Itr; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::MapCacheLimit
        class SiteRegistration; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::SolicitMapRequest
        class Alt; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::Alt
        class Distance; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::Distance
        class MapCache; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::UsePetr
        class RouteImport; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::RouteImport
        class DatabaseMapping; //type: Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__::UsePetr> > use_petr;
        
}; // Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv4::Default__

class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::InstanceContainer::InstanceList::Default__::MapServer::Rloc::Members::ModifyDiscovered::OperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf add;
        static const Enum::YLeaf override;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_122_ */

