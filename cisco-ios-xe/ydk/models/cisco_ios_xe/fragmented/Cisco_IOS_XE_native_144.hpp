#ifndef _CISCO_IOS_XE_NATIVE_144_
#define _CISCO_IOS_XE_NATIVE_144_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_128.hpp"
#include "Cisco_IOS_XE_native_139.hpp"
#include "Cisco_IOS_XE_native_142.hpp"
#include "Cisco_IOS_XE_native_143.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::EidTable : public ydk::Entity
{
    public:
        EidTable();
        ~EidTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::EidTable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::EtrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Itr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Itr::MapResolver


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::ItrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registration; //type: empty
        class EidInterface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::EidInterface
        class AwayEids; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::AwayEids> away_eids;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::EidInterface> > eid_interface;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::AwayEids : public ydk::Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_map_request; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::AwayEids


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::EidInterface : public ydk::Entity
{
    public:
        EidInterface();
        ~EidInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf drop; //type: empty
        ydk::YLeaf map_request; //type: empty
        ydk::YLeaf native_forward; //type: empty
        class EtrInterfaceIp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::EidInterface::EtrInterfaceIp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::EidInterface::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::EidInterface


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::EidInterface::EtrInterfaceIp : public ydk::Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr_interface_ip_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCache::EidInterface::EtrInterfaceIp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCacheLimit


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::MapCachePersistent


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::ProxyItr : public ydk::Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::ProxyItr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteExport : public ydk::Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteExport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport : public ydk::Entity
{
    public:
        RouteImport();
        ~RouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Database; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database> database;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Application
        class Bgp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Nd
        class Ospf; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Ospf
        class Static_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Static_
        class Rip; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Application


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Application::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Bgp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Bgp::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Connected


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Connected::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Eigrp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Eigrp::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_id; //type: string
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Isis


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Isis::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf threshold1; //type: uint8
        ydk::YLeaf warning_only1; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Nd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Nd::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Ospf


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Ospf::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Rip


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Rip::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Static_


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Static_::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Application
        class Bgp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Nd
        class Ospf; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Ospf
        class Static_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Static_
        class Rip; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Application


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Application::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Bgp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Bgp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Connected


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Connected::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Eigrp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Isis


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Isis::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf threshold1; //type: uint8
        ydk::YLeaf warning_only1; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Nd::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Nd::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Nd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Nd::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Nd::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Ospf


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Ospf::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Rip


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Rip::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Static_


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Static_::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::SolicitMapRequest


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::UsePetr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::UsePetr::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_value; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::UsePetr::Priority


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf away; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Distance


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::EidTable : public ydk::Entity
{
    public:
        EidTable();
        ~EidTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::EidTable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::EtrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Itr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Itr::MapResolver


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::ItrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registration; //type: empty
        class EidInterface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface
        class AwayEids; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::AwayEids> away_eids;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface> > eid_interface;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::AwayEids : public ydk::Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_map_request; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::AwayEids


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface : public ydk::Entity
{
    public:
        EidInterface();
        ~EidInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf drop; //type: empty
        ydk::YLeaf map_request; //type: empty
        ydk::YLeaf native_forward; //type: empty
        class EtrInterfaceIp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp : public ydk::Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr_interface_ip_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCacheLimit


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::MapCachePersistent


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::ProxyItr : public ydk::Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::ProxyItr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteExport : public ydk::Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteExport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport : public ydk::Entity
{
    public:
        RouteImport();
        ~RouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Database; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database> database;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application
        class Bgp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd
        class Ospf; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf
        class Static_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_
        class Rip; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_id; //type: string
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf threshold1; //type: uint8
        ydk::YLeaf warning_only1; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application
        class Bgp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd
        class Ospf; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf
        class Static_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_
        class Rip; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf threshold1; //type: uint8
        ydk::YLeaf warning_only1; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::SolicitMapRequest


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::UsePetr


class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_value; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority


class Native::Router::Lisp::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf alt_vrf; //type: string
        ydk::YLeaf map_request_source; //type: string
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeafList proxy_itr; //type: list of  string
        class DatabaseMapping; //type: Native::Router::Lisp::Ipv4::DatabaseMapping
        class Distance; //type: Native::Router::Lisp::Ipv4::Distance
        class Itr; //type: Native::Router::Lisp::Ipv4::Itr
        class ItrEnable; //type: Native::Router::Lisp::Ipv4::ItrEnable
        class Etr; //type: Native::Router::Lisp::Ipv4::Etr
        class EtrEnable; //type: Native::Router::Lisp::Ipv4::EtrEnable
        class Locator; //type: Native::Router::Lisp::Ipv4::Locator
        class MapCache; //type: Native::Router::Lisp::Ipv4::MapCache
        class MapCacheLimit; //type: Native::Router::Lisp::Ipv4::MapCacheLimit
        class MapCachePersistent; //type: Native::Router::Lisp::Ipv4::MapCachePersistent
        class MapResolver; //type: Native::Router::Lisp::Ipv4::MapResolver
        class MapServer; //type: Native::Router::Lisp::Ipv4::MapServer
        class PathMtuDiscovery; //type: Native::Router::Lisp::Ipv4::PathMtuDiscovery
        class RouteExport; //type: Native::Router::Lisp::Ipv4::RouteExport
        class RouteImport; //type: Native::Router::Lisp::Ipv4::RouteImport
        class SiteRegistration; //type: Native::Router::Lisp::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Ipv4::SolicitMapRequest
        class UsePetr; //type: Native::Router::Lisp::Ipv4::UsePetr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::Locator> locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::PathMtuDiscovery> path_mtu_discovery; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::RouteImport> route_import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::Ipv4


class Native::Router::Lisp::Ipv4::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Limit; //type: Native::Router::Lisp::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Ipv4::DatabaseMapping


class Native::Router::Lisp::Ipv4::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Ipv4::DatabaseMapping::Limit


class Native::Router::Lisp::Ipv4::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::Lisp::Ipv4::Distance


class Native::Router::Lisp::Ipv4::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MapServer; //type: Native::Router::Lisp::Ipv4::Etr::MapServer

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Ipv4::Etr


class Native::Router::Lisp::Ipv4::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::Ipv4::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Ipv4::Etr::MapServer


class Native::Router::Lisp::Ipv4::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string
        ydk::YLeaf pwd; //type: string

}; // Native::Router::Lisp::Ipv4::Etr::MapServer::Key


class Native::Router::Lisp::Ipv4::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::Ipv4::EtrEnable


class Native::Router::Lisp::Ipv4::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MapResolver; //type: Native::Router::Lisp::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Ipv4::Itr


class Native::Router::Lisp::Ipv4::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::Ipv4::Itr::MapResolver


class Native::Router::Lisp::Ipv4::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::Ipv4::ItrEnable


class Native::Router::Lisp::Ipv4::Locator : public ydk::Entity
{
    public:
        Locator();
        ~Locator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Reachability; //type: Native::Router::Lisp::Ipv4::Locator::Reachability

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::Locator::Reachability> reachability;
        
}; // Native::Router::Lisp::Ipv4::Locator


class Native::Router::Lisp::Ipv4::Locator::Reachability : public ydk::Entity
{
    public:
        Reachability();
        ~Reachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf exclude_default; //type: empty

}; // Native::Router::Lisp::Ipv4::Locator::Reachability


class Native::Router::Lisp::Ipv4::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf site_registration; //type: empty

}; // Native::Router::Lisp::Ipv4::MapCache


class Native::Router::Lisp::Ipv4::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Ipv4::MapCacheLimit


class Native::Router::Lisp::Ipv4::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::Lisp::Ipv4::MapCachePersistent


class Native::Router::Lisp::Ipv4::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MapRequest; //type: Native::Router::Lisp::Ipv4::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4::MapResolver::MapRequest> map_request;
        
}; // Native::Router::Lisp::Ipv4::MapResolver

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_144_ */

