#ifndef _CISCO_IOS_XE_NATIVE_134_
#define _CISCO_IOS_XE_NATIVE_134_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_128.hpp"
#include "Cisco_IOS_XE_native_129.hpp"
#include "Cisco_IOS_XE_native_132.hpp"
#include "Cisco_IOS_XE_native_133.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::UsePetr::Priority : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::UsePetr::Priority


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Distance : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Distance


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::EidTable : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::EidTable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr : public ydk::Entity
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
        class MapServer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::AcceptMapRequestMapping : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key : public ydk::Entity
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

        class KeyPwd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0 : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6 : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7 : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Itr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Itr::MapResolver


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache : public ydk::Entity
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
        class EidInterface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::EidInterface
        class AwayEids; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::AwayEids> away_eids;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::EidInterface> > eid_interface;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::AwayEids : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::AwayEids


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::EidInterface : public ydk::Entity
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
        class EtrInterfaceIp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::EidInterface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCachePersistent : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCachePersistent


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::ProxyItr : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::ProxyItr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteExport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteExport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport : public ydk::Entity
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

        class Database; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database> database;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database : public ydk::Entity
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

        class Application; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Application
        class Bgp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Nd
        class Ospf; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Ospf
        class Static_; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Static_
        class Rip; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Application : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Application


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Bgp : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Bgp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Connected : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Connected


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Eigrp : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Eigrp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Isis : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Isis


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Nd : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Nd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Ospf : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Ospf


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Rip : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Rip


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Static_ : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Static_


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache : public ydk::Entity
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

        class Application; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Application
        class Bgp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Nd
        class Ospf; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Ospf
        class Static_; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Static_
        class Rip; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Application : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Application


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Bgp : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Bgp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Connected : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Connected


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Eigrp : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Isis : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Isis


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Nd : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Nd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Ospf : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Ospf


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Rip : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Rip


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Static_ : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Static_


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::UsePetr : public ydk::Entity
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
        class Priority; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::UsePetr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::UsePetr::Priority : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::UsePetr::Priority


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt_vrf; //type: string
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::RouteImport> route_import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt : public ydk::Entity
{
    public:
        Alt();
        ~Alt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryRoute; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt::SummaryRoute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt::SummaryRoute : public ydk::Entity
{
    public:
        SummaryRoute();
        ~SummaryRoute();

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
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Alt::SummaryRoute


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping : public ydk::Entity
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

        class EidCont; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont
        class Limit; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::Limit

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

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
        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf auto_discover_rlocs; //type: empty
        class Ipv4Addrees; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees
        class IPv4Interface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface
        class IPv6Interface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface> > ipv6_interface;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface : public ydk::Entity
{
    public:
        IPv4Interface();
        ~IPv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface : public ydk::Entity
{
    public:
        IPv6Interface();
        ~IPv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees : public ydk::Entity
{
    public:
        Ipv4Addrees();
        ~Ipv4Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees : public ydk::Entity
{
    public:
        Ipv6Addrees();
        ~Ipv6Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::Limit : public ydk::Entity
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

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__ : public ydk::Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt_vrf; //type: string
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport> route_import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt : public ydk::Entity
{
    public:
        Alt();
        ~Alt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryRoute; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt::SummaryRoute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt::SummaryRoute : public ydk::Entity
{
    public:
        SummaryRoute();
        ~SummaryRoute();

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
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Alt::SummaryRoute


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping : public ydk::Entity
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

        class EidCont; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont
        class Limit; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::Limit

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

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
        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf auto_discover_rlocs; //type: empty
        class Ipv4Addrees; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees
        class IPv4Interface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv4Interface
        class IPv6Interface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv6Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv6Interface> > ipv6_interface;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv4Interface : public ydk::Entity
{
    public:
        IPv4Interface();
        ~IPv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv4Interface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv6Interface : public ydk::Entity
{
    public:
        IPv6Interface();
        ~IPv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv6Interface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees : public ydk::Entity
{
    public:
        Ipv4Addrees();
        ~Ipv4Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees : public ydk::Entity
{
    public:
        Ipv6Addrees();
        ~Ipv6Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::Limit : public ydk::Entity
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

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Distance : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Distance


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EidTable : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EidTable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr : public ydk::Entity
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
        class MapServer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key : public ydk::Entity
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

        class KeyPwd; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0 : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6 : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7 : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EtrEnable : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::EtrEnable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Itr::MapResolver


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ItrEnable : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ItrEnable


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache : public ydk::Entity
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
        class EidInterface; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface
        class AwayEids; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::AwayEids> away_eids;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface> > eid_interface;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::AwayEids : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::AwayEids


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface : public ydk::Entity
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
        class EtrInterfaceIp; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCacheLimit


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCachePersistent : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::MapCachePersistent


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ProxyItr : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::ProxyItr


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteExport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteExport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport : public ydk::Entity
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

        class Database; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database> database;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database : public ydk::Entity
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_ : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache : public ydk::Entity
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis


class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_134_ */

