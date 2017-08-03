#ifndef _CISCO_IOS_XE_NATIVE_76_
#define _CISCO_IOS_XE_NATIVE_76_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_75.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf


class Native::Aaa::Group::Server::Tacacs : public ydk::Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Aaa::Group::Server::Tacacs


class Native::Aaa::Group::Server::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf deadtime; //type: uint16
        class Server_; //type: Native::Aaa::Group::Server::Radius::Server_
        class Ip; //type: Native::Aaa::Group::Server::Radius::Ip
        class LoadBalance; //type: Native::Aaa::Group::Server::Radius::LoadBalance

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance> load_balance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_> server;
        
}; // Native::Aaa::Group::Server::Radius


class Native::Aaa::Group::Server::Radius::Server_ : public ydk::Entity
{
    public:
        Server_();
        ~Server_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Aaa::Group::Server::Radius::Server_::Name
        class Direct; //type: Native::Aaa::Group::Server::Radius::Server_::Direct

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_::Direct> > direct;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_::Name> > name;
        
}; // Native::Aaa::Group::Server::Radius::Server_


class Native::Aaa::Group::Server::Radius::Server_::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Aaa::Group::Server::Radius::Server_::Name


class Native::Aaa::Group::Server::Radius::Server_::Direct : public ydk::Entity
{
    public:
        Direct();
        ~Direct();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of union, string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16

}; // Native::Aaa::Group::Server::Radius::Server_::Direct


class Native::Aaa::Group::Server::Radius::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Radius_; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_
        class Vrf; //type: Native::Aaa::Group::Server::Radius::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_> radius;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Radius::Ip


class Native::Aaa::Group::Server::Radius::Ip::Radius_ : public ydk::Entity
{
    public:
        Radius_();
        ~Radius_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_interface; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Radius_


class Native::Aaa::Group::Server::Radius::Ip::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Vrf


class Native::Aaa::Group::Server::Radius::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Method; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method> method;
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance


class Native::Aaa::Group::Server::Radius::LoadBalance::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LeastOutstanding; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding> least_outstanding;
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method


class Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding : public ydk::Entity
{
    public:
        LeastOutstanding();
        ~LeastOutstanding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf batch_size; //type: uint32
        ydk::YLeaf ignore_preferred_server; //type: empty

}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding


class Native::Aaa::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attempts; //type: Native::Aaa::Authentication::Attempts
        class Dot1X; //type: Native::Aaa::Authentication::Dot1X
        class Enable; //type: Native::Aaa::Authentication::Enable
        class Eou; //type: Native::Aaa::Authentication::Eou
        class Login; //type: Native::Aaa::Authentication::Login
        class Onep; //type: Native::Aaa::Authentication::Onep
        class Ppp; //type: Native::Aaa::Authentication::Ppp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Attempts> attempts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou> eou;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login> > login;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep> onep;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp> > ppp;
        
}; // Native::Aaa::Authentication


class Native::Aaa::Authentication::Attempts : public ydk::Entity
{
    public:
        Attempts();
        ~Attempts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf login; //type: uint8

}; // Native::Aaa::Authentication::Attempts


class Native::Aaa::Authentication::Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1XList; //type: Native::Aaa::Authentication::Dot1X::Dot1XList
        class Default_; //type: Native::Aaa::Authentication::Dot1X::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X::Dot1XList> > dot1x_list;
        
}; // Native::Aaa::Authentication::Dot1X


class Native::Aaa::Authentication::Dot1X::Dot1XList : public ydk::Entity
{
    public:
        Dot1XList();
        ~Dot1XList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Authentication::Dot1X::Dot1XList


class Native::Aaa::Authentication::Dot1X::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Authentication::Dot1X::Default_


class Native::Aaa::Authentication::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Aaa::Authentication::Enable::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable::Default_> default_;
        
}; // Native::Aaa::Authentication::Enable


class Native::Aaa::Authentication::Enable::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf none; //type: empty
        class Group;

}; // Native::Aaa::Authentication::Enable::Default_


class Native::Aaa::Authentication::Eou : public ydk::Entity
{
    public:
        Eou();
        ~Eou();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Aaa::Authentication::Eou::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default_> default_;
        
}; // Native::Aaa::Authentication::Eou


