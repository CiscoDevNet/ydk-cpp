#ifndef _CISCO_IOS_XE_NATIVE_109_
#define _CISCO_IOS_XE_NATIVE_109_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_108.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Aaa::Authentication::Ppp::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A3


class Native::Aaa::Authentication::Ppp::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A4


class Native::Aaa::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

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

        class Authentication; //type: Native::Aaa::Local::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Local::Authentication> authentication;
        
}; // Native::Aaa::Local


class Native::Aaa::Local::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        class Authorization; //type: Native::Aaa::Local::Authentication::Authorization
        class Attempts; //type: Native::Aaa::Local::Authentication::Attempts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Local::Authentication::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Local::Authentication::Attempts> attempts;
        
}; // Native::Aaa::Local::Authentication


class Native::Aaa::Local::Authentication::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

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

        ydk::YLeaf authen_type; //type: one of enumeration, string
        ydk::YLeaf authorization; //type: one of enumeration, string
        class AuthenType;
        class Authorization_;

}; // Native::Aaa::Local::Authentication::Authorization


class Native::Aaa::Local::Authentication::Attempts : public ydk::Entity
{
    public:
        Attempts();
        ~Attempts();

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

        ydk::YLeaf max_fail; //type: uint16

}; // Native::Aaa::Local::Authentication::Attempts


class Native::Aaa::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

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

        ydk::YLeaf console; //type: empty
        ydk::YLeaf config_commands; //type: empty
        class AuthType; //type: Native::Aaa::Authorization::AuthType
        class Commands; //type: Native::Aaa::Authorization::Commands
        class Configuration; //type: Native::Aaa::Authorization::Configuration
        class CredentialDownload; //type: Native::Aaa::Authorization::CredentialDownload
        class Exec; //type: Native::Aaa::Authorization::Exec
        class Eventmanager; //type: Native::Aaa::Authorization::Eventmanager
        class Network; //type: Native::Aaa::Authorization::Network
        class AuthProxy; //type: Native::Aaa::Authorization::AuthProxy
        class Onep; //type: Native::Aaa::Authorization::Onep

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType> auth_type;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Commands> > commands;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration> configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::CredentialDownload> credential_download;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec> > exec;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Eventmanager> > eventmanager;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy> auth_proxy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep> onep;
        
}; // Native::Aaa::Authorization


class Native::Aaa::Authorization::AuthType : public ydk::Entity
{
    public:
        AuthType();
        ~AuthType();

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

        class Default; //type: Native::Aaa::Authorization::AuthType::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType::Default> default_;
        
}; // Native::Aaa::Authorization::AuthType


class Native::Aaa::Authorization::AuthType::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        ydk::YLeaf group; //type: Group
        class Group;

}; // Native::Aaa::Authorization::AuthType::Default


class Native::Aaa::Authorization::Commands : public ydk::Entity
{
    public:
        Commands();
        ~Commands();

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

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf list_name; //type: one of enumeration, string
        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf none; //type: empty
        class ListName;
        class Group;

}; // Native::Aaa::Authorization::Commands


class Native::Aaa::Authorization::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

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

        class Default; //type: Native::Aaa::Authorization::Configuration::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default> default_;
        
}; // Native::Aaa::Authorization::Configuration


class Native::Aaa::Authorization::Configuration::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        class Group; //type: Native::Aaa::Authorization::Configuration::Default::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default::Group> group;
        
}; // Native::Aaa::Authorization::Configuration::Default


class Native::Aaa::Authorization::Configuration::Default::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        class GroupName; //type: Native::Aaa::Authorization::Configuration::Default::Group::GroupName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default::Group::GroupName> > group_name;
        
}; // Native::Aaa::Authorization::Configuration::Default::Group


class Native::Aaa::Authorization::Configuration::Default::Group::GroupName : public ydk::Entity
{
    public:
        GroupName();
        ~GroupName();

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

        ydk::YLeaf group_name; //type: string

}; // Native::Aaa::Authorization::Configuration::Default::Group::GroupName


class Native::Aaa::Authorization::CredentialDownload : public ydk::Entity
{
    public:
        CredentialDownload();
        ~CredentialDownload();

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

        class Default; //type: Native::Aaa::Authorization::CredentialDownload::Default
        class AuthorizationList; //type: Native::Aaa::Authorization::CredentialDownload::AuthorizationList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::CredentialDownload::Default> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::CredentialDownload::AuthorizationList> > authorization_list;
        
}; // Native::Aaa::Authorization::CredentialDownload


