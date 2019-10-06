#ifndef _CISCO_IOS_XE_NATIVE_118_
#define _CISCO_IOS_XE_NATIVE_118_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_117.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Logging::File : public ydk::Entity
{
    public:
        File();
        ~File();

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
        ydk::YLeaf max_size; //type: uint32
        ydk::YLeaf min_size; //type: uint32
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::File


class Native::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

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

        ydk::YLeaf new_model; //type: empty
        ydk::YLeaf session_id; //type: SessionId
        ydk::YLeaf max_sessions; //type: uint16
        ydk::YLeaf password; //type: Password
        ydk::YLeaf traceback; //type: Traceback
        class Group; //type: Native::Aaa::Group
        class Attribute; //type: Native::Aaa::Attribute
        class Authentication; //type: Native::Aaa::Authentication
        class Local; //type: Native::Aaa::Local
        class Authorization; //type: Native::Aaa::Authorization
        class Accounting; //type: Native::Aaa::Accounting
        class Server; //type: Native::Aaa::Server
        class Login; //type: Native::Aaa::Login
        class Memory; //type: Native::Aaa::Memory
        class Policy; //type: Native::Aaa::Policy
        class Route; //type: Native::Aaa::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Attribute> attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Local> local;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login> login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Memory> memory;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Route> route;
                class SessionId;
        class Password;
        class Traceback;

}; // Native::Aaa


class Native::Aaa::Group : public ydk::Entity
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

        class Server; //type: Native::Aaa::Group::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server> server;
        
}; // Native::Aaa::Group


class Native::Aaa::Group::Server : public ydk::Entity
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

        class Tacacsplus; //type: Native::Aaa::Group::Server::Tacacsplus
        class Tacacs; //type: Native::Aaa::Group::Server::Tacacs
        class Radius; //type: Native::Aaa::Group::Server::Radius

        ydk::YList tacacsplus;
        ydk::YList tacacs;
        ydk::YList radius;
        
}; // Native::Aaa::Group::Server


class Native::Aaa::Group::Server::Tacacsplus : public ydk::Entity
{
    public:
        Tacacsplus();
        ~Tacacsplus();

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
        class Server_; //type: Native::Aaa::Group::Server::Tacacsplus::Server_
        class ServerPrivate; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate
        class Ip; //type: Native::Aaa::Group::Server::Tacacsplus::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Server_> server;
        ydk::YList server_private;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip> ip;
        
}; // Native::Aaa::Group::Server::Tacacsplus


class Native::Aaa::Group::Server::Tacacsplus::Server_ : public ydk::Entity
{
    public:
        Server_();
        ~Server_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Aaa::Group::Server::Tacacsplus::Server_::Name
        class Direct; //type: Native::Aaa::Group::Server::Tacacsplus::Server_::Direct

        ydk::YList name;
        ydk::YList direct;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Server_


class Native::Aaa::Group::Server::Tacacsplus::Server_::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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

}; // Native::Aaa::Group::Server::Tacacsplus::Server_::Name


class Native::Aaa::Group::Server::Tacacsplus::Server_::Direct : public ydk::Entity
{
    public:
        Direct();
        ~Direct();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of union, string

}; // Native::Aaa::Group::Server::Tacacsplus::Server_::Direct


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate : public ydk::Entity
{
    public:
        ServerPrivate();
        ~ServerPrivate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of union, string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf timeout; //type: uint16
        class Key; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key> key;
        
}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key


class Native::Aaa::Group::Server::Tacacsplus::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tacacs; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs
        class Vrf; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs> tacacs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs : public ydk::Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceInterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface> source_interface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Aaa::Group::Server::Tacacs


class Native::Aaa::Group::Server::Radius : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf mac_delimiter; //type: MacDelimiter
        ydk::YLeaf deadtime; //type: uint16
        class Server_; //type: Native::Aaa::Group::Server::Radius::Server_
        class Subscriber; //type: Native::Aaa::Group::Server::Radius::Subscriber
        class ServerPrivate; //type: Native::Aaa::Group::Server::Radius::ServerPrivate
        class Ip; //type: Native::Aaa::Group::Server::Radius::Ip
        class LoadBalance; //type: Native::Aaa::Group::Server::Radius::LoadBalance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Subscriber> subscriber;
        ydk::YList server_private;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance> load_balance;
                class MacDelimiter;

}; // Native::Aaa::Group::Server::Radius