class Native::Aaa::Authentication::Eou::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Native::Aaa::Authentication::Eou::Default_::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default_::Group> group;
        
}; // Native::Aaa::Authentication::Eou::Default_


class Native::Aaa::Authentication::Eou::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf radius; //type: empty

}; // Native::Aaa::Authentication::Eou::Default_::Group


class Native::Aaa::Authentication::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of string, enumeration
        class A1; //type: Native::Aaa::Authentication::Login::A1
        class A2; //type: Native::Aaa::Authentication::Login::A2
        class A3; //type: Native::Aaa::Authentication::Login::A3
        class A4; //type: Native::Aaa::Authentication::Login::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A4> a4;
                class Name;

}; // Native::Aaa::Authentication::Login


class Native::Aaa::Authentication::Login::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A1


class Native::Aaa::Authentication::Login::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A2


class Native::Aaa::Authentication::Login::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A3


class Native::Aaa::Authentication::Login::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A4


class Native::Aaa::Authentication::Onep : public ydk::Entity
{
    public:
        Onep();
        ~Onep();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Aaa::Authentication::Onep::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default_> default_;
        
}; // Native::Aaa::Authentication::Onep


class Native::Aaa::Authentication::Onep::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Local; //type: Native::Aaa::Authentication::Onep::Default_::Local

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default_::Local> local; // presence node
        
}; // Native::Aaa::Authentication::Onep::Default_


class Native::Aaa::Authentication::Onep::Default_::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Aaa::Authentication::Onep::Default_::Local


class Native::Aaa::Authentication::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class A1; //type: Native::Aaa::Authentication::Ppp::A1
        class A2; //type: Native::Aaa::Authentication::Ppp::A2
        class A3; //type: Native::Aaa::Authentication::Ppp::A3
        class A4; //type: Native::Aaa::Authentication::Ppp::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A4> a4;
        
}; // Native::Aaa::Authentication::Ppp


class Native::Aaa::Authentication::Ppp::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_needed; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A1


class Native::Aaa::Authentication::Ppp::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A2


class Native::Aaa::Authentication::Ppp::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A4


class Native::Aaa::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf console; //type: empty
        ydk::YLeaf config_commands; //type: empty
        class AuthType; //type: Native::Aaa::Authorization::AuthType
        class Commands; //type: Native::Aaa::Authorization::Commands
        class Configuration; //type: Native::Aaa::Authorization::Configuration
        class Exec; //type: Native::Aaa::Authorization::Exec
        class Eventmanager; //type: Native::Aaa::Authorization::Eventmanager
        class Network; //type: Native::Aaa::Authorization::Network
        class AuthProxy; //type: Native::Aaa::Authorization::AuthProxy
        class Onep; //type: Native::Aaa::Authorization::Onep

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy> auth_proxy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType> auth_type;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Commands> > commands;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration> configuration;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Eventmanager> > eventmanager;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec> > exec;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep> onep;
        
}; // Native::Aaa::Authorization


class Native::Aaa::Authorization::AuthType : public ydk::Entity
{
    public:
        AuthType();
        ~AuthType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Aaa::Authorization::AuthType::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType::Default_> default_;
        
}; // Native::Aaa::Authorization::AuthType


class Native::Aaa::Authorization::AuthType::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: Group
        class Group;

}; // Native::Aaa::Authorization::AuthType::Default_


class Native::Aaa::Authorization::Commands : public ydk::Entity
{
    public:
        Commands();
        ~Commands();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf list_name; //type: one of string, enumeration
        ydk::YLeaf group; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Aaa::Authorization::Configuration::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default_> default_;
        
}; // Native::Aaa::Authorization::Configuration


class Native::Aaa::Authorization::Configuration::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Native::Aaa::Authorization::Configuration::Default_::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default_::Group> group;
        
}; // Native::Aaa::Authorization::Configuration::Default_


class Native::Aaa::Authorization::Configuration::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupName; //type: Native::Aaa::Authorization::Configuration::Default_::Group::GroupName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default_::Group::GroupName> > group_name;
        
}; // Native::Aaa::Authorization::Configuration::Default_::Group


class Native::Aaa::Authorization::Configuration::Default_::Group::GroupName : public ydk::Entity
{
    public:
        GroupName();
        ~GroupName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string

}; // Native::Aaa::Authorization::Configuration::Default_::Group::GroupName