class Native::Aaa::Authorization::CredentialDownload::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        ydk::YLeaf local; //type: empty
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        class Cache;
        class Group;

}; // Native::Aaa::Authorization::CredentialDownload::Default


class Native::Aaa::Authorization::CredentialDownload::AuthorizationList : public ydk::Entity
{
    public:
        AuthorizationList();
        ~AuthorizationList();

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
        ydk::YLeaf local; //type: empty
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        class Cache;
        class Group;

}; // Native::Aaa::Authorization::CredentialDownload::AuthorizationList


class Native::Aaa::Authorization::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

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
        class A1; //type: Native::Aaa::Authorization::Exec::A1
        class A2; //type: Native::Aaa::Authorization::Exec::A2
        class A3; //type: Native::Aaa::Authorization::Exec::A3
        class A4; //type: Native::Aaa::Authorization::Exec::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A4> a4;
        
}; // Native::Aaa::Authorization::Exec


class Native::Aaa::Authorization::Exec::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5_instance; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Exec::A1


class Native::Aaa::Authorization::Exec::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5_instance; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Exec::A2


class Native::Aaa::Authorization::Exec::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf krb5_instance; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Exec::A3


class Native::Aaa::Authorization::Exec::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf krb5_instance; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Exec::A4


class Native::Aaa::Authorization::Eventmanager : public ydk::Entity
{
    public:
        Eventmanager();
        ~Eventmanager();

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
        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf none; //type: empty
        class Group;

}; // Native::Aaa::Authorization::Eventmanager


class Native::Aaa::Authorization::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

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

        ydk::YLeaf id; //type: one of enumeration, string
        class A1; //type: Native::Aaa::Authorization::Network::A1
        class A2; //type: Native::Aaa::Authorization::Network::A2
        class A3; //type: Native::Aaa::Authorization::Network::A3
        class A4; //type: Native::Aaa::Authorization::Network::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A4> a4;
                class Id;

}; // Native::Aaa::Authorization::Network


class Native::Aaa::Authorization::Network::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Network::A1


class Native::Aaa::Authorization::Network::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Network::A2


class Native::Aaa::Authorization::Network::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Network::A3


class Native::Aaa::Authorization::Network::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf cache; //type: one of enumeration, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf local; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authorization::Network::A4


class Native::Aaa::Authorization::AuthProxy : public ydk::Entity
{
    public:
        AuthProxy();
        ~AuthProxy();

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

        class Default; //type: Native::Aaa::Authorization::AuthProxy::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy::Default> default_;
        
}; // Native::Aaa::Authorization::AuthProxy


class Native::Aaa::Authorization::AuthProxy::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        ydk::YLeaf local; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Authorization::AuthProxy::Default


class Native::Aaa::Authorization::Onep : public ydk::Entity
{
    public:
        Onep();
        ~Onep();

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

        class Default; //type: Native::Aaa::Authorization::Onep::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default> default_;
        
}; // Native::Aaa::Authorization::Onep


class Native::Aaa::Authorization::Onep::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        class Group; //type: Native::Aaa::Authorization::Onep::Default::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default::Group> group;
        
}; // Native::Aaa::Authorization::Onep::Default


class Native::Aaa::Authorization::Onep::Default::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        class GroupWord; //type: Native::Aaa::Authorization::Onep::Default::Group::GroupWord

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default::Group::GroupWord> > group_word;
        
}; // Native::Aaa::Authorization::Onep::Default::Group


class Native::Aaa::Authorization::Onep::Default::Group::GroupWord : public ydk::Entity
{
    public:
        GroupWord();
        ~GroupWord();

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

        ydk::YLeaf group_word; //type: string

}; // Native::Aaa::Authorization::Onep::Default::Group::GroupWord


class Native::Aaa::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        class Commands; //type: Native::Aaa::Accounting::Commands
        class Connection; //type: Native::Aaa::Accounting::Connection
        class DelayStart; //type: Native::Aaa::Accounting::DelayStart
        class Dot1X; //type: Native::Aaa::Accounting::Dot1X
        class Identity; //type: Native::Aaa::Accounting::Identity
        class Exec; //type: Native::Aaa::Accounting::Exec
        class ExecSubmode; //type: Native::Aaa::Accounting::ExecSubmode
        class Network; //type: Native::Aaa::Accounting::Network
        class Send; //type: Native::Aaa::Accounting::Send
        class System; //type: Native::Aaa::Accounting::System
        class Update; //type: Native::Aaa::Accounting::Update
        class AuthProxy; //type: Native::Aaa::Accounting::AuthProxy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Commands> > commands;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection> > connection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::DelayStart> delay_start;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1X> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity> identity;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec> > exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode> exec_submode;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send> send;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::System> system;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Update> update;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy> auth_proxy;
        
}; // Native::Aaa::Accounting


