#ifndef _CISCO_IOS_XE_NATIVE_193_
#define _CISCO_IOS_XE_NATIVE_193_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_192.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::UtdSt::Utd::WebFilter::Block::LocalServer : public ydk::Entity
{
    public:
        LocalServer();
        ~LocalServer();

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

        class Profile; //type: Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile> > profile;
        
}; // Native::UtdSt::Utd::WebFilter::Block::LocalServer


class Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf http_ports; //type: string
        class BlockPageInterface; //type: Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface
        class Content; //type: Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface> block_page_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content> content;
        
}; // Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile


class Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface : public ydk::Entity
{
    public:
        BlockPageInterface();
        ~BlockPageInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface


class Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content : public ydk::Entity
{
    public:
        Content();
        ~Content();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf text; //type: string
        ydk::YLeaf file; //type: string

}; // Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content


class Native::UtdSt::Utd::WebFilter::Block::Page : public ydk::Entity
{
    public:
        Page();
        ~Page();

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

        class Profile; //type: Native::UtdSt::Utd::WebFilter::Block::Page::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::Page::Profile> > profile;
        
}; // Native::UtdSt::Utd::WebFilter::Block::Page


class Native::UtdSt::Utd::WebFilter::Block::Page::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf redirect_url; //type: string
        ydk::YLeaf text; //type: string

}; // Native::UtdSt::Utd::WebFilter::Block::Page::Profile


class Native::UtdSt::Utd::WebFilter::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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

        class Profile; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile> > profile;
        
}; // Native::UtdSt::Utd::WebFilter::Domain


class Native::UtdSt::Utd::WebFilter::Domain::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf alert; //type: Alert
        class Blacklist; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist
        class RedirectServer; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer
        class Whitelist; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist> blacklist; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer> redirect_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist> whitelist; // presence node
                class Alert;

}; // Native::UtdSt::Utd::WebFilter::Domain::Profile


class Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist : public ydk::Entity
{
    public:
        Blacklist();
        ~Blacklist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap> parameter_map;
        
}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist


class Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap


class Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer : public ydk::Entity
{
    public:
        RedirectServer();
        ~RedirectServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external; //type: string
        ydk::YLeaf local_block_server; //type: string

}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer


class Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap> parameter_map;
        
}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist


class Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap


class Native::UtdSt::Utd::WebFilter::Sourcedb : public ydk::Entity
{
    public:
        Sourcedb();
        ~Sourcedb();

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

        ydk::YLeaf id; //type: string
        class Logging; //type: Native::UtdSt::Utd::WebFilter::Sourcedb::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Sourcedb::Logging> logging;
        
}; // Native::UtdSt::Utd::WebFilter::Sourcedb


class Native::UtdSt::Utd::WebFilter::Sourcedb::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdSt::Utd::WebFilter::Sourcedb::Logging


class Native::UtdSt::Utd::WebFilter::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

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

        class Profile; //type: Native::UtdSt::Utd::WebFilter::Url::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile> > profile;
        
}; // Native::UtdSt::Utd::WebFilter::Url


class Native::UtdSt::Utd::WebFilter::Url::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf id; //type: string
        ydk::YLeafList alert; //type: list of  Alert
        class Blacklist; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist
        class Categories; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories
        class Block; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Block
        class Log; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Log
        class Reputation; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation
        class Sourcedb; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb
        class Whitelist; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist> blacklist; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories> categories;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Log> log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation> reputation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb> sourcedb;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist> whitelist; // presence node
                class Alert;

}; // Native::UtdSt::Utd::WebFilter::Url::Profile


class Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist : public ydk::Entity
{
    public:
        Blacklist();
        ~Blacklist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap> parameter_map;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist


class Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories : public ydk::Entity
{
    public:
        Categories();
        ~Categories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Allow; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow
        class Block; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow> allow; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block> block; // presence node
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Category; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category> > category;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: UtdCategoryType

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Category; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category> > category;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: UtdCategoryType

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category


class Native::UtdSt::Utd::WebFilter::Url::Profile::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_server; //type: string
        ydk::YLeaf page_profile; //type: string

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Block


class Native::UtdSt::Utd::WebFilter::Url::Profile::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Log


class Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation : public ydk::Entity
{
    public:
        Reputation();
        ~Reputation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_threshold; //type: BlockThreshold
        class BlockThreshold;

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation


class Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb : public ydk::Entity
{
    public:
        Sourcedb();
        ~Sourcedb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fail; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail> fail;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb


class Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail : public ydk::Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf close; //type: empty

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail


class Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap> parameter_map;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist


class Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap


class Native::UtdSt::Utd::Engine : public ydk::Entity
{
    public:
        Engine();
        ~Engine();

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

        class Advanced; //type: Native::UtdSt::Utd::Engine::Advanced
        class Standard; //type: Native::UtdSt::Utd::Engine::Standard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Advanced> advanced;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard> standard; // presence node
        
}; // Native::UtdSt::Utd::Engine


class Native::UtdSt::Utd::Engine::Advanced : public ydk::Entity
{
    public:
        Advanced();
        ~Advanced();

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

        class Threat; //type: Native::UtdSt::Utd::Engine::Advanced::Threat

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Advanced::Threat> threat; // presence node
        
}; // Native::UtdSt::Utd::Engine::Advanced


class Native::UtdSt::Utd::Engine::Advanced::Threat : public ydk::Entity
{
    public:
        Threat();
        ~Threat();

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

        ydk::YLeaf detection; //type: empty

}; // Native::UtdSt::Utd::Engine::Advanced::Threat


class Native::UtdSt::Utd::Engine::Standard : public ydk::Entity
{
    public:
        Standard();
        ~Standard();

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