class Native::Aaa::Authorization::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class A1; //type: Native::Aaa::Authorization::Exec::A1
        class A2; //type: Native::Aaa::Authorization::Exec::A2
        class A3; //type: Native::Aaa::Authorization::Exec::A3
        class A4; //type: Native::Aaa::Authorization::Exec::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A4> a4;
        
}; // Native::Aaa::Authorization::Exec


class Native::Aaa::Authorization::Exec::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf group; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, enumeration
        class A1; //type: Native::Aaa::Authorization::Network::A1
        class A2; //type: Native::Aaa::Authorization::Network::A2
        class A3; //type: Native::Aaa::Authorization::Network::A3
        class A4; //type: Native::Aaa::Authorization::Network::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A4> a4;
                class Id;

}; // Native::Aaa::Authorization::Network


class Native::Aaa::Authorization::Network::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Aaa::Authorization::AuthProxy::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy::Default_> default_;
        
}; // Native::Aaa::Authorization::AuthProxy


class Native::Aaa::Authorization::AuthProxy::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Native::Aaa::Authorization::AuthProxy::Default_::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy::Default_::Group> group;
        
}; // Native::Aaa::Authorization::AuthProxy::Default_


class Native::Aaa::Authorization::AuthProxy::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf radius; //type: empty
        ydk::YLeaf group_name; //type: string

}; // Native::Aaa::Authorization::AuthProxy::Default_::Group


class Native::Aaa::Authorization::Onep : public ydk::Entity
{
    public:
        Onep();
        ~Onep();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Aaa::Authorization::Onep::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default_> default_;
        
}; // Native::Aaa::Authorization::Onep


class Native::Aaa::Authorization::Onep::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Native::Aaa::Authorization::Onep::Default_::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default_::Group> group;
        
}; // Native::Aaa::Authorization::Onep::Default_


class Native::Aaa::Authorization::Onep::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupWord; //type: Native::Aaa::Authorization::Onep::Default_::Group::GroupWord

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default_::Group::GroupWord> > group_word;
        
}; // Native::Aaa::Authorization::Onep::Default_::Group


class Native::Aaa::Authorization::Onep::Default_::Group::GroupWord : public ydk::Entity
{
    public:
        GroupWord();
        ~GroupWord();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_word; //type: string

}; // Native::Aaa::Authorization::Onep::Default_::Group::GroupWord


class Native::Aaa::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Commands; //type: Native::Aaa::Accounting::Commands
        class Connection; //type: Native::Aaa::Accounting::Connection
        class DelayStart; //type: Native::Aaa::Accounting::DelayStart
        class Identity; //type: Native::Aaa::Accounting::Identity
        class Exec; //type: Native::Aaa::Accounting::Exec
        class ExecSubmode; //type: Native::Aaa::Accounting::ExecSubmode
        class Network; //type: Native::Aaa::Accounting::Network
        class Send; //type: Native::Aaa::Accounting::Send
        class System; //type: Native::Aaa::Accounting::System
        class Update; //type: Native::Aaa::Accounting::Update
        class AuthProxy; //type: Native::Aaa::Accounting::AuthProxy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy> auth_proxy;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Commands> > commands;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection> > connection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::DelayStart> delay_start;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec> > exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode> exec_submode;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity> > identity;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send> send;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::System> system;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Update> update;
        
}; // Native::Aaa::Accounting


