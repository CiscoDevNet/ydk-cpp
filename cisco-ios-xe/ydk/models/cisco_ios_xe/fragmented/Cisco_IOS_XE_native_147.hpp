#ifndef _CISCO_IOS_XE_NATIVE_147_
#define _CISCO_IOS_XE_NATIVE_147_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_128.hpp"
#include "Cisco_IOS_XE_native_145.hpp"
#include "Cisco_IOS_XE_native_146.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

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

        class Validate; //type: Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister


class Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

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

        class Source; //type: Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate


class Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr


class Native::Router::Lisp::Service::Ipv6::Default_::RouteExport : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::Lisp::Service::Ipv6::Default_::RouteExport


class Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration


class Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest


class Native::Router::Lisp::Service::Ipv6::Default_::UsePetr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::Service::Ipv6::Default_::UsePetr


class Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority


class Native::Router::Lisp::Service::Ipv6::Distance : public ydk::Entity
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
        ydk::YLeaf away; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::Lisp::Service::Ipv6::Distance


class Native::Router::Lisp::Service::Ipv6::Etr : public ydk::Entity
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

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::Service::Ipv6::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Service::Ipv6::Etr


class Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Service::Ipv6::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Service::Ipv6::Etr::MapServer


class Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key : public ydk::Entity
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

        class KeyPwd; //type: Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key


class Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0 : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6 : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7 : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Service::Ipv6::EtrEnable : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::EtrEnable


class Native::Router::Lisp::Service::Ipv6::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::Lisp::Service::Ipv6::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Service::Ipv6::Itr


class Native::Router::Lisp::Service::Ipv6::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::Itr::MapResolver


class Native::Router::Lisp::Service::Ipv6::ItrEnable : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::ItrEnable


class Native::Router::Lisp::Service::Ipv6::MapCache : public ydk::Entity
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
        class AwayEids; //type: Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids> away_eids;
        
}; // Native::Router::Lisp::Service::Ipv6::MapCache


class Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf send_map_request; //type: empty

}; // Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids


class Native::Router::Lisp::Service::Ipv6::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::MapCacheLimit


class Native::Router::Lisp::Service::Ipv6::MapCachePersistent : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::MapCachePersistent


class Native::Router::Lisp::Service::Ipv6::MapResolver : public ydk::Entity
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

        class MapRequest; //type: Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest> map_request;
        
}; // Native::Router::Lisp::Service::Ipv6::MapResolver


class Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

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

        class Validate; //type: Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest


class Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

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

        class Source; //type: Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate


class Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        class List; //type: Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source


class Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List


class Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
{
    public:
        Registered();
        ~Registered();

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

        class List; //type: Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
{
    public:
        List();
        ~List();

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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::Lisp::Service::Ipv6::MapServer : public ydk::Entity
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

        class MapRegister; //type: Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister> map_register;
        
}; // Native::Router::Lisp::Service::Ipv6::MapServer


class Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

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

        class Validate; //type: Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister


class Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

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

        class Source; //type: Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate


class Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::Service::Ipv6::ProxyItr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::Lisp::Service::Ipv6::ProxyItr


class Native::Router::Lisp::Service::Ipv6::RouteExport : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::Lisp::Service::Ipv6::RouteExport


class Native::Router::Lisp::Service::Ipv6::SiteRegistration : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Service::Ipv6::SiteRegistration


class Native::Router::Lisp::Service::Ipv6::SolicitMapRequest : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::Service::Ipv6::SolicitMapRequest


class Native::Router::Lisp::Service::Ipv6::UsePetr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::Lisp::Service::Ipv6::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ipv6::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::Service::Ipv6::UsePetr


class Native::Router::Lisp::Service::Ipv6::UsePetr::Priority : public ydk::Entity
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

}; // Native::Router::Lisp::Service::Ipv6::UsePetr::Priority


