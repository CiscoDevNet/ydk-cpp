#ifndef _CISCO_IOS_XE_NATIVE_130_
#define _CISCO_IOS_XE_NATIVE_130_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_129.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_ : public Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::SiteRegistration : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::SiteRegistration


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::SolicitMapRequest : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::SolicitMapRequest


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::UsePetr : public Entity
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
        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::UsePetr


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6 : public Entity
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

        YLeaf alt_vrf; //type: string
        YLeaf map_request_source; //type: string
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeafList proxy_itr; //type: list of  string
        class DatabaseMapping; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::DatabaseMapping
        class Distance; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Distance
        class Itr; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::ItrEnable
        class Etr; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr
        class EtrEnable; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::EtrEnable
        class Locator; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Locator
        class MapCache; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCache
        class MapCacheLimit; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCacheLimit
        class MapCachePersistent; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCachePersistent
        class MapResolver; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer
        class PathMtuDiscovery; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::PathMtuDiscovery
        class RouteExport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteExport
        class RouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport
        class SiteRegistration; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::SolicitMapRequest
        class UsePetr; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Locator> locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::PathMtuDiscovery> path_mtu_discovery; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::UsePetr> > use_petr;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::DatabaseMapping : public Entity
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

        class Limit; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::DatabaseMapping


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::DatabaseMapping::Limit


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Distance : public Entity
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
        YLeaf dyn_eid; //type: uint8
        YLeaf site_registrations; //type: uint8

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Distance


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Itr : public Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Itr


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Itr::MapResolver : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Itr::MapResolver


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::ItrEnable : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::ItrEnable


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr : public Entity
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

        class MapServer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr::MapServer

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr::MapServer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr::MapServer::Key : public Entity
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

        YLeaf key_0; //type: string
        YLeaf key_6; //type: string
        YLeaf key_7; //type: string
        YLeaf pwd; //type: string

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Etr::MapServer::Key


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::EtrEnable : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::EtrEnable


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Locator : public Entity
{
    public:
        Locator();
        ~Locator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reachability; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Locator::Reachability

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Locator::Reachability> reachability;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Locator


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Locator::Reachability : public Entity
{
    public:
        Reachability();
        ~Reachability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exclude_default; //type: empty

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::Locator::Reachability


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCache : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCache


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCacheLimit : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCacheLimit


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCachePersistent : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapCachePersistent


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver : public Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest : public Entity
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

        class Validate; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate::Source : public Entity
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

        YLeaf list; //type: empty
        YLeaf registered; //type: empty
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer : public Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister : public Entity
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

        class Validate; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate::Source : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::PathMtuDiscovery : public Entity
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

        YLeaf max; //type: uint16
        YLeaf min; //type: uint16

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::PathMtuDiscovery


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteExport : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteExport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport : public Entity
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

        class Database; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database
        class MapCache; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache> map_cache;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database : public Entity
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

        class Bgp; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix
        class Ospf; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf
        class Ospfv3; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3
        class Rip; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip
        class Static_; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis> > isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_> static_;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected : public Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected::LispIpRouteImport : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis : public Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix : public Entity
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

        YLeaf number; //type: int32
        YLeaf warning_only; //type: empty
        YLeaf threshold; //type: uint8
        YLeaf threshold1; //type: uint8
        YLeaf warning_only1; //type: empty

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf : public Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip : public Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_ : public Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache : public Entity
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

        class Bgp; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix
        class Ospf; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf
        class Ospfv3; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3
        class Rip; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip
        class Static_; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis> > isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp : public Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected : public Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp : public Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis : public Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix : public Entity
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

        YLeaf number; //type: int32
        YLeaf warning_only; //type: empty
        YLeaf threshold; //type: uint8
        YLeaf threshold1; //type: uint8
        YLeaf warning_only1; //type: empty

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf : public Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip : public Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_ : public Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::SiteRegistration : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::SiteRegistration


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::SolicitMapRequest : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::SolicitMapRequest


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::UsePetr : public Entity
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
        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6::UsePetr


class Native::Router::LispList::Default_::EidTable::InstanceList::LocReachAlgorithm : public Entity
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
        class LsbReports; //type: Native::Router::LispList::Default_::EidTable::InstanceList::LocReachAlgorithm::LsbReports

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::LocReachAlgorithm


class Native::Router::LispList::Default_::EidTable::InstanceList::LocReachAlgorithm::LsbReports : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::LocReachAlgorithm::LsbReports


class Native::Router::LispList::Default_::EidTable::InstanceList::LocatorDown : public Entity
{
    public:
        LocatorDown();
        ~LocatorDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf ipv4_interface; //type: string
        YLeaf ipv6_interface; //type: string

}; // Native::Router::LispList::Default_::EidTable::InstanceList::LocatorDown


class Native::Router::LispList::Default_::EidTable::InstanceList::LocatorTable : public Entity
{
    public:
        LocatorTable();
        ~LocatorTable();

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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::LocatorTable


class Native::Router::LispList::Default_::EidTable::InstanceList::MapRequest : public Entity
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

        YLeaf itr_rlocs; //type: string

}; // Native::Router::LispList::Default_::EidTable::InstanceList::MapRequest


class Native::Router::LispList::Default_::EidTable::InstanceList::MapServer : public Entity
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

        class Rloc; //type: Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::SiteRegistration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc> rloc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::SiteRegistration> site_registration;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::MapServer


class Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc : public Entity
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

        class Members; //type: Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc::Members

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc::Members> members;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc


class Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc::Members : public Entity
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
        class ModifyDiscovered; //type: Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc::Members


class Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::SiteRegistration : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::SiteRegistration


class Native::Router::LispList::Default_::EidTable::InstanceList::OtherXtrProbe : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::OtherXtrProbe


class Native::Router::LispList::Default_::EidTable::InstanceList::RemoteRlocProbe : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::RemoteRlocProbe


class Native::Router::LispList::Default_::EidTable::InstanceList::MapCache : public Entity
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

        YLeaf eid_prefix; //type: string
        YLeaf drop; //type: empty
        YLeaf map_request; //type: empty
        YLeaf native_forward; //type: empty
        class EtrInterfaceIp; //type: Native::Router::LispList::Default_::EidTable::InstanceList::MapCache::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::MapCache::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::MapCache


class Native::Router::LispList::Default_::EidTable::InstanceList::MapCache::EtrInterfaceIp : public Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::MapCache::EtrInterfaceIp


class Native::Router::LispList::Default_::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf strong; //type: empty

}; // Native::Router::LispList::Default_::Security


class Native::Router::LispList::Default_::Site : public Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sname; //type: string
        YLeaf description; //type: string
        YLeaf site_id; //type: uint32
        class Default__; //type: Native::Router::LispList::Default_::Site::Default__
        class AuthenticationKey; //type: Native::Router::LispList::Default_::Site::AuthenticationKey
        class AllowedLocator; //type: Native::Router::LispList::Default_::Site::AllowedLocator
        class EidPrefix; //type: Native::Router::LispList::Default_::Site::EidPrefix
        class EidRecord; //type: Native::Router::LispList::Default_::Site::EidRecord

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::AllowedLocator> allowed_locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidPrefix> eid_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidRecord> eid_record;
        
}; // Native::Router::LispList::Default_::Site