class Native::Aaa::Group::Server::Radius::Server_ : public ydk::Entity
{
    public:
        Server_();
        ~Server_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Aaa::Group::Server::Radius::Server_::Name
        class Direct; //type: Native::Aaa::Group::Server::Radius::Server_::Direct

        ydk::YList name;
        ydk::YList direct;
        
}; // Native::Aaa::Group::Server::Radius::Server_


class Native::Aaa::Group::Server::Radius::Server_::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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

}; // Native::Aaa::Group::Server::Radius::Server_::Name


class Native::Aaa::Group::Server::Radius::Server_::Direct : public ydk::Entity
{
    public:
        Direct();
        ~Direct();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Native::Aaa::Group::Server::Radius::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacFiltering; //type: Native::Aaa::Group::Server::Radius::Subscriber::MacFiltering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Subscriber::MacFiltering> mac_filtering;
        
}; // Native::Aaa::Group::Server::Radius::Subscriber


class Native::Aaa::Group::Server::Radius::Subscriber::MacFiltering : public ydk::Entity
{
    public:
        MacFiltering();
        ~MacFiltering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security_mode; //type: SecurityMode
        class SecurityMode;

}; // Native::Aaa::Group::Server::Radius::Subscriber::MacFiltering


class Native::Aaa::Group::Server::Radius::ServerPrivate : public ydk::Entity
{
    public:
        ServerPrivate();
        ~ServerPrivate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of union, string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf retransmit; //type: uint8
        class Key; //type: Native::Aaa::Group::Server::Radius::ServerPrivate::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::ServerPrivate::Key> key;
        
}; // Native::Aaa::Group::Server::Radius::ServerPrivate


class Native::Aaa::Group::Server::Radius::ServerPrivate::Key : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Aaa::Group::Server::Radius::ServerPrivate::Key


class Native::Aaa::Group::Server::Radius::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Radius_; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_
        class Vrf; //type: Native::Aaa::Group::Server::Radius::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_> radius;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Radius::Ip


class Native::Aaa::Group::Server::Radius::Ip::Radius_ : public ydk::Entity
{
    public:
        Radius_();
        ~Radius_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceInterface; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface> source_interface;
        
}; // Native::Aaa::Group::Server::Radius::Ip::Radius_


class Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface


class Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::ATMSubinterface


class Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::ATMACRsubinterface


class Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::LISPSubinterface


class Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Radius_::SourceInterface::PortChannelSubinterface


class Native::Aaa::Group::Server::Radius::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Vrf


class Native::Aaa::Group::Server::Radius::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Method; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method> method;
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance


class Native::Aaa::Group::Server::Radius::LoadBalance::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LeastOutstanding; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding> least_outstanding; // presence node
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method


class Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding : public ydk::Entity
{
    public:
        LeastOutstanding();
        ~LeastOutstanding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf batch_size; //type: uint32
        ydk::YLeaf ignore_preferred_server; //type: empty

}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding


class Native::Aaa::Attribute : public ydk::Entity
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

        class List; //type: Native::Aaa::Attribute::List

        ydk::YList list;
        
}; // Native::Aaa::Attribute


class Native::Aaa::Attribute::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attribute_; //type: Native::Aaa::Attribute::List::Attribute_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Attribute::List::Attribute_> attribute;
        
}; // Native::Aaa::Attribute::List


class Native::Aaa::Attribute::List::Attribute_ : public ydk::Entity
{
    public:
        Attribute_();
        ~Attribute_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Type; //type: Native::Aaa::Attribute::List::Attribute_::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Attribute::List::Attribute_::Type> type;
        
}; // Native::Aaa::Attribute::List::Attribute_


class Native::Aaa::Attribute::List::Attribute_::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string
        ydk::YLeaf mandatory; //type: empty
        ydk::YLeaf tag; //type: uint8

}; // Native::Aaa::Attribute::List::Attribute_::Type