class Native::Aaa::Accounting::Commands : public ydk::Entity
{
    public:
        Commands();
        ~Commands();

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

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf list_name; //type: one of enumeration, string
        ydk::YLeaf action_type; //type: ActionType
        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class ListName;
        class ActionType;
        class Group;

}; // Native::Aaa::Accounting::Commands


class Native::Aaa::Accounting::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

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
        ydk::YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Connection::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::Connection::StopOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection::StartStop> start_stop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::Connection


class Native::Aaa::Accounting::Connection::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Connection::StartStop


class Native::Aaa::Accounting::Connection::StopOnly : public ydk::Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Connection::StopOnly


class Native::Aaa::Accounting::DelayStart : public ydk::Entity
{
    public:
        DelayStart();
        ~DelayStart();

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

        ydk::YLeaf extended_delay; //type: uint8
        ydk::YLeaf all; //type: empty

}; // Native::Aaa::Accounting::DelayStart


class Native::Aaa::Accounting::Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

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

        class Default; //type: Native::Aaa::Accounting::Dot1X::Default
        class AccountingList; //type: Native::Aaa::Accounting::Dot1X::AccountingList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1X::Default> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1X::AccountingList> > accounting_list;
        
}; // Native::Aaa::Accounting::Dot1X


class Native::Aaa::Accounting::Dot1X::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        class StartStop; //type: Native::Aaa::Accounting::Dot1X::Default::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1X::Default::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::Dot1X::Default


class Native::Aaa::Accounting::Dot1X::Default::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

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

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Dot1X::Default::StartStop


class Native::Aaa::Accounting::Dot1X::AccountingList : public ydk::Entity
{
    public:
        AccountingList();
        ~AccountingList();

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
        class StartStop; //type: Native::Aaa::Accounting::Dot1X::AccountingList::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1X::AccountingList::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::Dot1X::AccountingList


class Native::Aaa::Accounting::Dot1X::AccountingList::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Dot1X::AccountingList::StartStop


class Native::Aaa::Accounting::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

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

        class Default; //type: Native::Aaa::Accounting::Identity::Default
        class AccountingList; //type: Native::Aaa::Accounting::Identity::AccountingList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity::Default> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity::AccountingList> > accounting_list;
        
}; // Native::Aaa::Accounting::Identity


class Native::Aaa::Accounting::Identity::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        class StartStop; //type: Native::Aaa::Accounting::Identity::Default::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity::Default::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::Identity::Default


class Native::Aaa::Accounting::Identity::Default::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

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

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Identity::Default::StartStop


class Native::Aaa::Accounting::Identity::AccountingList : public ydk::Entity
{
    public:
        AccountingList();
        ~AccountingList();

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
        class StartStop; //type: Native::Aaa::Accounting::Identity::AccountingList::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity::AccountingList::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::Identity::AccountingList


class Native::Aaa::Accounting::Identity::AccountingList::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Identity::AccountingList::StartStop


class Native::Aaa::Accounting::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

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
        ydk::YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Exec::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::Exec::StopOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec::StartStop> start_stop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::Exec


class Native::Aaa::Accounting::Exec::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Exec::StartStop


class Native::Aaa::Accounting::Exec::StopOnly : public ydk::Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Exec::StopOnly


class Native::Aaa::Accounting::ExecSubmode : public ydk::Entity
{
    public:
        ExecSubmode();
        ~ExecSubmode();

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

        class Exec; //type: Native::Aaa::Accounting::ExecSubmode::Exec

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec> > exec;
        
}; // Native::Aaa::Accounting::ExecSubmode


class Native::Aaa::Accounting::ExecSubmode::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

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
        class ActionType; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType> action_type;
        
}; // Native::Aaa::Accounting::ExecSubmode::Exec


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop> start_stop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly : public ydk::Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly


class Native::Aaa::Accounting::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

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

        ydk::YLeaf id; //type: one of enumeration, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf broadcast; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Network::StartStop
        class A1; //type: Native::Aaa::Accounting::Network::A1
        class A2; //type: Native::Aaa::Accounting::Network::A2
        class A3; //type: Native::Aaa::Accounting::Network::A3
        class A4; //type: Native::Aaa::Accounting::Network::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::StartStop> start_stop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A4> a4;
                class Id;
        class Mode;

}; // Native::Aaa::Accounting::Network


class Native::Aaa::Accounting::Network::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Network::StartStop


class Native::Aaa::Accounting::Network::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Network::A1


class Native::Aaa::Accounting::Network::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Network::A2


class Native::Aaa::Accounting::Network::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Network::A3


class Native::Aaa::Accounting::Network::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::Network::A4


class Native::Aaa::Accounting::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

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

        class Counters; //type: Native::Aaa::Accounting::Send::Counters
        class StopRecord; //type: Native::Aaa::Accounting::Send::StopRecord

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::Counters> counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord> stop_record;
        
}; // Native::Aaa::Accounting::Send


class Native::Aaa::Accounting::Send::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

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

        ydk::YLeaf ipv6; //type: empty

}; // Native::Aaa::Accounting::Send::Counters


class Native::Aaa::Accounting::Send::StopRecord : public ydk::Entity
{
    public:
        StopRecord();
        ~StopRecord();

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

        ydk::YLeaf always; //type: empty
        class Authentication; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication> authentication;
        
}; // Native::Aaa::Accounting::Send::StopRecord


class Native::Aaa::Accounting::Send::StopRecord::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        class Failure; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure
        class Success; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Success

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure> failure; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Success> success;
        
}; // Native::Aaa::Accounting::Send::StopRecord::Authentication


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

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

        ydk::YLeaf vrf; //type: string

}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Success : public ydk::Entity
{
    public:
        Success();
        ~Success();

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

        class RemoteServer; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer> remote_server; // presence node
        
}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Success


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer : public ydk::Entity
{
    public:
        RemoteServer();
        ~RemoteServer();

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

        ydk::YLeaf vrf; //type: string

}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer


class Native::Aaa::Accounting::System : public ydk::Entity
{
    public:
        System();
        ~System();

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

        ydk::YLeaf guarantee_first; //type: boolean
        class Default; //type: Native::Aaa::Accounting::System::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::System::Default> default_; // presence node
        
}; // Native::Aaa::Accounting::System


class Native::Aaa::Accounting::System::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        ydk::YLeaf none; //type: empty
        ydk::YLeaf vrf; //type: string
        class StartStop; //type: Native::Aaa::Accounting::System::Default::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::System::Default::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::System::Default


class Native::Aaa::Accounting::System::Default::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

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

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of enumeration, string
        class Group;

}; // Native::Aaa::Accounting::System::Default::StartStop


class Native::Aaa::Accounting::Update : public ydk::Entity
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

        ydk::YLeaf periodic; //type: uint32

}; // Native::Aaa::Accounting::Update


class Native::Aaa::Accounting::AuthProxy : public ydk::Entity
{
    public:
        AuthProxy();
        ~AuthProxy();

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

        class Default; //type: Native::Aaa::Accounting::AuthProxy::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy::Default> default_;
        
}; // Native::Aaa::Accounting::AuthProxy


class Native::Aaa::Accounting::AuthProxy::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        class StartStop; //type: Native::Aaa::Accounting::AuthProxy::Default::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy::Default::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::AuthProxy::Default


class Native::Aaa::Accounting::AuthProxy::Default::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

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

        ydk::YLeaf group; //type: string

}; // Native::Aaa::Accounting::AuthProxy::Default::StartStop


class Native::Aaa::Server : public ydk::Entity
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

        class Radius; //type: Native::Aaa::Server::Radius

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius> radius;
        
}; // Native::Aaa::Server


class Native::Aaa::Server::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

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

        class DynamicAuthor; //type: Native::Aaa::Server::Radius::DynamicAuthor
        class PolicyDevice; //type: Native::Aaa::Server::Radius::PolicyDevice
        class Proxy; //type: Native::Aaa::Server::Radius::Proxy
        class Sesm; //type: Native::Aaa::Server::Radius::Sesm

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor> dynamic_author; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice> policy_device; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy> proxy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Sesm> sesm; // presence node
        
}; // Native::Aaa::Server::Radius


class Native::Aaa::Server::Radius::DynamicAuthor : public ydk::Entity
{
    public:
        DynamicAuthor();
        ~DynamicAuthor();

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

