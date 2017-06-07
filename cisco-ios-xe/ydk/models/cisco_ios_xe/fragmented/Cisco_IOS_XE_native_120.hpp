#ifndef _CISCO_IOS_XE_NATIVE_120_
#define _CISCO_IOS_XE_NATIVE_120_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_102.hpp"
#include "Cisco_IOS_XE_native_119.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::EidTable::InstanceList : public Entity
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
        YLeaf vrf_name; //type: string
        YLeaf default_; //type: empty
        YLeaf vrf; //type: string
        YLeaf disable_ttl_propagate; //type: empty
        class DatabaseMapping; //type: Native::Router::Lisp::EidTable::InstanceList::DatabaseMapping
        class DynamicEid; //type: Native::Router::Lisp::EidTable::InstanceList::DynamicEid
        class Alt; //type: Native::Router::Lisp::EidTable::InstanceList::Alt
        class ControlPacket; //type: Native::Router::Lisp::EidTable::InstanceList::ControlPacket
        class Ddt; //type: Native::Router::Lisp::EidTable::InstanceList::Ddt
        class Decapsulation; //type: Native::Router::Lisp::EidTable::InstanceList::Decapsulation
        class Etr; //type: Native::Router::Lisp::EidTable::InstanceList::Etr
        class Ipv4; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4
        class Ipv6; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6
        class LocReachAlgorithm; //type: Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::Lisp::EidTable::InstanceList::LocatorDown
        class LocatorTable; //type: Native::Router::Lisp::EidTable::InstanceList::LocatorTable
        class MapRequest; //type: Native::Router::Lisp::EidTable::InstanceList::MapRequest
        class MapServer; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe
        class MapCache; //type: Native::Router::Lisp::EidTable::InstanceList::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::ControlPacket> control_packet;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::DatabaseMapping> > database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ddt> ddt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Decapsulation> decapsulation;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::DynamicEid> > dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::LocatorDown> locator_down;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::LocatorTable> locator_table;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapCache> > map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapRequest> map_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe> remote_rloc_probe;
        
}; // Native::Router::Lisp::EidTable::InstanceList


class Native::Router::Lisp::EidTable::InstanceList::DatabaseMapping : public Entity
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

        YLeaf eid_prefix; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::DatabaseMapping


class Native::Router::Lisp::EidTable::InstanceList::DynamicEid : public Entity
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
        class DatabaseMapping; //type: Native::Router::Lisp::EidTable::InstanceList::DynamicEid::DatabaseMapping
        class EidNotify; //type: Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify
        class MapServer; //type: Native::Router::Lisp::EidTable::InstanceList::DynamicEid::MapServer

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::DynamicEid::DatabaseMapping> > database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify> eid_notify;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::DynamicEid::MapServer> > map_server;
        
}; // Native::Router::Lisp::EidTable::InstanceList::DynamicEid


class Native::Router::Lisp::EidTable::InstanceList::DynamicEid::DatabaseMapping : public Entity
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

        YLeaf eid_prefix; //type: string
        YLeaf locator_set; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::DynamicEid::DatabaseMapping


class Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify : public Entity
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

        class AuthenticationKey; //type: Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey
        class GatewayKey; //type: Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey> > gateway_key;
        
}; // Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify


class Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey : public Entity
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

        YLeaf ak_0; //type: string
        YLeaf ak_6; //type: string
        YLeaf unc_pwd; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey


class Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey : public Entity
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
        YLeaf ak_0; //type: string
        YLeaf ak_6; //type: string
        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey


class Native::Router::Lisp::EidTable::InstanceList::DynamicEid::MapServer : public Entity
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

        YLeaf ip; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::EidTable::InstanceList::DynamicEid::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::DynamicEid::MapServer::Key> key;
        
}; // Native::Router::Lisp::EidTable::InstanceList::DynamicEid::MapServer


class Native::Router::Lisp::EidTable::InstanceList::DynamicEid::MapServer::Key : public Entity
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
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::EidTable::InstanceList::DynamicEid::MapServer::Key