class Native::Aaa::Authentication : public ydk::Entity
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

        class Attempts; //type: Native::Aaa::Authentication::Attempts
        class Dot1x; //type: Native::Aaa::Authentication::Dot1x
        class Enable; //type: Native::Aaa::Authentication::Enable
        class Eou; //type: Native::Aaa::Authentication::Eou
        class Login; //type: Native::Aaa::Authentication::Login
        class Onep; //type: Native::Aaa::Authentication::Onep
        class Ppp; //type: Native::Aaa::Authentication::Ppp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Attempts> attempts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou> eou;
        ydk::YList login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep> onep;
        ydk::YList ppp;
        
}; // Native::Aaa::Authentication


class Native::Aaa::Authentication::Attempts : public ydk::Entity
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

        ydk::YLeaf login; //type: uint8

}; // Native::Aaa::Authentication::Attempts


class Native::Aaa::Authentication::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

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

        class Dot1xList; //type: Native::Aaa::Authentication::Dot1x::Dot1xList
        class Default; //type: Native::Aaa::Authentication::Dot1x::Default

        ydk::YList dot1x_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1x::Default> default_;
        
}; // Native::Aaa::Authentication::Dot1x


class Native::Aaa::Authentication::Dot1x::Dot1xList : public ydk::Entity
{
    public:
        Dot1xList();
        ~Dot1xList();

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
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf local; //type: empty
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Dot1x::Dot1xList


class Native::Aaa::Authentication::Dot1x::Default : public ydk::Entity
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

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf local; //type: empty
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Dot1x::Default


class Native::Aaa::Authentication::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

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

        class Default; //type: Native::Aaa::Authentication::Enable::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable::Default> default_;
        
}; // Native::Aaa::Authentication::Enable


class Native::Aaa::Authentication::Enable::Default : public ydk::Entity
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

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf none; //type: empty
        class Group;

}; // Native::Aaa::Authentication::Enable::Default


class Native::Aaa::Authentication::Eou : public ydk::Entity
{
    public:
        Eou();
        ~Eou();

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

        class Default; //type: Native::Aaa::Authentication::Eou::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default> default_;
        
}; // Native::Aaa::Authentication::Eou


class Native::Aaa::Authentication::Eou::Default : public ydk::Entity
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

        class Group; //type: Native::Aaa::Authentication::Eou::Default::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default::Group> group;
        
}; // Native::Aaa::Authentication::Eou::Default


class Native::Aaa::Authentication::Eou::Default::Group : public ydk::Entity
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

        ydk::YLeaf radius; //type: empty

}; // Native::Aaa::Authentication::Eou::Default::Group


class Native::Aaa::Authentication::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

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

        ydk::YLeaf name; //type: one of string, enumeration
        class A1; //type: Native::Aaa::Authentication::Login::A1
        class A2; //type: Native::Aaa::Authentication::Login::A2
        class A3; //type: Native::Aaa::Authentication::Login::A3
        class A4; //type: Native::Aaa::Authentication::Login::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A4> a4;
                class Name;

}; // Native::Aaa::Authentication::Login


class Native::Aaa::Authentication::Login::A1 : public ydk::Entity
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Default; //type: Native::Aaa::Authentication::Onep::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default> default_;
        
}; // Native::Aaa::Authentication::Onep


class Native::Aaa::Authentication::Onep::Default : public ydk::Entity
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

        class Local; //type: Native::Aaa::Authentication::Onep::Default::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default::Local> local; // presence node
        
}; // Native::Aaa::Authentication::Onep::Default


class Native::Aaa::Authentication::Onep::Default::Local : public ydk::Entity
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


}; // Native::Aaa::Authentication::Onep::Default::Local


class Native::Aaa::Authentication::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

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
        class A1; //type: Native::Aaa::Authentication::Ppp::A1
        class A2; //type: Native::Aaa::Authentication::Ppp::A2
        class A3; //type: Native::Aaa::Authentication::Ppp::A3
        class A4; //type: Native::Aaa::Authentication::Ppp::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A4> a4;
        
}; // Native::Aaa::Authentication::Ppp