class Native::Router::Lisp::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

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

        ydk::YLeaf sname; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf site_id; //type: uint32
        class Default_; //type: Native::Router::Lisp::Site::Default_
        class AuthenticationKey; //type: Native::Router::Lisp::Site::AuthenticationKey
        class AllowedLocator; //type: Native::Router::Lisp::Site::AllowedLocator
        class EidPrefix; //type: Native::Router::Lisp::Site::EidPrefix
        class EidRecord; //type: Native::Router::Lisp::Site::EidRecord

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::AllowedLocator> allowed_locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidPrefix> eid_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidRecord> eid_record;
        
}; // Native::Router::Lisp::Site


class Native::Router::Lisp::Site::AllowedLocator : public ydk::Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ls_ipv4; //type: string
        ydk::YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::Lisp::Site::AllowedLocator::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::AllowedLocator::List> list;
        
}; // Native::Router::Lisp::Site::AllowedLocator


class Native::Router::Lisp::Site::AllowedLocator::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Site::AllowedLocator::List


class Native::Router::Lisp::Site::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

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
        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string

}; // Native::Router::Lisp::Site::AuthenticationKey


class Native::Router::Lisp::Site::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf site_id; //type: uint32
        class AuthenticationKey; //type: Native::Router::Lisp::Site::Default_::AuthenticationKey
        class AllowedLocator; //type: Native::Router::Lisp::Site::Default_::AllowedLocator
        class EidPrefix; //type: Native::Router::Lisp::Site::Default_::EidPrefix
        class EidRecord; //type: Native::Router::Lisp::Site::Default_::EidRecord

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::AllowedLocator> allowed_locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidPrefix> eid_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidRecord> eid_record;
        
}; // Native::Router::Lisp::Site::Default_


class Native::Router::Lisp::Site::Default_::AllowedLocator : public ydk::Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ls_ipv4; //type: string
        ydk::YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::Lisp::Site::Default_::AllowedLocator::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::AllowedLocator::List> list;
        
}; // Native::Router::Lisp::Site::Default_::AllowedLocator


class Native::Router::Lisp::Site::Default_::AllowedLocator::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Site::Default_::AllowedLocator::List


class Native::Router::Lisp::Site::Default_::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

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
        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string

}; // Native::Router::Lisp::Site::Default_::AuthenticationKey


class Native::Router::Lisp::Site::Default_::EidPrefix : public ydk::Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default_::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::Default_::EidPrefix


class Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId


class Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId::Prefixes


class Native::Router::Lisp::Site::Default_::EidPrefix::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default_::EidPrefix::Prefixes


class Native::Router::Lisp::Site::Default_::EidRecord : public ydk::Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default_::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::Default_::EidRecord::InstanceId

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::Default_::EidRecord


class Native::Router::Lisp::Site::Default_::EidRecord::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default_::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::Default_::EidRecord::InstanceId


class Native::Router::Lisp::Site::Default_::EidRecord::InstanceId::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default_::EidRecord::InstanceId::Prefixes


class Native::Router::Lisp::Site::Default_::EidRecord::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default_::EidRecord::Prefixes


class Native::Router::Lisp::Site::EidPrefix : public ydk::Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::EidPrefix::InstanceId

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::EidPrefix


class Native::Router::Lisp::Site::EidPrefix::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::EidPrefix::InstanceId


class Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes


class Native::Router::Lisp::Site::EidPrefix::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidPrefix::Prefixes


class Native::Router::Lisp::Site::EidRecord : public ydk::Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::EidRecord::InstanceId

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::EidRecord


class Native::Router::Lisp::Site::EidRecord::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::EidRecord::InstanceId


class Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes


class Native::Router::Lisp::Site::EidRecord::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidRecord::Prefixes


class Native::Router::Lisp::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

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

        ydk::YLeaf verbose; //type: empty
        class Session; //type: Native::Router::Lisp::Syslog::Session

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Syslog::Session> session;
        
}; // Native::Router::Lisp::Syslog


class Native::Router::Lisp::Syslog::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf changes; //type: empty

}; // Native::Router::Lisp::Syslog::Session


class Native::Router::LispList : public ydk::Entity
{
    public:
        LispList();
        ~LispList();

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

