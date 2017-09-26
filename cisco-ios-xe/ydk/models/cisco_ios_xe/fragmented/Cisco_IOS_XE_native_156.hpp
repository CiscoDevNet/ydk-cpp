#ifndef _CISCO_IOS_XE_NATIVE_156_
#define _CISCO_IOS_XE_NATIVE_156_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_147.hpp"
#include "Cisco_IOS_XE_native_155.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate : public ydk::Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer : public ydk::Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate : public ydk::Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv4::Default__::ProxyItr : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::ProxyItr


class Native::Router::LispList::Default_::Service::Ipv4::Default__::RouteExport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::RouteExport


class Native::Router::LispList::Default_::Service::Ipv4::Default__::SiteRegistration : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::SiteRegistration


class Native::Router::LispList::Default_::Service::Ipv4::Default__::SolicitMapRequest : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr : public ydk::Entity
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
        class Priority; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr


class Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr::Priority : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr::Priority


class Native::Router::LispList::Default_::Service::Ipv4::Distance : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Distance


class Native::Router::LispList::Default_::Service::Ipv4::Etr : public ydk::Entity
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
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Etr


class Native::Router::LispList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key : public ydk::Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ipv4::EtrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::EtrEnable


class Native::Router::LispList::Default_::Service::Ipv4::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Itr


class Native::Router::LispList::Default_::Service::Ipv4::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ipv4::ItrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::ItrEnable


class Native::Router::LispList::Default_::Service::Ipv4::MapCache : public ydk::Entity
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
        class AwayEids; //type: Native::Router::LispList::Default_::Service::Ipv4::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapCache


class Native::Router::LispList::Default_::Service::Ipv4::MapCache::AwayEids : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::MapCache::AwayEids


class Native::Router::LispList::Default_::Service::Ipv4::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ipv4::MapCachePersistent : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::MapCachePersistent


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver : public ydk::Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate : public ydk::Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ipv4::MapServer : public ydk::Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapServer


class Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate : public ydk::Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv4::ProxyItr : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::ProxyItr


class Native::Router::LispList::Default_::Service::Ipv4::RouteExport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::RouteExport


class Native::Router::LispList::Default_::Service::Ipv4::SiteRegistration : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::SiteRegistration


class Native::Router::LispList::Default_::Service::Ipv4::SolicitMapRequest : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ipv4::UsePetr : public ydk::Entity
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
        class Priority; //type: Native::Router::LispList::Default_::Service::Ipv4::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::UsePetr


class Native::Router::LispList::Default_::Service::Ipv4::UsePetr::Priority : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::UsePetr::Priority


class Native::Router::LispList::Default_::Service::Ipv6 : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ipv6::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ipv6::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ipv6::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ipv6::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv6::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ipv6::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ipv6::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default_::Service::Ipv6::Distance
        class MapCache; //type: Native::Router::LispList::Default_::Service::Ipv6::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::Service::Ipv6::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::Service::Ipv6::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::Service::Ipv6::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::Service::Ipv6::UsePetr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::UsePetr> > use_petr;
                class Encapsulation;

}; // Native::Router::LispList::Default_::Service::Ipv6


class Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping : public ydk::Entity
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

        class Limit; //type: Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping::Limit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ipv6::Default__ : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Distance
        class MapCache; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr> > use_petr;
                class Encapsulation;

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__


class Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping : public ydk::Entity
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

        class Limit; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Distance : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Distance


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr : public ydk::Entity
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
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key : public ydk::Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ipv6::Default__::EtrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::EtrEnable


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ipv6::Default__::ItrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::ItrEnable


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache : public ydk::Entity
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
        class AwayEids; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache::AwayEids : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache::AwayEids


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCachePersistent : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCachePersistent


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver : public ydk::Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate : public ydk::Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer : public ydk::Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate : public ydk::Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv6::Default__::ProxyItr : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::ProxyItr


class Native::Router::LispList::Default_::Service::Ipv6::Default__::RouteExport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::RouteExport


class Native::Router::LispList::Default_::Service::Ipv6::Default__::SiteRegistration : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::SiteRegistration


class Native::Router::LispList::Default_::Service::Ipv6::Default__::SolicitMapRequest : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr : public ydk::Entity
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
        class Priority; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr


class Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr::Priority : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr::Priority


class Native::Router::LispList::Default_::Service::Ipv6::Distance : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Distance


class Native::Router::LispList::Default_::Service::Ipv6::Etr : public ydk::Entity
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
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Etr


class Native::Router::LispList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key : public ydk::Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ipv6::EtrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::EtrEnable


class Native::Router::LispList::Default_::Service::Ipv6::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv6::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Itr


class Native::Router::LispList::Default_::Service::Ipv6::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ipv6::ItrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::ItrEnable


class Native::Router::LispList::Default_::Service::Ipv6::MapCache : public ydk::Entity
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
        class AwayEids; //type: Native::Router::LispList::Default_::Service::Ipv6::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapCache


class Native::Router::LispList::Default_::Service::Ipv6::MapCache::AwayEids : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapCache::AwayEids


class Native::Router::LispList::Default_::Service::Ipv6::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ipv6::MapCachePersistent : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapCachePersistent


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver : public ydk::Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate : public ydk::Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ipv6::MapServer : public ydk::Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapServer


class Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate : public ydk::Entity
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

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv6::ProxyItr : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::ProxyItr


class Native::Router::LispList::Default_::Service::Ipv6::RouteExport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::RouteExport


class Native::Router::LispList::Default_::Service::Ipv6::SiteRegistration : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::SiteRegistration


class Native::Router::LispList::Default_::Service::Ipv6::SolicitMapRequest : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ipv6::UsePetr : public ydk::Entity
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
        class Priority; //type: Native::Router::LispList::Default_::Service::Ipv6::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::UsePetr