class Native::Router::LispList::Default_::Site::Default__ : public Entity
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

        YLeaf description; //type: string
        YLeaf site_id; //type: uint32
        class AuthenticationKey; //type: Native::Router::LispList::Default_::Site::Default__::AuthenticationKey
        class AllowedLocator; //type: Native::Router::LispList::Default_::Site::Default__::AllowedLocator
        class EidPrefix; //type: Native::Router::LispList::Default_::Site::Default__::EidPrefix
        class EidRecord; //type: Native::Router::LispList::Default_::Site::Default__::EidRecord

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::AllowedLocator> allowed_locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidPrefix> eid_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidRecord> eid_record;
        
}; // Native::Router::LispList::Default_::Site::Default__


class Native::Router::LispList::Default_::Site::Default__::AuthenticationKey : public Entity
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

}; // Native::Router::LispList::Default_::Site::Default__::AuthenticationKey


class Native::Router::LispList::Default_::Site::Default__::AllowedLocator : public Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ls_ipv4; //type: string
        YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::LispList::Default_::Site::Default__::AllowedLocator::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::AllowedLocator::List> list;
        
}; // Native::Router::LispList::Default_::Site::Default__::AllowedLocator


class Native::Router::LispList::Default_::Site::Default__::AllowedLocator::List : public Entity
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

}; // Native::Router::LispList::Default_::Site::Default__::AllowedLocator::List