        ydk::YLeaf lisp; //type: uint16
        ydk::YLeaf disable_ttl_propagate; //type: empty
        ydk::YLeaf site_id; //type: uint32
        class Default_; //type: Native::Router::LispList::Default_
        class Service; //type: Native::Router::LispList::Service
        class Encapsulation; //type: Native::Router::LispList::Encapsulation
        class LocatorSet; //type: Native::Router::LispList::LocatorSet
        class Locator; //type: Native::Router::LispList::Locator
        class LocatorScope; //type: Native::Router::LispList::LocatorScope
        class InstanceContainer; //type: Native::Router::LispList::InstanceContainer
        class Alt; //type: Native::Router::LispList::Alt
        class ControlPacket; //type: Native::Router::LispList::ControlPacket
        class Ddt; //type: Native::Router::LispList::Ddt
        class Decapsulation; //type: Native::Router::LispList::Decapsulation
        class Etr; //type: Native::Router::LispList::Etr
        class Ipv4; //type: Native::Router::LispList::Ipv4
        class Ipv6; //type: Native::Router::LispList::Ipv6
        class LocReachAlgorithm; //type: Native::Router::LispList::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::LispList::LocatorDown
        class LocatorTable; //type: Native::Router::LispList::LocatorTable
        class MapRequest; //type: Native::Router::LispList::MapRequest
        class MapServer; //type: Native::Router::LispList::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::RemoteRlocProbe
        class EidTable; //type: Native::Router::LispList::EidTable
        class Security; //type: Native::Router::LispList::Security
        class Site; //type: Native::Router::LispList::Site
        class Syslog; //type: Native::Router::LispList::Syslog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::ControlPacket> control_packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ddt> ddt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Decapsulation> decapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer> instance_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Locator> locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::LocatorDown> locator_down;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::LocatorSet> > locator_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::LocatorTable> locator_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::MapRequest> map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Security> security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Service> service; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Site> > site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Syslog> syslog;
        
}; // Native::Router::LispList


class Native::Router::LispList::Alt : public ydk::Entity
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

        class SummaryRoute; //type: Native::Router::LispList::Alt::SummaryRoute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::LispList::Alt


class Native::Router::LispList::Alt::SummaryRoute : public ydk::Entity
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

}; // Native::Router::LispList::Alt::SummaryRoute


class Native::Router::LispList::ControlPacket : public ydk::Entity
{
    public:
        ControlPacket();
        ~ControlPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32

}; // Native::Router::LispList::ControlPacket


class Native::Router::LispList::Ddt : public ydk::Entity
{
    public:
        Ddt();
        ~Ddt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_limit; //type: uint32
        ydk::YLeaf root; //type: string
        class Authoritative; //type: Native::Router::LispList::Ddt::Authoritative

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative> authoritative;
        
}; // Native::Router::LispList::Ddt


class Native::Router::LispList::Ddt::Authoritative : public ydk::Entity
{
    public:
        Authoritative();
        ~Authoritative();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstanceIdEidPrefixList; //type: Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList
        class InstanceIdList; //type: Native::Router::LispList::Ddt::Authoritative::InstanceIdList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList> > instance_id_eid_prefix_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative::InstanceIdList> > instance_id_list;
        
}; // Native::Router::LispList::Ddt::Authoritative


class Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList : public ydk::Entity
{
    public:
        InstanceIdEidPrefixList();
        ~InstanceIdEidPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate> delegate;
        
}; // Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList


class Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

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
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate


class Native::Router::LispList::Ddt::Authoritative::InstanceIdList : public ydk::Entity
{
    public:
        InstanceIdList();
        ~InstanceIdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::LispList::Ddt::Authoritative::InstanceIdList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative::InstanceIdList::Delegate> delegate;
        
}; // Native::Router::LispList::Ddt::Authoritative::InstanceIdList


class Native::Router::LispList::Ddt::Authoritative::InstanceIdList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

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
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::LispList::Ddt::Authoritative::InstanceIdList::Delegate