        ydk::YLeaf port; //type: uint16
        ydk::YLeaf auth_type; //type: AuthType
        class Client; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client
        class ServerKey; //type: Native::Aaa::Server::Radius::DynamicAuthor::ServerKey
        class Domain; //type: Native::Aaa::Server::Radius::DynamicAuthor::Domain
        class Ignore; //type: Native::Aaa::Server::Radius::DynamicAuthor::Ignore

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client> > client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::ServerKey> server_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Ignore> ignore;
                class AuthType;

}; // Native::Aaa::Server::Radius::DynamicAuthor


class Native::Aaa::Server::Radius::DynamicAuthor::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf dtls; //type: empty
        class Vrf; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf
        class ServerKey; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf> > vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey> server_key;
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Client


class Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf dtls; //type: empty
        class ServerKey; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey> server_key;
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf


class Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey : public ydk::Entity
{
    public:
        ServerKey();
        ~ServerKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: Key
        ydk::YLeaf string; //type: string
        class Key;

}; // Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey


class Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey : public ydk::Entity
{
    public:
        ServerKey();
        ~ServerKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: Key
        ydk::YLeaf string; //type: string
        class Key;

}; // Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey


class Native::Aaa::Server::Radius::DynamicAuthor::ServerKey : public ydk::Entity
{
    public:
        ServerKey();
        ~ServerKey();

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

        ydk::YLeaf key; //type: Key
        ydk::YLeaf string; //type: string
        class Key;

}; // Native::Aaa::Server::Radius::DynamicAuthor::ServerKey


class Native::Aaa::Server::Radius::DynamicAuthor::Domain : public ydk::Entity
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

        ydk::YLeaf delimiter; //type: string
        class Stripping; //type: Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping> stripping; // presence node
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain


class Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping : public ydk::Entity
{
    public:
        Stripping();
        ~Stripping();

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

        ydk::YLeaf right_to_left; //type: empty

}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping


class Native::Aaa::Server::Radius::DynamicAuthor::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

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

        ydk::YLeaf retransmission; //type: empty
        ydk::YLeaf server_key; //type: empty
        ydk::YLeaf session_key; //type: empty

}; // Native::Aaa::Server::Radius::DynamicAuthor::Ignore


class Native::Aaa::Server::Radius::PolicyDevice : public ydk::Entity
{
    public:
        PolicyDevice();
        ~PolicyDevice();

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

        class Accounting; //type: Native::Aaa::Server::Radius::PolicyDevice::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::PolicyDevice::Authentication
        class Client; //type: Native::Aaa::Server::Radius::PolicyDevice::Client
        class Key; //type: Native::Aaa::Server::Radius::PolicyDevice::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Authentication> authentication;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Client> > client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator> message_authenticator;
        
}; // Native::Aaa::Server::Radius::PolicyDevice


class Native::Aaa::Server::Radius::PolicyDevice::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        ydk::YLeaf port; //type: uint16

}; // Native::Aaa::Server::Radius::PolicyDevice::Accounting


class Native::Aaa::Server::Radius::PolicyDevice::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        ydk::YLeaf port; //type: uint16

}; // Native::Aaa::Server::Radius::PolicyDevice::Authentication


class Native::Aaa::Server::Radius::PolicyDevice::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        class Vrf; //type: Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf
        class Key; //type: Native::Aaa::Server::Radius::PolicyDevice::Client::Key

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf> > vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Client::Key> key;
        
}; // Native::Aaa::Server::Radius::PolicyDevice::Client


class Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf port; //type: uint16
        class Key; //type: Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key> key;
        
}; // Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf


class Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key : public ydk::Entity
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

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key


class Native::Aaa::Server::Radius::PolicyDevice::Client::Key : public ydk::Entity
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

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::PolicyDevice::Client::Key


class Native::Aaa::Server::Radius::PolicyDevice::Key : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::PolicyDevice::Key


class Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator : public ydk::Entity
{
    public:
        MessageAuthenticator();
        ~MessageAuthenticator();

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

}; // Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

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

        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::Timer
        class ClientIp; //type: Native::Aaa::Server::Radius::Proxy::ClientIp
        class ClientIpMask; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask
        class ClientIpVrf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf
        class ClientIpMaskVrf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf
        class Send; //type: Native::Aaa::Server::Radius::Proxy::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Timer> timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp> client_ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask> client_ip_mask;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf> client_ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf> client_ip_mask_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Send> send;
        
}; // Native::Aaa::Server::Radius::Proxy


class Native::Aaa::Server::Radius::Proxy::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::Accounting