        class Logging; //type: Native::UtdSt::Utd::Engine::Standard::Logging
        class ThreatInspection; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection
        class WebFilter; //type: Native::UtdSt::Utd::Engine::Standard::WebFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection> threat_inspection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::WebFilter> web_filter; // presence node
        
}; // Native::UtdSt::Utd::Engine::Standard


class Native::UtdSt::Utd::Engine::Standard::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf syslog; //type: empty
        class Host; //type: Native::UtdSt::Utd::Engine::Standard::Logging::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::Logging::Host> > host;
        
}; // Native::UtdSt::Utd::Engine::Standard::Logging


class Native::UtdSt::Utd::Engine::Standard::Logging::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        ydk::YLeaf name; //type: string

}; // Native::UtdSt::Utd::Engine::Standard::Logging::Host


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

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

        ydk::YLeaf threat; //type: Threat
        ydk::YLeaf policy; //type: Policy
        ydk::YLeaf whitelist; //type: empty
        class Signature; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature
        class Logging; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature> signature;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging> logging;
                class Threat;
        class Policy;

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

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

        class Update; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update> update;
        
}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

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

        class OccurAt; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt
        class Server; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt> occur_at;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server> server;
        
}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt : public ydk::Entity
{
    public:
        OccurAt();
        ~OccurAt();

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

        ydk::YLeaf daily; //type: empty
        ydk::YLeaf monthly; //type: string
        ydk::YLeaf weekly; //type: string
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        class Cisco; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco
        class Url; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco> cisco;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url> url;
        
}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco : public ydk::Entity
{
    public:
        Cisco();
        ~Cisco();

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

        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

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

        ydk::YLeaf name; //type: string
        class All; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All> all;
        
}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All : public ydk::Entity
{
    public:
        All();
        ~All();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging


class Native::UtdSt::Utd::Engine::Standard::WebFilter : public ydk::Entity
{
    public:
        WebFilter();
        ~WebFilter();

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

        ydk::YLeaf domain_profile; //type: string
        ydk::YLeaf sourcedb; //type: string
        ydk::YLeaf url_profile; //type: string

}; // Native::UtdSt::Utd::Engine::Standard::WebFilter


class Native::UtdSt::Utd::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

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

        class Whitelist; //type: Native::UtdSt::Utd::ThreatInspection::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::ThreatInspection::Whitelist> whitelist; // presence node
        
}; // Native::UtdSt::Utd::ThreatInspection


class Native::UtdSt::Utd::ThreatInspection::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

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

        class Signature; //type: Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature> > signature;
        
}; // Native::UtdSt::Utd::ThreatInspection::Whitelist


class Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf comment; //type: string

}; // Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature


class Native::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

        class Service; //type: Native::Voice::Service

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Voice::Service> > service;
        
}; // Native::Voice


class Native::Voice::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

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

        ydk::YLeaf type; //type: Type
        class Fax; //type: Native::Voice::Service::Fax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Voice::Service::Fax> fax;
                class Type;

}; // Native::Voice::Service


class Native::Voice::Service::Fax : public ydk::Entity
{
    public:
        Fax();
        ~Fax();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf fallback; //type: Fallback
        ydk::YLeaf codec; //type: Codec
        ydk::YLeaf ls_redundancy; //type: uint8
        ydk::YLeaf hs_redundancy; //type: uint8
        ydk::YLeaf version; //type: Version
        class Protocol;
        class Fallback;
        class Codec;
        class Version;

}; // Native::Voice::Service::Fax


class Native::VoiceCard : public ydk::Entity
{
    public:
        VoiceCard();
        ~VoiceCard();

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

        ydk::YLeaf slot; //type: uint8

}; // Native::VoiceCard


class Native::Vpdn : public ydk::Entity
{
    public:
        Vpdn();
        ~Vpdn();

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

        ydk::YLeaf authen_before_forward; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeafList search_order; //type: list of  SearchOrder
        class SearchOrder;

}; // Native::Vpdn

class Native::UtdSt::Utd::WebFilter::Domain::Profile::Alert : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf blacklist;
        static const ydk::Enum::YLeaf whitelist;

};

class Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf debug;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf trace;
        static const ydk::Enum::YLeaf warning;

};

class Native::UtdSt::Utd::WebFilter::Url::Profile::Alert : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf blacklist;
        static const ydk::Enum::YLeaf categories_reputation;
        static const ydk::Enum::YLeaf whitelist;

};

class Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detailed;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;

};

class Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high_risk;
        static const ydk::Enum::YLeaf low_risk;
        static const ydk::Enum::YLeaf moderate_risk;
        static const ydk::Enum::YLeaf suspicious;
        static const ydk::Enum::YLeaf trustworthy;

};

class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Threat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detection;
        static const ydk::Enum::YLeaf protection;

};

class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf balanced;
        static const ydk::Enum::YLeaf connectivity;
        static const ydk::Enum::YLeaf security;

};

class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emerg;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf crit;
        static const ydk::Enum::YLeaf err;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf debug;

};

class Native::Voice::Service::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pots;
        static const ydk::Enum::YLeaf saf;
        static const ydk::Enum::YLeaf voatm;
        static const ydk::Enum::YLeaf vofr;
        static const ydk::Enum::YLeaf voip;

};

class Native::Voice::Service::Fax::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pass_through;
        static const ydk::Enum::YLeaf t38;

};

class Native::Voice::Service::Fax::Fallback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pass_through;

};

class Native::Voice::Service::Fax::Codec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g711alaw;
        static const ydk::Enum::YLeaf g711ulaw;

};

class Native::Voice::Service::Fax::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_3;

};

class Native::Vpdn::SearchOrder : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dnis;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf multihop_hostname;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_193_ */