class Native::Router::LispList::Default_::Site::Default__::EidPrefix : public Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Default_::Site::Default__::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::Default__::EidPrefix


class Native::Router::LispList::Default_::Site::Default__::EidPrefix::Prefixes : public Entity
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

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Default_::Site::Default__::EidPrefix::Prefixes


class Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId


class Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId::Prefixes : public Entity
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

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId::Prefixes


class Native::Router::LispList::Default_::Site::Default__::EidRecord : public Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Default_::Site::Default__::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::Default__::EidRecord


class Native::Router::LispList::Default_::Site::Default__::EidRecord::Prefixes : public Entity
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

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Default_::Site::Default__::EidRecord::Prefixes


class Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId


class Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId::Prefixes : public Entity
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

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId::Prefixes


class Native::Router::LispList::Default_::Site::AuthenticationKey : public Entity
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

}; // Native::Router::LispList::Default_::Site::AuthenticationKey


class Native::Router::LispList::Default_::Site::AllowedLocator : public Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ls_ipv4; //type: string
        YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::LispList::Default_::Site::AllowedLocator::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::AllowedLocator::List> list;
        
}; // Native::Router::LispList::Default_::Site::AllowedLocator


class Native::Router::LispList::Default_::Site::AllowedLocator::List : public Entity
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

}; // Native::Router::LispList::Default_::Site::AllowedLocator::List


class Native::Router::LispList::Default_::Site::EidPrefix : public Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Default_::Site::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::LispList::Default_::Site::EidPrefix::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::EidPrefix


class Native::Router::LispList::Default_::Site::EidPrefix::Prefixes : public Entity
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

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Default_::Site::EidPrefix::Prefixes


class Native::Router::LispList::Default_::Site::EidPrefix::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Default_::Site::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::EidPrefix::InstanceId


class Native::Router::LispList::Default_::Site::EidPrefix::InstanceId::Prefixes : public Entity
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

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Default_::Site::EidPrefix::InstanceId::Prefixes


class Native::Router::LispList::Default_::Site::EidRecord : public Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Default_::Site::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::LispList::Default_::Site::EidRecord::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::EidRecord


class Native::Router::LispList::Default_::Site::EidRecord::Prefixes : public Entity
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

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Default_::Site::EidRecord::Prefixes


class Native::Router::LispList::Default_::Site::EidRecord::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Default_::Site::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::EidRecord::InstanceId


class Native::Router::LispList::Default_::Site::EidRecord::InstanceId::Prefixes : public Entity
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

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Default_::Site::EidRecord::InstanceId::Prefixes


class Native::Router::LispList::Default_::Syslog : public Entity
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

        YLeaf verbose; //type: empty
        class Session; //type: Native::Router::LispList::Default_::Syslog::Session

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Syslog::Session> session;
        
}; // Native::Router::LispList::Default_::Syslog


class Native::Router::LispList::Default_::Syslog::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf changes; //type: empty

}; // Native::Router::LispList::Default_::Syslog::Session


class Native::Router::LispList::Service : public Entity
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

        class Ipv4; //type: Native::Router::LispList::Service::Ipv4
        class Ipv6; //type: Native::Router::LispList::Service::Ipv6
        class Ethernet; //type: Native::Router::LispList::Service::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::LispList::Service


class Native::Router::LispList::Service::Ipv4 : public Entity
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

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class Default_; //type: Native::Router::LispList::Service::Ipv4::Default_
        class DatabaseMapping; //type: Native::Router::LispList::Service::Ipv4::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::LispList::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::LispList::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Service::Ipv4::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Service::Ipv4::MapResolver
        class MapServer; //type: Native::Router::LispList::Service::Ipv4::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Service::Ipv4::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::LispList::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::LispList::Service::Ipv4::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::LispList::Service::Ipv4