class Native::Aaa::Server::Radius::Proxy::Accounting::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

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

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::Authentication


class Native::Aaa::Server::Radius::Proxy::Authentication::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

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

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::CallingStationId : public ydk::Entity
{
    public:
        CallingStationId();
        ~CallingStationId();

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

        class Format; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

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

        ydk::YLeaf msisdn; //type: empty
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

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

        ydk::YLeaf none; //type: empty
        class Default; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
{
    public:
        Ietf();
        ~Ietf();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
{
    public:
        OneByte();
        ~OneByte();

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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
{
    public:
        ThreeByte();
        ~ThreeByte();

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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
{
    public:
        TwoByte();
        ~TwoByte();

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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
{
    public:
        Unformatted();
        ~Unformatted();

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
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::EapUser : public ydk::Entity
{
    public:
        EapUser();
        ~EapUser();

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

        ydk::YLeaf ignore_open_session; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::EapUser


class Native::Aaa::Server::Radius::Proxy::Filter : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Access; //type: Native::Aaa::Server::Radius::Proxy::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::Filter


class Native::Aaa::Server::Radius::Proxy::Filter::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::Filter::Access


class Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

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

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

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

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

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

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::Filter::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

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

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

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

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

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

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::Filter::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

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

        ydk::YLeaf allow; //type: string
        ydk::YLeaf block; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::Key : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::Proxy::Key


class Native::Aaa::Server::Radius::Proxy::MessageAuthenticator : public ydk::Entity
{
    public:
        MessageAuthenticator();
        ~MessageAuthenticator();

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

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

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

        ydk::YLeaf accounting; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

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

        ydk::YLeaf pass_through; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::Mode


class Native::Aaa::Server::Radius::Proxy::PwlanSession : public ydk::Entity
{
    public:
        PwlanSession();
        ~PwlanSession();

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

        ydk::YLeaf reconnect; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::PwlanSession


class Native::Aaa::Server::Radius::Proxy::ReAuthentication : public ydk::Entity
{
    public:
        ReAuthentication();
        ~ReAuthentication();

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

        ydk::YLeaf do_not_apply; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::SessionIdentifier : public ydk::Entity
{
    public:
        SessionIdentifier();
        ~SessionIdentifier();

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

        ydk::YLeaf attribute; //type: uint8
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa : public ydk::Entity
{
    public:
        Vsa();
        ~Vsa();

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

        ydk::YLeaf vendor; //type: uint16
        ydk::YLeaf type; //type: uint8

}; // Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

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

        ydk::YLeaf ip_address; //type: uint16
        ydk::YLeaf reconnect; //type: uint16
        ydk::YLeaf request; //type: uint16
        ydk::YLeaf roaming; //type: uint16
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::Timer


class Native::Aaa::Server::Radius::Proxy::Timer::Disconnect : public ydk::Entity
{
    public:
        Disconnect();
        ~Disconnect();

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

        ydk::YLeaf acct_stop; //type: uint16
        ydk::YLeaf reauth_fail; //type: uint16

}; // Native::Aaa::Server::Radius::Proxy::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::ClientIp : public ydk::Entity
{
    public:
        ClientIp();
        ~ClientIp();

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

        class Client; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client> > client;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf ip; //type: string
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer> timer;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication

class Native::Aaa::Authentication::Ppp::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Local::Authentication::Authorization::AuthenType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Local::Authentication::Authorization::Authorization_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Authorization::AuthType::Default::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;

};

class Native::Aaa::Authorization::Commands::ListName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Authorization::Commands::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::CredentialDownload::Default::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::CredentialDownload::Default::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Eventmanager::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Authorization::Network::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Authorization::Network::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::AuthProxy::Default::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;

};

class Native::Aaa::Accounting::Commands::ListName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Accounting::Commands::ActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf start_stop;
        static const ydk::Enum::YLeaf stop_only;

};

class Native::Aaa::Accounting::Commands::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Connection::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Connection::StopOnly::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Dot1X::Default::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Dot1X::AccountingList::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Identity::Default::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Identity::AccountingList::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Exec::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Exec::StopOnly::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Network::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Accounting::Network::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start_stop;
        static const ydk::Enum::YLeaf stop_only;

};

class Native::Aaa::Accounting::Network::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;

};

class Native::Aaa::Accounting::Network::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::System::Default::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Server::Radius::DynamicAuthor::AuthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf session_key;

};

class Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::PolicyDevice::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::PolicyDevice::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_109_ */