class Native::Aaa::Accounting::Commands : public ydk::Entity
{
    public:
        Commands();
        ~Commands();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf list_name; //type: one of string, enumeration
        ydk::YLeaf action_type; //type: ActionType
        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Connection::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::Connection::StopOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection::StartStop> start_stop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::Connection


class Native::Aaa::Accounting::Connection::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Connection::StartStop


class Native::Aaa::Accounting::Connection::StopOnly : public ydk::Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Connection::StopOnly


class Native::Aaa::Accounting::DelayStart : public ydk::Entity
{
    public:
        DelayStart();
        ~DelayStart();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_delay; //type: uint8
        ydk::YLeaf all; //type: empty

}; // Native::Aaa::Accounting::DelayStart


class Native::Aaa::Accounting::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class StartStop; //type: Native::Aaa::Accounting::Identity::StartStop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::Identity


class Native::Aaa::Accounting::Identity::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Identity::StartStop


class Native::Aaa::Accounting::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Exec::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::Exec::StopOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec::StartStop> start_stop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::Exec


class Native::Aaa::Accounting::Exec::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Exec::StartStop


class Native::Aaa::Accounting::Exec::StopOnly : public ydk::Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Exec::StopOnly


class Native::Aaa::Accounting::ExecSubmode : public ydk::Entity
{
    public:
        ExecSubmode();
        ~ExecSubmode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exec; //type: Native::Aaa::Accounting::ExecSubmode::Exec

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec> > exec;
        
}; // Native::Aaa::Accounting::ExecSubmode


class Native::Aaa::Accounting::ExecSubmode::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class ActionType; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType> action_type;
        
}; // Native::Aaa::Accounting::ExecSubmode::Exec


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop> start_stop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly : public ydk::Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly


class Native::Aaa::Accounting::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf broadcast; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Network::StartStop
        class A1; //type: Native::Aaa::Accounting::Network::A1
        class A2; //type: Native::Aaa::Accounting::Network::A2
        class A3; //type: Native::Aaa::Accounting::Network::A3
        class A4; //type: Native::Aaa::Accounting::Network::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A4> a4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::StartStop> start_stop;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::StartStop


class Native::Aaa::Accounting::Network::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::A1


class Native::Aaa::Accounting::Network::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::A2


class Native::Aaa::Accounting::Network::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::A3


class Native::Aaa::Accounting::Network::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Network::A4


class Native::Aaa::Accounting::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counters; //type: Native::Aaa::Accounting::Send::Counters
        class StopRecord; //type: Native::Aaa::Accounting::Send::StopRecord

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::Counters> counters;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord> stop_record;
        
}; // Native::Aaa::Accounting::Send


class Native::Aaa::Accounting::Send::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: empty

}; // Native::Aaa::Accounting::Send::Counters


class Native::Aaa::Accounting::Send::StopRecord : public ydk::Entity
{
    public:
        StopRecord();
        ~StopRecord();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty
        class Authentication; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication> authentication;
        
}; // Native::Aaa::Accounting::Send::StopRecord


class Native::Aaa::Accounting::Send::StopRecord::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Failure; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure
        class Success; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Success

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure> failure; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Success> success;
        
}; // Native::Aaa::Accounting::Send::StopRecord::Authentication


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Success : public ydk::Entity
{
    public:
        Success();
        ~Success();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteServer; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer> remote_server; // presence node
        
}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Success


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer : public ydk::Entity
{
    public:
        RemoteServer();
        ~RemoteServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer


class Native::Aaa::Accounting::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf guarantee_first; //type: boolean
        class Default_; //type: Native::Aaa::Accounting::System::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::System::Default_> default_; // presence node
        
}; // Native::Aaa::Accounting::System


class Native::Aaa::Accounting::System::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        ydk::YLeaf vrf; //type: string
        class StartStop; //type: Native::Aaa::Accounting::System::Default_::StartStop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::System::Default_::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::System::Default_


class Native::Aaa::Accounting::System::Default_::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::System::Default_::StartStop


class Native::Aaa::Accounting::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf periodic; //type: uint32

}; // Native::Aaa::Accounting::Update


class Native::Aaa::Accounting::AuthProxy : public ydk::Entity
{
    public:
        AuthProxy();
        ~AuthProxy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Aaa::Accounting::AuthProxy::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy::Default_> default_;
        
}; // Native::Aaa::Accounting::AuthProxy


class Native::Aaa::Accounting::AuthProxy::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StartStop; //type: Native::Aaa::Accounting::AuthProxy::Default_::StartStop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy::Default_::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::AuthProxy::Default_


class Native::Aaa::Accounting::AuthProxy::Default_::StartStop : public ydk::Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string

}; // Native::Aaa::Accounting::AuthProxy::Default_::StartStop


class Native::Aaa::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Radius; //type: Native::Aaa::Server::Radius

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius> radius;
        
}; // Native::Aaa::Server


class Native::Aaa::Server::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynamicAuthor; //type: Native::Aaa::Server::Radius::DynamicAuthor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor> dynamic_author; // presence node
        
}; // Native::Aaa::Server::Radius