class Native::Aaa::Authentication::Ppp::A1 : public ydk::Entity
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        ydk::YLeaf authen_type; //type: one of string, enumeration
        ydk::YLeaf authorization; //type: one of string, enumeration
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
        ydk::YList commands;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration> configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::CredentialDownload> credential_download;
        ydk::YList exec;
        ydk::YList eventmanager;
        ydk::YList network;
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

        ydk::YList group_name;
        
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
        ydk::YList authorization_list;
        
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
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf group; //type: one of string, enumeration
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
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf group; //type: one of string, enumeration
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: one of string, enumeration
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        ydk::YLeaf group; //type: one of string, enumeration
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

        ydk::YList group_word;
        
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
        class Dot1x; //type: Native::Aaa::Accounting::Dot1x
        class Identity; //type: Native::Aaa::Accounting::Identity
        class Exec; //type: Native::Aaa::Accounting::Exec
        class ExecSubmode; //type: Native::Aaa::Accounting::ExecSubmode
        class Network; //type: Native::Aaa::Accounting::Network
        class Send; //type: Native::Aaa::Accounting::Send
        class Suppress; //type: Native::Aaa::Accounting::Suppress
        class System; //type: Native::Aaa::Accounting::System
        class Update; //type: Native::Aaa::Accounting::Update
        class AuthProxy; //type: Native::Aaa::Accounting::AuthProxy

        ydk::YList commands;
        ydk::YList connection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::DelayStart> delay_start;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Identity> identity;
        ydk::YList exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode> exec_submode;
        ydk::YList network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Send> send;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Suppress> suppress;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Native::Aaa::Accounting::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

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

        class Default; //type: Native::Aaa::Accounting::Dot1x::Default
        class AccountingList; //type: Native::Aaa::Accounting::Dot1x::AccountingList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1x::Default> default_;
        ydk::YList accounting_list;
        
}; // Native::Aaa::Accounting::Dot1x


class Native::Aaa::Accounting::Dot1x::Default : public ydk::Entity
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

        class StartStop; //type: Native::Aaa::Accounting::Dot1x::Default::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1x::Default::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::Dot1x::Default


class Native::Aaa::Accounting::Dot1x::Default::StartStop : public ydk::Entity
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
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Dot1x::Default::StartStop


class Native::Aaa::Accounting::Dot1x::AccountingList : public ydk::Entity
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
        class StartStop; //type: Native::Aaa::Accounting::Dot1x::AccountingList::StartStop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1x::AccountingList::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::Dot1x::AccountingList


class Native::Aaa::Accounting::Dot1x::AccountingList::StartStop : public ydk::Entity
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
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Accounting::Dot1x::AccountingList::StartStop


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
        ydk::YList accounting_list;
        
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
        ydk::YLeaf group; //type: one of string, enumeration
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
        ydk::YLeaf group; //type: one of string, enumeration
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Exec; //type: Native::Aaa::Accounting::ExecSubmode::Exec

        ydk::YList exec;
        
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: one of string, enumeration
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Native::Aaa::Accounting::Suppress : public ydk::Entity
{
    public:
        Suppress();
        ~Suppress();

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

        ydk::YLeaf null_username; //type: empty

}; // Native::Aaa::Accounting::Suppress


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
        ydk::YLeaf group; //type: one of string, enumeration
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

        ydk::YList client;
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

        ydk::YList vrf;
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

class Native::Aaa::SessionId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf common;
        static const ydk::Enum::YLeaf unique;

        static int get_enum_value(const std::string & name) {
            if (name == "common") return 0;
            if (name == "unique") return 1;
            return -1;
        }
};

class Native::Aaa::Password : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf restriction;

        static int get_enum_value(const std::string & name) {
            if (name == "restriction") return 0;
            return -1;
        }
};

class Native::Aaa::Traceback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf recording;

        static int get_enum_value(const std::string & name) {
            if (name == "recording") return 0;
            return -1;
        }
};

class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "7") return 1;
            return -1;
        }
};