class Native::Router::LispList::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filter; //type: Native::Router::LispList::Decapsulation::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Decapsulation::Filter> filter;
        
}; // Native::Router::LispList::Decapsulation


class Native::Router::LispList::Decapsulation::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::LispList::Decapsulation::Filter::Rloc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::LispList::Decapsulation::Filter


class Native::Router::LispList::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::LispList::Decapsulation::Filter::Rloc


class Native::Router::LispList::Decapsulation::Filter::Rloc::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::LispList::Decapsulation::Filter::Rloc::Source


class Native::Router::LispList::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_ttl_propagate; //type: empty
        ydk::YLeaf site_id; //type: uint32
        class Service; //type: Native::Router::LispList::Default_::Service
        class Encapsulation; //type: Native::Router::LispList::Default_::Encapsulation
        class LocatorSet; //type: Native::Router::LispList::Default_::LocatorSet
        class Locator; //type: Native::Router::LispList::Default_::Locator
        class LocatorScope; //type: Native::Router::LispList::Default_::LocatorScope
        class InstanceContainer; //type: Native::Router::LispList::Default_::InstanceContainer
        class Alt; //type: Native::Router::LispList::Default_::Alt
        class ControlPacket; //type: Native::Router::LispList::Default_::ControlPacket
        class Ddt; //type: Native::Router::LispList::Default_::Ddt
        class Decapsulation; //type: Native::Router::LispList::Default_::Decapsulation
        class Etr; //type: Native::Router::LispList::Default_::Etr
        class Ipv4; //type: Native::Router::LispList::Default_::Ipv4
        class Ipv6; //type: Native::Router::LispList::Default_::Ipv6
        class LocReachAlgorithm; //type: Native::Router::LispList::Default_::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::LispList::Default_::LocatorDown
        class LocatorTable; //type: Native::Router::LispList::Default_::LocatorTable
        class MapRequest; //type: Native::Router::LispList::Default_::MapRequest
        class MapServer; //type: Native::Router::LispList::Default_::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::Default_::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::Default_::RemoteRlocProbe
        class EidTable; //type: Native::Router::LispList::Default_::EidTable
        class Security; //type: Native::Router::LispList::Default_::Security
        class Site; //type: Native::Router::LispList::Default_::Site
        class Syslog; //type: Native::Router::LispList::Default_::Syslog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::ControlPacket> control_packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ddt> ddt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Decapsulation> decapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer> instance_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Locator> locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorDown> locator_down;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorSet> > locator_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorTable> locator_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::MapRequest> map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Security> security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service> service; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site> > site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Syslog> syslog;
        
}; // Native::Router::LispList::Default_


class Native::Router::LispList::Default_::Alt : public ydk::Entity
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

        class SummaryRoute; //type: Native::Router::LispList::Default_::Alt::SummaryRoute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::LispList::Default_::Alt


class Native::Router::LispList::Default_::Alt::SummaryRoute : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Alt::SummaryRoute


class Native::Router::LispList::Default_::ControlPacket : public ydk::Entity
{
    public:
        ControlPacket();
        ~ControlPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32

}; // Native::Router::LispList::Default_::ControlPacket


class Native::Router::LispList::Default_::Ddt : public ydk::Entity
{
    public:
        Ddt();
        ~Ddt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_limit; //type: uint32
        ydk::YLeaf root; //type: string
        class Authoritative; //type: Native::Router::LispList::Default_::Ddt::Authoritative

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ddt::Authoritative> authoritative;
        
}; // Native::Router::LispList::Default_::Ddt


class Native::Router::LispList::Default_::Ddt::Authoritative : public ydk::Entity
{
    public:
        Authoritative();
        ~Authoritative();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstanceIdEidPrefixList; //type: Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdEidPrefixList
        class InstanceIdList; //type: Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdEidPrefixList> > instance_id_eid_prefix_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdList> > instance_id_list;
        
}; // Native::Router::LispList::Default_::Ddt::Authoritative


class Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdEidPrefixList : public ydk::Entity
{
    public:
        InstanceIdEidPrefixList();
        ~InstanceIdEidPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate> delegate;
        
}; // Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdEidPrefixList


class Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

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
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate


class Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdList : public ydk::Entity
{
    public:
        InstanceIdList();
        ~InstanceIdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdList::Delegate> delegate;
        
}; // Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdList


class Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

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
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::LispList::Default_::Ddt::Authoritative::InstanceIdList::Delegate


class Native::Router::LispList::Default_::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filter; //type: Native::Router::LispList::Default_::Decapsulation::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Decapsulation::Filter> filter;
        
}; // Native::Router::LispList::Default_::Decapsulation


class Native::Router::LispList::Default_::Decapsulation::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::LispList::Default_::Decapsulation::Filter::Rloc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::LispList::Default_::Decapsulation::Filter


class Native::Router::LispList::Default_::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default_::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::LispList::Default_::Decapsulation::Filter::Rloc


class Native::Router::LispList::Default_::Decapsulation::Filter::Rloc::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::LispList::Default_::Decapsulation::Filter::Rloc::Source


class Native::Router::LispList::Default_::EidTable : public ydk::Entity
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

        class InstanceList; //type: Native::Router::LispList::Default_::EidTable::InstanceList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList> > instance_list;
        
}; // Native::Router::LispList::Default_::EidTable


class Native::Router::LispList::Default_::EidTable::InstanceList : public ydk::Entity
{
    public:
        InstanceList();
        ~InstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf disable_ttl_propagate; //type: empty
        class DatabaseMapping; //type: Native::Router::LispList::Default_::EidTable::InstanceList::DatabaseMapping
        class DynamicEid; //type: Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid
        class Alt; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Alt
        class ControlPacket; //type: Native::Router::LispList::Default_::EidTable::InstanceList::ControlPacket
        class Ddt; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ddt
        class Decapsulation; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation
        class Etr; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Etr
        class Ipv4; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4
        class Ipv6; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6
        class LocReachAlgorithm; //type: Native::Router::LispList::Default_::EidTable::InstanceList::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::LispList::Default_::EidTable::InstanceList::LocatorDown
        class LocatorTable; //type: Native::Router::LispList::Default_::EidTable::InstanceList::LocatorTable
        class MapRequest; //type: Native::Router::LispList::Default_::EidTable::InstanceList::MapRequest
        class MapServer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::Default_::EidTable::InstanceList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::Default_::EidTable::InstanceList::RemoteRlocProbe
        class MapCache; //type: Native::Router::LispList::Default_::EidTable::InstanceList::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::ControlPacket> control_packet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::DatabaseMapping> > database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ddt> ddt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation> decapsulation;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid> > dynamic_eid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::LocatorDown> locator_down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::LocatorTable> locator_table;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::MapCache> > map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::MapRequest> map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::RemoteRlocProbe> remote_rloc_probe;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList


class Native::Router::LispList::Default_::EidTable::InstanceList::Alt : public ydk::Entity
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