class Native::Router::LispList::Default_::Service::Ipv6::UsePetr::Priority : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv6::UsePetr::Priority


class Native::Router::LispList::Default_::Site : public ydk::Entity
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

        ydk::YLeaf sname; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf site_id; //type: uint32
        class Default__; //type: Native::Router::LispList::Default_::Site::Default__
        class AuthenticationKey; //type: Native::Router::LispList::Default_::Site::AuthenticationKey
        class AllowedLocator; //type: Native::Router::LispList::Default_::Site::AllowedLocator
        class EidPrefix; //type: Native::Router::LispList::Default_::Site::EidPrefix
        class EidRecord; //type: Native::Router::LispList::Default_::Site::EidRecord

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::AllowedLocator> allowed_locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidPrefix> eid_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidRecord> eid_record;
        
}; // Native::Router::LispList::Default_::Site


class Native::Router::LispList::Default_::Site::AllowedLocator : public ydk::Entity
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
        class List; //type: Native::Router::LispList::Default_::Site::AllowedLocator::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::AllowedLocator::List> list;
        
}; // Native::Router::LispList::Default_::Site::AllowedLocator


class Native::Router::LispList::Default_::Site::AllowedLocator::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::AllowedLocator::List


class Native::Router::LispList::Default_::Site::AuthenticationKey : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::AuthenticationKey


class Native::Router::LispList::Default_::Site::Default__ : public ydk::Entity
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

        ydk::YLeaf description; //type: string
        ydk::YLeaf site_id; //type: uint32
        class AuthenticationKey; //type: Native::Router::LispList::Default_::Site::Default__::AuthenticationKey
        class AllowedLocator; //type: Native::Router::LispList::Default_::Site::Default__::AllowedLocator
        class EidPrefix; //type: Native::Router::LispList::Default_::Site::Default__::EidPrefix
        class EidRecord; //type: Native::Router::LispList::Default_::Site::Default__::EidRecord

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::AllowedLocator> allowed_locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidPrefix> eid_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidRecord> eid_record;
        
}; // Native::Router::LispList::Default_::Site::Default__


class Native::Router::LispList::Default_::Site::Default__::AllowedLocator : public ydk::Entity
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
        class List; //type: Native::Router::LispList::Default_::Site::Default__::AllowedLocator::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::AllowedLocator::List> list;
        
}; // Native::Router::LispList::Default_::Site::Default__::AllowedLocator


class Native::Router::LispList::Default_::Site::Default__::AllowedLocator::List : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::Default__::AllowedLocator::List


class Native::Router::LispList::Default_::Site::Default__::AuthenticationKey : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::Default__::AuthenticationKey


class Native::Router::LispList::Default_::Site::Default__::EidPrefix : public ydk::Entity
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
        class Prefixes; //type: Native::Router::LispList::Default_::Site::Default__::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::Default__::EidPrefix


class Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId : public ydk::Entity
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
        class Prefixes; //type: Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId


class Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId::Prefixes : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::Default__::EidPrefix::InstanceId::Prefixes


class Native::Router::LispList::Default_::Site::Default__::EidPrefix::Prefixes : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::Default__::EidPrefix::Prefixes


class Native::Router::LispList::Default_::Site::Default__::EidRecord : public ydk::Entity
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
        class Prefixes; //type: Native::Router::LispList::Default_::Site::Default__::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::Default__::EidRecord


class Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId : public ydk::Entity
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
        class Prefixes; //type: Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId


class Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId::Prefixes : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::Default__::EidRecord::InstanceId::Prefixes


class Native::Router::LispList::Default_::Site::Default__::EidRecord::Prefixes : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::Default__::EidRecord::Prefixes


class Native::Router::LispList::Default_::Site::EidPrefix : public ydk::Entity
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
        class Prefixes; //type: Native::Router::LispList::Default_::Site::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::LispList::Default_::Site::EidPrefix::InstanceId

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::EidPrefix


class Native::Router::LispList::Default_::Site::EidPrefix::InstanceId : public ydk::Entity
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
        class Prefixes; //type: Native::Router::LispList::Default_::Site::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::EidPrefix::InstanceId


class Native::Router::LispList::Default_::Site::EidPrefix::InstanceId::Prefixes : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::EidPrefix::InstanceId::Prefixes


class Native::Router::LispList::Default_::Site::EidPrefix::Prefixes : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::EidPrefix::Prefixes


class Native::Router::LispList::Default_::Site::EidRecord : public ydk::Entity
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
        class Prefixes; //type: Native::Router::LispList::Default_::Site::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::LispList::Default_::Site::EidRecord::InstanceId

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::EidRecord


class Native::Router::LispList::Default_::Site::EidRecord::InstanceId : public ydk::Entity
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
        class Prefixes; //type: Native::Router::LispList::Default_::Site::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Default_::Site::EidRecord::InstanceId


class Native::Router::LispList::Default_::Site::EidRecord::InstanceId::Prefixes : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::EidRecord::InstanceId::Prefixes


class Native::Router::LispList::Default_::Site::EidRecord::Prefixes : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Site::EidRecord::Prefixes


class Native::Router::LispList::Default_::Syslog : public ydk::Entity
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

        ydk::YLeaf verbose; //type: empty
        class Session; //type: Native::Router::LispList::Default_::Syslog::Session

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Syslog::Session> session;
        
}; // Native::Router::LispList::Default_::Syslog


class Native::Router::LispList::Default_::Syslog::Session : public ydk::Entity
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

        ydk::YLeaf changes; //type: empty

}; // Native::Router::LispList::Default_::Syslog::Session

class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_156_ */