class Native::Aaa::Server::Radius::DynamicAuthor : public ydk::Entity
{
    public:
        DynamicAuthor();
        ~DynamicAuthor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: AuthType
        class Client; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client
        class ServerKey; //type: Native::Aaa::Server::Radius::DynamicAuthor::ServerKey
        class Domain; //type: Native::Aaa::Server::Radius::DynamicAuthor::Domain

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client> > client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::ServerKey> server_key;
                class AuthType;

}; // Native::Aaa::Server::Radius::DynamicAuthor


class Native::Aaa::Server::Radius::DynamicAuthor::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        class Vrf; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf
        class ServerKey; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey> server_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf> > vrf;
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Client


class Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf


class Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey : public ydk::Entity
{
    public:
        ServerKey();
        ~ServerKey();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delimiter; //type: string
        class Stripping; //type: Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping> stripping; // presence node
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain


class Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping : public ydk::Entity
{
    public:
        Stripping();
        ~Stripping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf right_to_left; //type: empty

}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping


class Native::Aaa::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf display; //type: Display
        ydk::YLeaf max_sessions; //type: uint16
        ydk::YLeaf password; //type: Password
        ydk::YLeaf success_track_conf_time; //type: uint8
        ydk::YLeaf traceback; //type: Traceback
        class Memory; //type: Native::Aaa::Login::Memory
        class Policy; //type: Native::Aaa::Login::Policy
        class Route; //type: Native::Aaa::Login::Route
        class Server; //type: Native::Aaa::Login::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Login::Memory> memory;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Login::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Login::Route> route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Login::Server> server;
                class Display;
        class Password;
        class Traceback;

}; // Native::Aaa::Login


class Native::Aaa::Login::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Aaa::Login::Memory::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Login::Memory::Threshold> threshold;
        
}; // Native::Aaa::Login::Memory


class Native::Aaa::Login::Memory::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Accounting; //type: Native::Aaa::Login::Memory::Threshold::Accounting
        class Authentication; //type: Native::Aaa::Login::Memory::Threshold::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Login::Memory::Threshold::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Login::Memory::Threshold::Authentication> authentication;
        
}; // Native::Aaa::Login::Memory::Threshold


class Native::Aaa::Login::Memory::Threshold::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: uint8

}; // Native::Aaa::Login::Memory::Threshold::Accounting


class Native::Aaa::Login::Memory::Threshold::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reject; //type: uint8

}; // Native::Aaa::Login::Memory::Threshold::Authentication


class Native::Aaa::Login::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_config; //type: InterfaceConfig
        class InterfaceConfig;

}; // Native::Aaa::Login::Policy


class Native::Aaa::Login::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Download; //type: Native::Aaa::Login::Route::Download

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Login::Route::Download> download;
        
}; // Native::Aaa::Login::Route


class Native::Aaa::Login::Route::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_period; //type: uint16
        ydk::YLeaf authorization; //type: string

}; // Native::Aaa::Login::Route::Download


class Native::Aaa::Login::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf radius; //type: Radius
        class Radius;

}; // Native::Aaa::Login::Server


class Native::Privilege : public ydk::Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exec; //type: Native::Privilege::Exec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Privilege::Exec> exec;
        
}; // Native::Privilege


class Native::Privilege::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Privilege::Exec::Level

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Privilege::Exec::Level> > level;
        
}; // Native::Privilege::Exec


class Native::Privilege::Exec::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf privilege; //type: uint8
        class CommandList; //type: Native::Privilege::Exec::Level::CommandList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Privilege::Exec::Level::CommandList> > command_list;
        
}; // Native::Privilege::Exec::Level


class Native::Privilege::Exec::Level::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string

}; // Native::Privilege::Exec::Level::CommandList


class Native::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8
        class OnFailure; //type: Native::Login::OnFailure
        class OnSuccess; //type: Native::Login::OnSuccess

        std::shared_ptr<Cisco_IOS_XE_native::Native::Login::OnFailure> on_failure; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Login::OnSuccess> on_success; // presence node
        
}; // Native::Login


class Native::Login::OnFailure : public ydk::Entity
{
    public:
        OnFailure();
        ~OnFailure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Log; //type: Native::Login::OnFailure::Log