class Native::Aaa::Group::Server::Radius::MacDelimiter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf colon;
        static const ydk::Enum::YLeaf hyphen;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf single_hyphen;

        static int get_enum_value(const std::string & name) {
            if (name == "colon") return 0;
            if (name == "hyphen") return 1;
            if (name == "none") return 2;
            if (name == "single-hyphen") return 3;
            return -1;
        }
};

class Native::Aaa::Group::Server::Radius::Subscriber::MacFiltering::SecurityMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shared_secret;

        static int get_enum_value(const std::string & name) {
            if (name == "mac") return 0;
            if (name == "none") return 1;
            if (name == "shared-secret") return 2;
            return -1;
        }
};

class Native::Aaa::Group::Server::Radius::ServerPrivate::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};

class Native::Aaa::Authentication::Dot1x::Dot1xList::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf ldap;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "ldap") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Dot1x::Dot1xList::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf ldap;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "ldap") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Dot1x::Default::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf ldap;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "ldap") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Dot1x::Default::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf ldap;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "ldap") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Enable::Default::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Login::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            return -1;
        }
};

class Native::Aaa::Authentication::Login::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authentication::Login::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authentication::Login::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authentication::Login::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authentication::Login::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authentication::Login::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authentication::Login::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authentication::Login::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authentication::Ppp::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Ppp::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Ppp::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Ppp::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Ppp::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Ppp::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Ppp::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authentication::Ppp::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Local::Authentication::Authorization::AuthenType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            return -1;
        }
};

class Native::Aaa::Local::Authentication::Authorization::Authorization_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            return -1;
        }
};

class Native::Aaa::Authorization::AuthType::Default::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            return -1;
        }
};

class Native::Aaa::Authorization::Commands::ListName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            return -1;
        }
};

class Native::Aaa::Authorization::Commands::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "tacacs+") return 0;
            return -1;
        }
};

class Native::Aaa::Authorization::CredentialDownload::Default::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::CredentialDownload::Default::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Exec::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Exec::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Exec::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Exec::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Exec::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Exec::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Exec::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Exec::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs+") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Eventmanager::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs") return 2;
            return -1;
        }
};

class Native::Aaa::Authorization::Network::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            return -1;
        }
};

class Native::Aaa::Authorization::Network::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authorization::Network::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authorization::Network::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authorization::Network::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authorization::Network::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authorization::Network::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authorization::Network::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authorization::Network::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Authorization::AuthProxy::Default::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            return -1;
        }
};

class Native::Aaa::Accounting::Commands::ListName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            return -1;
        }
};

class Native::Aaa::Accounting::Commands::ActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf start_stop;
        static const ydk::Enum::YLeaf stop_only;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "start-stop") return 1;
            if (name == "stop-only") return 2;
            return -1;
        }
};

class Native::Aaa::Accounting::Commands::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "tacacs+") return 0;
            return -1;
        }
};

class Native::Aaa::Accounting::Connection::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::Connection::StopOnly::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::Dot1x::Default::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::Identity::Default::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::Identity::AccountingList::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::Exec::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::Exec::StopOnly::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::Network::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            return -1;
        }
};

class Native::Aaa::Accounting::Network::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start_stop;
        static const ydk::Enum::YLeaf stop_only;

        static int get_enum_value(const std::string & name) {
            if (name == "start-stop") return 0;
            if (name == "stop-only") return 1;
            return -1;
        }
};

class Native::Aaa::Accounting::Network::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            return -1;
        }
};

class Native::Aaa::Accounting::Network::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs") return 2;
            return -1;
        }
};

class Native::Aaa::Accounting::Network::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs") return 2;
            return -1;
        }
};

class Native::Aaa::Accounting::Network::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs") return 2;
            return -1;
        }
};

class Native::Aaa::Accounting::Network::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;

        static int get_enum_value(const std::string & name) {
            if (name == "ldap") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs") return 2;
            return -1;
        }
};

class Native::Aaa::Accounting::System::Default::StartStop::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

        static int get_enum_value(const std::string & name) {
            if (name == "radius") return 0;
            if (name == "tacacs+") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::DynamicAuthor::AuthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf session_key;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            if (name == "any") return 1;
            if (name == "session-key") return 2;
            return -1;
        }
};

class Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};

class Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};

class Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_118_ */

