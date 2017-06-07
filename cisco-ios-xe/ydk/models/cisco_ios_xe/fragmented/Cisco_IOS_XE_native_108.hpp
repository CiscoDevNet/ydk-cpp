#ifndef _CISCO_IOS_XE_NATIVE_108_
#define _CISCO_IOS_XE_NATIVE_108_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_102.hpp"
#include "Cisco_IOS_XE_native_103.hpp"
#include "Cisco_IOS_XE_native_106.hpp"
#include "Cisco_IOS_XE_native_107.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6 : public Entity
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
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__
        class EidTable; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EidTable
        class Itr; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCacheLimit
        class SiteRegistration; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SolicitMapRequest
        class Alt; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt
        class Distance; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::UsePetr
        class RouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__ : public Entity
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
        class EidTable; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EidTable
        class Itr; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCacheLimit
        class SiteRegistration; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SolicitMapRequest
        class Alt; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt
        class Distance; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::UsePetr
        class RouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EidTable : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EidTable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr : public Entity
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

        class MapResolver; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr::MapResolver : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr::MapResolver


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ItrEnable : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ItrEnable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EtrEnable : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EtrEnable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr : public Entity
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
        class MapServer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCacheLimit : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCacheLimit


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SiteRegistration : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SiteRegistration


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SolicitMapRequest : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SolicitMapRequest


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt : public Entity
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

        class SummaryRoute; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt::SummaryRoute

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt::SummaryRoute : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt::SummaryRoute


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Distance : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Distance


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache : public Entity
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
        class EidInterface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface
        class AwayEids; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::AwayEids> away_eids;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface> > eid_interface;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface : public Entity
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
        class EtrInterfaceIp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::AwayEids : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::AwayEids


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCachePersistent : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCachePersistent


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ProxyItr : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ProxyItr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteExport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteExport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::UsePetr : public Entity
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
        class Priority; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::UsePetr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::UsePetr::Priority : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::UsePetr::Priority


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport : public Entity
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

        class Database; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database : public Entity
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

        class Application; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application
        class Bgp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd
        class Ospf; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf
        class Static_; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_
        class Rip; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_ : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache : public Entity
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

        class Application; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application
        class Bgp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Nd
        class Ospf; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Ospf
        class Static_; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Static_
        class Rip; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Nd : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Nd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Ospf : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Ospf


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Static_ : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Static_


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Rip : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Rip


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping : public Entity
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

        class EidCont; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont
        class Limit; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::Limit

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont : public Entity
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
        class Ipv4Addrees; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees
        class Ipv4Interface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface
        class Ipv6Interface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface> > ipv6_interface;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees : public Entity
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
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees : public Entity
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
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface : public Entity
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
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface : public Entity
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
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EidTable : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EidTable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Itr : public Entity
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

        class MapResolver; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Itr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Itr::MapResolver : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Itr::MapResolver


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ItrEnable : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ItrEnable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EtrEnable : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EtrEnable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr : public Entity
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
        class MapServer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key : public Entity
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

        class KeyPwd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0 : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6 : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7 : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::AcceptMapRequestMapping : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCacheLimit : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCacheLimit


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SiteRegistration : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SiteRegistration


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SolicitMapRequest : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SolicitMapRequest


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt : public Entity
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

        class SummaryRoute; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt::SummaryRoute

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt::SummaryRoute : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt::SummaryRoute


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Distance : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Distance


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache : public Entity
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
        class EidInterface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface
        class AwayEids; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::AwayEids> away_eids;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface> > eid_interface;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface : public Entity
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
        class EtrInterfaceIp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::AwayEids : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache::AwayEids


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCachePersistent : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCachePersistent


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ProxyItr : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ProxyItr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteExport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteExport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::UsePetr : public Entity
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
        class Priority; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::UsePetr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport : public Entity
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

        class Database; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database : public Entity
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

        class Application; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application
        class Bgp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd
        class Ospf; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf
        class Static_; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_
        class Rip; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_ : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache : public Entity
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

        class Application; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application
        class Bgp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd
        class Ospf; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf
        class Static_; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_
        class Rip; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_ : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_108_ */