        std::shared_ptr<Cisco_IOS_XE_native::Native::Login::OnFailure::Log> log; // presence node
        
}; // Native::Login::OnFailure


class Native::Login::OnFailure::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf every; //type: uint16

}; // Native::Login::OnFailure::Log


class Native::Login::OnSuccess : public ydk::Entity
{
    public:
        OnSuccess();
        ~OnSuccess();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Log; //type: Native::Login::OnSuccess::Log

        std::shared_ptr<Cisco_IOS_XE_native::Native::Login::OnSuccess::Log> log; // presence node
        
}; // Native::Login::OnSuccess


class Native::Login::OnSuccess::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf every; //type: uint16

}; // Native::Login::OnSuccess::Log


class Native::Multilink : public ydk::Entity
{
    public:
        Multilink();
        ~Multilink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: BundleName
        ydk::YLeaf virtual_template; //type: uint16
        class BundleName;

}; // Native::Multilink


class Native::MacAddressTable : public ydk::Entity
{
    public:
        MacAddressTable();
        ~MacAddressTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvcXconnect; //type: Native::MacAddressTable::EvcXconnect
        class Limit; //type: Native::MacAddressTable::Limit
        class Learning; //type: Native::MacAddressTable::Learning

        std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::EvcXconnect> evc_xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::Learning> learning;
        std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::Limit> limit;
        
}; // Native::MacAddressTable


class Native::MacAddressTable::EvcXconnect : public ydk::Entity
{
    public:
        EvcXconnect();
        ~EvcXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2pt_forward_all; //type: empty

}; // Native::MacAddressTable::EvcXconnect


class Native::MacAddressTable::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bdomain; //type: Native::MacAddressTable::Limit::Bdomain

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::Limit::Bdomain> > bdomain;
        
}; // Native::MacAddressTable::Limit


class Native::MacAddressTable::Limit::Bdomain : public ydk::Entity
{
    public:
        Bdomain();
        ~Bdomain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf action; //type: Action
        ydk::YLeaf maximum; //type: uint32
        class Action;

}; // Native::MacAddressTable::Limit::Bdomain


class Native::MacAddressTable::Learning : public ydk::Entity
{
    public:
        Learning();
        ~Learning();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::MacAddressTable::Learning::Vlan

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::Learning::Vlan> > vlan;
        
}; // Native::MacAddressTable::Learning


class Native::MacAddressTable::Learning::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf module; //type: uint8

}; // Native::MacAddressTable::Learning::Vlan


class Native::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maintenance_mode; //type: empty
        ydk::YLeaf mode; //type: Mode
        class MainCpu; //type: Native::Redundancy::MainCpu
        class Policy; //type: Native::Redundancy::Policy
        class Timer; //type: Native::Redundancy::Timer
        class Interchassis; //type: Native::Redundancy::Interchassis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis> interchassis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu> main_cpu; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Timer> timer;
                class Mode;

}; // Native::Redundancy


class Native::Redundancy::MainCpu : public ydk::Entity
{
    public:
        MainCpu();
        ~MainCpu();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoSync; //type: Native::Redundancy::MainCpu::AutoSync
        class Standby; //type: Native::Redundancy::MainCpu::Standby

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::AutoSync> auto_sync;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby> standby;
        
}; // Native::Redundancy::MainCpu


class Native::Redundancy::MainCpu::AutoSync : public ydk::Entity
{
    public:
        AutoSync();
        ~AutoSync();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf running_config; //type: empty
        ydk::YLeaf config_register; //type: empty
        ydk::YLeaf bootvar; //type: empty
        ydk::YLeaf standard; //type: empty

}; // Native::Redundancy::MainCpu::AutoSync


class Native::Redundancy::MainCpu::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Console; //type: Native::Redundancy::MainCpu::Standby::Console
        class Initialization; //type: Native::Redundancy::MainCpu::Standby::Initialization

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Console> console;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization> initialization;
        
}; // Native::Redundancy::MainCpu::Standby


class Native::Redundancy::MainCpu::Standby::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Redundancy::MainCpu::Standby::Console


class Native::Redundancy::MainCpu::Standby::Initialization : public ydk::Entity
{
    public:
        Initialization();
        ~Initialization();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Redundancy::MainCpu::Standby::Initialization::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization::Delay> delay;
        
}; // Native::Redundancy::MainCpu::Standby::Initialization