class Native::Router::Lisp::EidTable::InstanceList::Alt : public Entity
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

        class SummaryRoute; //type: Native::Router::Lisp::EidTable::InstanceList::Alt::SummaryRoute

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Alt


class Native::Router::Lisp::EidTable::InstanceList::Alt::SummaryRoute : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Alt::SummaryRoute


class Native::Router::Lisp::EidTable::InstanceList::ControlPacket : public Entity
{
    public:
        ControlPacket();
        ~ControlPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint32

}; // Native::Router::Lisp::EidTable::InstanceList::ControlPacket


class Native::Router::Lisp::EidTable::InstanceList::Ddt : public Entity
{
    public:
        Ddt();
        ~Ddt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_limit; //type: uint32
        YLeaf root; //type: string
        class Authoritative; //type: Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative> authoritative;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ddt


class Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative : public Entity
{
    public:
        Authoritative();
        ~Authoritative();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InstanceIdEidPrefixList; //type: Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList
        class InstanceIdList; //type: Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList> > instance_id_eid_prefix_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList> > instance_id_list;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative


class Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList : public Entity
{
    public:
        InstanceIdEidPrefixList();
        ~InstanceIdEidPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_id; //type: uint32
        YLeaf eid_prefix; //type: string
        YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate> delegate;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList


class Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate : public Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eid_prefix; //type: string
        YLeaf instance_id; //type: string
        YLeaf to; //type: empty
        YLeaf ip_address; //type: string
        YLeaf map_server; //type: empty

}; // Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate


class Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList : public Entity
{
    public:
        InstanceIdList();
        ~InstanceIdList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_id; //type: string
        YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate> delegate;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList


class Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate : public Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eid_prefix; //type: string
        YLeaf instance_id; //type: string
        YLeaf to; //type: empty
        YLeaf ip_address; //type: string
        YLeaf map_server; //type: empty

}; // Native::Router::Lisp::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate


class Native::Router::Lisp::EidTable::InstanceList::Decapsulation : public Entity
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

        class Filter; //type: Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter> filter;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Decapsulation


class Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter : public Entity
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

        class Rloc; //type: Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter::Rloc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter


class Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter::Rloc : public Entity
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

        class Source; //type: Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter::Rloc


class Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source


class Native::Router::Lisp::EidTable::InstanceList::Etr : public Entity
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

        class MapServer; //type: Native::Router::Lisp::EidTable::InstanceList::Etr::MapServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Etr::MapServer> map_server;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Etr


class Native::Router::Lisp::EidTable::InstanceList::Etr::MapServer : public Entity
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

        YLeaf source_address; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Etr::MapServer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4 : public Entity
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
        YLeaf map_request_source; //type: string
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeafList proxy_itr; //type: list of  string
        class DatabaseMapping; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::DatabaseMapping
        class Distance; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::Distance
        class Itr; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::Itr
        class ItrEnable; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::ItrEnable
        class Etr; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr
        class EtrEnable; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::EtrEnable
        class Locator; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::Locator
        class MapCache; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCache
        class MapCacheLimit; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCacheLimit
        class MapCachePersistent; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCachePersistent
        class MapResolver; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver
        class MapServer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer
        class PathMtuDiscovery; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::PathMtuDiscovery
        class RouteExport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteExport
        class RouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport
        class SiteRegistration; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::SolicitMapRequest
        class UsePetr; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::Locator> locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::PathMtuDiscovery> path_mtu_discovery; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::DatabaseMapping : public Entity
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

        class Limit; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::DatabaseMapping


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::Distance : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::Distance


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::Itr : public Entity
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

        class MapResolver; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::Itr


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::Itr::MapResolver : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::Itr::MapResolver


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::ItrEnable : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::ItrEnable


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr : public Entity
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

        class MapServer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr::MapServer

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr::MapServer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr::MapServer::Key : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::Etr::MapServer::Key


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::EtrEnable : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::EtrEnable


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::Locator : public Entity
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

        class Reachability; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::Locator::Reachability

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::Locator::Reachability> reachability;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::Locator


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::Locator::Reachability : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::Locator::Reachability


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCache : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCache


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCacheLimit : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCacheLimit


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCachePersistent : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapCachePersistent


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver : public Entity
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