        class SummaryRoute; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Alt::SummaryRoute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Alt


class Native::Router::LispList::Default_::EidTable::InstanceList::Alt::SummaryRoute : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Alt::SummaryRoute


class Native::Router::LispList::Default_::EidTable::InstanceList::ControlPacket : public ydk::Entity
{
    public:
        ControlPacket();
        ~ControlPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32

}; // Native::Router::LispList::Default_::EidTable::InstanceList::ControlPacket


class Native::Router::LispList::Default_::EidTable::InstanceList::DatabaseMapping : public ydk::Entity
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

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::Default_::EidTable::InstanceList::DatabaseMapping


class Native::Router::LispList::Default_::EidTable::InstanceList::Ddt : public ydk::Entity
{
    public:
        Ddt();
        ~Ddt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_limit; //type: uint32
        ydk::YLeaf root; //type: string
        class Authoritative; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative> authoritative;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ddt


class Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative : public ydk::Entity
{
    public:
        Authoritative();
        ~Authoritative();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstanceIdEidPrefixList; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList
        class InstanceIdList; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList> > instance_id_eid_prefix_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList> > instance_id_list;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative


class Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList : public ydk::Entity
{
    public:
        InstanceIdEidPrefixList();
        ~InstanceIdEidPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate> delegate;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList


class Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

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
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate


class Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList : public ydk::Entity
{
    public:
        InstanceIdList();
        ~InstanceIdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate> delegate;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList


class Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

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
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate


class Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filter; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter> filter;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation


class Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter


class Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc


class Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source


class Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid : public ydk::Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

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
        ydk::YLeaf map_notify_group; //type: string
        class DatabaseMapping; //type: Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::DatabaseMapping
        class EidNotify; //type: Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify
        class MapServer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::MapServer

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::DatabaseMapping> > database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify> eid_notify;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid


class Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::DatabaseMapping : public ydk::Entity
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

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::DatabaseMapping


class Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify : public ydk::Entity
{
    public:
        EidNotify();
        ~EidNotify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthenticationKey; //type: Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey
        class GatewayKey; //type: Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey> > gateway_key;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify


class Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

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
        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf unc_pwd; //type: string

}; // Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey


class Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey : public ydk::Entity
{
    public:
        GatewayKey();
        ~GatewayKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gateway_ip; //type: string
        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey


class Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::MapServer : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::MapServer


class Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key : public ydk::Entity
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
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key


class Native::Router::LispList::Default_::EidTable::InstanceList::Etr : public ydk::Entity
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

        class MapServer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Etr::MapServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Etr::MapServer> map_server;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Etr


class Native::Router::LispList::Default_::EidTable::InstanceList::Etr::MapServer : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Etr::MapServer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4 : public ydk::Entity
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

        ydk::YLeaf alt_vrf; //type: string
        ydk::YLeaf map_request_source; //type: string
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeafList proxy_itr; //type: list of  string
        class DatabaseMapping; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping
        class Distance; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Distance
        class Itr; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::ItrEnable
        class Etr; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr
        class EtrEnable; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::EtrEnable
        class Locator; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Locator
        class MapCache; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCache
        class MapCacheLimit; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCacheLimit
        class MapCachePersistent; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCachePersistent
        class MapResolver; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer
        class PathMtuDiscovery; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::PathMtuDiscovery
        class RouteExport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteExport
        class RouteImport; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport
        class SiteRegistration; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::SolicitMapRequest
        class UsePetr; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::UsePetr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Locator> locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::PathMtuDiscovery> path_mtu_discovery; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport> route_import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping : public ydk::Entity
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

        class Limit; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Distance : public ydk::Entity
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
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Distance


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr : public ydk::Entity
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

        class MapServer; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer::Key : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer::Key


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::EtrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::EtrEnable


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Itr


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Itr::MapResolver


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::ItrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::ItrEnable


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Locator : public ydk::Entity
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

        class Reachability; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Locator::Reachability

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Locator::Reachability> reachability;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Locator


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Locator::Reachability : public ydk::Entity
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

        ydk::YLeaf exclude_default; //type: empty

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::Locator::Reachability


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCache : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCache


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCacheLimit


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCachePersistent : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapCachePersistent


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver : public ydk::Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: empty
        ydk::YLeaf registered; //type: empty
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer : public ydk::Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::PathMtuDiscovery : public ydk::Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16
        ydk::YLeaf min; //type: uint16

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::PathMtuDiscovery


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteExport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteExport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport : public ydk::Entity
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

        class Database; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database
        class MapCache; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database> database;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::MapCache> map_cache;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport


class Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database : public ydk::Entity
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

        class Bgp; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::MaximumPrefix
        class Ospf; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf
        class Ospfv3; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3
        class Rip; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip
        class Static_; //type: Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Eigrp> > eigrp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Isis> > isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Ospfv3> > ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database::Static_> static_;
        
}; // Native::Router::LispList::Default_::EidTable::InstanceList::Ipv4::RouteImport::Database

class Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_147_ */