class Native::Router::LispList::Service::Ipv4::Default_ : public Entity
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

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::LispList::Service::Ipv4::Default_::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Service::Ipv4::Default_::Itr
        class ItrEnable; //type: Native::Router::LispList::Service::Ipv4::Default_::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Service::Ipv4::Default_::EtrEnable
        class Etr; //type: Native::Router::LispList::Service::Ipv4::Default_::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Service::Ipv4::Default_::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Service::Ipv4::Default_::MapResolver
        class MapServer; //type: Native::Router::LispList::Service::Ipv4::Default_::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Service::Ipv4::Default_::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Service::Ipv4::Default_::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Service::Ipv4::Default_::Distance
        class MapCache; //type: Native::Router::LispList::Service::Ipv4::Default_::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Service::Ipv4::Default_::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Service::Ipv4::Default_::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Service::Ipv4::Default_::RouteExport
        class UsePetr; //type: Native::Router::LispList::Service::Ipv4::Default_::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::LispList::Service::Ipv4::Default_


class Native::Router::LispList::Service::Ipv4::Default_::DatabaseMapping : public Entity
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

        class Limit; //type: Native::Router::LispList::Service::Ipv4::Default_::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::DatabaseMapping


class Native::Router::LispList::Service::Ipv4::Default_::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::DatabaseMapping::Limit


class Native::Router::LispList::Service::Ipv4::Default_::Itr : public Entity
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

        class MapResolver; //type: Native::Router::LispList::Service::Ipv4::Default_::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::Itr


class Native::Router::LispList::Service::Ipv4::Default_::Itr::MapResolver : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::Itr::MapResolver


class Native::Router::LispList::Service::Ipv4::Default_::ItrEnable : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::ItrEnable


class Native::Router::LispList::Service::Ipv4::Default_::EtrEnable : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::EtrEnable


class Native::Router::LispList::Service::Ipv4::Default_::Etr : public Entity
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
        class MapServer; //type: Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::Etr


class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer


class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key


class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0


class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6


class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7


class Native::Router::LispList::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Service::Ipv4::Default_::MapCacheLimit : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::MapCacheLimit


class Native::Router::LispList::Service::Ipv4::Default_::MapResolver : public Entity
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

        class MapRequest; //type: Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::MapResolver


class Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest : public Entity
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

        class Validate; //type: Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest


class Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate


class Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source : public Entity
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

        class List; //type: Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered : public Entity
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

        class List; //type: Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Service::Ipv4::Default_::MapServer : public Entity
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

        class MapRegister; //type: Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::MapServer


class Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister : public Entity
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

        class Validate; //type: Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister


class Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister::Validate : public Entity
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

        class Source; //type: Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister::Validate


class Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Service::Ipv4::Default_::SiteRegistration : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::SiteRegistration


class Native::Router::LispList::Service::Ipv4::Default_::SolicitMapRequest : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::SolicitMapRequest


class Native::Router::LispList::Service::Ipv4::Default_::Distance : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::Distance


class Native::Router::LispList::Service::Ipv4::Default_::MapCache : public Entity
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
        class AwayEids; //type: Native::Router::LispList::Service::Ipv4::Default_::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::MapCache


class Native::Router::LispList::Service::Ipv4::Default_::MapCache::AwayEids : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::MapCache::AwayEids


class Native::Router::LispList::Service::Ipv4::Default_::MapCachePersistent : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::MapCachePersistent


class Native::Router::LispList::Service::Ipv4::Default_::ProxyItr : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::ProxyItr


class Native::Router::LispList::Service::Ipv4::Default_::RouteExport : public Entity
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

}; // Native::Router::LispList::Service::Ipv4::Default_::RouteExport


class Native::Router::LispList::Service::Ipv4::Default_::UsePetr : public Entity
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
        class Priority; //type: Native::Router::LispList::Service::Ipv4::Default_::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service::Ipv4::Default_::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Service::Ipv4::Default_::UsePetr

class Native::Router::LispList::Default_::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::OperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf add;
        static const Enum::YLeaf override;

};

class Native::Router::LispList::Service::Ipv4::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};

class Native::Router::LispList::Service::Ipv4::Default_::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};

class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_130_ */