        class MapRequest; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest> map_request;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest : public Entity
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

        class Validate; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate : public Entity
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

        class Source; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate::Source : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate::Source


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer : public Entity
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

        class MapRegister; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister> map_register;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister : public Entity
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

        class Validate; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate : public Entity
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

        class Source; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate::Source : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::PathMtuDiscovery : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::PathMtuDiscovery


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteExport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteExport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport : public Entity
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

        class Database; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database : public Entity
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

        class Bgp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::MaximumPrefix
        class Ospf; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf
        class Ospfv3; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3
        class Rip; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip
        class Static_; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis> > isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3 : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_ : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache : public Entity
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

        class Bgp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::MaximumPrefix
        class Ospf; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospf
        class Ospfv3; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospfv3
        class Rip; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Rip
        class Static_; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Isis> > isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Bgp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Bgp


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Connected : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Connected


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Eigrp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Isis : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Isis


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospf : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospf


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospfv3 : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospfv3


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Rip : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Rip


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_ : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::SiteRegistration : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::SiteRegistration


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::SolicitMapRequest : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::SolicitMapRequest


class Native::Router::Lisp::EidTable::InstanceList::Ipv4::UsePetr : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv4::UsePetr


class Native::Router::Lisp::EidTable::InstanceList::Ipv6 : public Entity
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
        class DatabaseMapping; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::DatabaseMapping
        class Distance; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::Distance
        class Itr; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::Itr
        class ItrEnable; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::ItrEnable
        class Etr; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr
        class EtrEnable; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::EtrEnable
        class Locator; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::Locator
        class MapCache; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCache
        class MapCacheLimit; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCacheLimit
        class MapCachePersistent; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCachePersistent
        class MapResolver; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver
        class MapServer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer
        class PathMtuDiscovery; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::PathMtuDiscovery
        class RouteExport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteExport
        class RouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport
        class SiteRegistration; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest
        class UsePetr; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::Locator> locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::PathMtuDiscovery> path_mtu_discovery; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::DatabaseMapping : public Entity
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

        class Limit; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::DatabaseMapping


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::DatabaseMapping::Limit : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::DatabaseMapping::Limit


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::Distance : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::Distance


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::Itr : public Entity
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

        class MapResolver; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::Itr


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::Itr::MapResolver : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::Itr::MapResolver


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::ItrEnable : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::ItrEnable


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr : public Entity
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

        class MapServer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr::MapServer

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr::MapServer : public Entity
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
        class Key; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr::MapServer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr::MapServer::Key : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::Etr::MapServer::Key


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::EtrEnable : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::EtrEnable


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::Locator : public Entity
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

        class Reachability; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::Locator::Reachability

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::Locator::Reachability> reachability;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::Locator


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::Locator::Reachability : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::Locator::Reachability


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCache : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCache


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCacheLimit : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCacheLimit


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCachePersistent : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapCachePersistent


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver : public Entity
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

        class MapRequest; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest> map_request;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest : public Entity
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

        class Validate; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate : public Entity
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

        class Source; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate::Source : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapResolver::MapRequest::Validate::Source


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer : public Entity
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

        class MapRegister; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister> map_register;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister : public Entity
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

        class Validate; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate : public Entity
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

        class Source; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate::Source : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::PathMtuDiscovery : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::PathMtuDiscovery


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteExport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteExport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport : public Entity
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

        class Database; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database : public Entity
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

        class Bgp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix
        class Ospf; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf
        class Ospfv3; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3
        class Rip; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip
        class Static_; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis> > isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3 : public Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_ : public Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache : public Entity
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

        class Bgp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix
        class Ospf; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf
        class Ospfv3; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3
        class Rip; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip
        class Static_; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis> > isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3 : public Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer : public Entity
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

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip : public Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip

class Native::Router::Lisp::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::EidTable::InstanceList::DynamicEid::MapServer::Key::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_120_ */