class Native::Redundancy::MainCpu::Standby::Initialization::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint16
        ydk::YLeaf boot_only; //type: empty

}; // Native::Redundancy::MainCpu::Standby::Initialization::Delay


class Native::Redundancy::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfigSync; //type: Native::Redundancy::Policy::ConfigSync

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync> config_sync;
        
}; // Native::Redundancy::Policy


class Native::Redundancy::Policy::ConfigSync : public ydk::Entity
{
    public:
        ConfigSync();
        ~ConfigSync();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bulk; //type: Native::Redundancy::Policy::ConfigSync::Bulk
        class Lbl; //type: Native::Redundancy::Policy::ConfigSync::Lbl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk> bulk;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Lbl> lbl;
        
}; // Native::Redundancy::Policy::ConfigSync


class Native::Redundancy::Policy::ConfigSync::Bulk : public ydk::Entity
{
    public:
        Bulk();
        ~Bulk();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prc; //type: Native::Redundancy::Policy::ConfigSync::Bulk::Prc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk::Prc> prc;
        
}; // Native::Redundancy::Policy::ConfigSync::Bulk


class Native::Redundancy::Policy::ConfigSync::Bulk::Prc : public ydk::Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reload; //type: boolean

}; // Native::Redundancy::Policy::ConfigSync::Bulk::Prc


class Native::Redundancy::Policy::ConfigSync::Lbl : public ydk::Entity
{
    public:
        Lbl();
        ~Lbl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prc; //type: Native::Redundancy::Policy::ConfigSync::Lbl::Prc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Lbl::Prc> prc;
        
}; // Native::Redundancy::Policy::ConfigSync::Lbl


class Native::Redundancy::Policy::ConfigSync::Lbl::Prc : public ydk::Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reload; //type: boolean

}; // Native::Redundancy::Policy::ConfigSync::Lbl::Prc


class Native::Redundancy::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpso; //type: uint16

}; // Native::Redundancy::Timer


class Native::Redundancy::Interchassis : public ydk::Entity
{
    public:
        Interchassis();
        ~Interchassis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Native::Redundancy::Interchassis::Group

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group> > group;
        
}; // Native::Redundancy::Interchassis


class Native::Redundancy::Interchassis::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint64
        class Monitor; //type: Native::Redundancy::Interchassis::Group::Monitor
        class Member; //type: Native::Redundancy::Interchassis::Group::Member
        class Backbone; //type: Native::Redundancy::Interchassis::Group::Backbone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone> backbone;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Member> member;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Monitor> monitor;
        
}; // Native::Redundancy::Interchassis::Group


class Native::Redundancy::Interchassis::Group::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: empty
        ydk::YLeaf bfd; //type: empty

}; // Native::Redundancy::Interchassis::Group::Monitor

class Native::Aaa::Authentication::Dot1X::Dot1XList::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Dot1X::Default_::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Enable::Default_::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Authentication::Login::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

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

class Native::Aaa::Authorization::AuthType::Default_::Group : public ydk::Enum
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

class Native::Aaa::Accounting::Identity::StartStop::Group : public ydk::Enum
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

class Native::Aaa::Accounting::System::Default_::StartStop::Group : public ydk::Enum
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

class Native::Aaa::Login::Display : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf last_failure;
        static const ydk::Enum::YLeaf last_success;
        static const ydk::Enum::YLeaf number_failures;

};

class Native::Aaa::Login::Password : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf restriction;

};

class Native::Aaa::Login::Traceback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf recording;

};

class Native::Aaa::Login::Policy::InterfaceConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf allow_subinterface;

};

class Native::Aaa::Login::Server::Radius : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic_author;
        static const ydk::Enum::YLeaf policy_device;
        static const ydk::Enum::YLeaf proxy;
        static const ydk::Enum::YLeaf sesm;

};

class Native::Multilink::BundleName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authenticated;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf endpoint;
        static const ydk::Enum::YLeaf rfc;

};

class Native::MacAddressTable::Limit::Bdomain::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf limit;
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Redundancy::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rpr;
        static const ydk::Enum::YLeaf rpr_plus;
        static const ydk::Enum::YLeaf sso;
        static const ydk::Enum::YLeaf none;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_76_ */

