#ifndef _CISCO_IOS_XE_NATIVE_171_
#define _CISCO_IOS_XE_NATIVE_171_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_170.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Line::Vty::ExecTimeout : public ydk::Entity
{
    public:
        ExecTimeout();
        ~ExecTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf seconds; //type: uint32

}; // Native::Line::Vty::ExecTimeout


class Native::Line::Vty::Flowcontrol : public ydk::Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

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
        ydk::YLeaf hardware; //type: empty
        ydk::YLeaf software; //type: empty

}; // Native::Line::Vty::Flowcontrol


class Native::Line::Vty::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint8

}; // Native::Line::Vty::History


class Native::Line::Vty::Ip : public ydk::Entity
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

        ydk::YLeaf tcp; //type: empty
        class NetmaskFormat; //type: Native::Line::Vty::Ip::NetmaskFormat

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::Vty::Ip


class Native::Line::Vty::Ip::NetmaskFormat : public ydk::Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: Format
        class Format;

}; // Native::Line::Vty::Ip::NetmaskFormat


class Native::Line::Vty::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessClass; //type: Native::Line::Vty::Ipv6::AccessClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Ipv6::AccessClass> access_class;
        
}; // Native::Line::Vty::Ipv6


class Native::Line::Vty::Ipv6::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessClass_; //type: Native::Line::Vty::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::Vty::Ipv6::AccessClass


class Native::Line::Vty::Ipv6::AccessClass::AccessClass_ : public ydk::Entity
{
    public:
        AccessClass_();
        ~AccessClass_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_class_name; //type: string
        ydk::YLeaf enumeration_in_out; //type: EnumerationInOut
        class EnumerationInOut;

}; // Native::Line::Vty::Ipv6::AccessClass::AccessClass_


class Native::Line::Vty::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Synchronous; //type: Native::Line::Vty::Logging::Synchronous

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::Vty::Logging


class Native::Line::Vty::Logging::Synchronous : public ydk::Entity
{
    public:
        Synchronous();
        ~Synchronous();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Line::Vty::Logging::Synchronous


class Native::Line::Vty::Login : public ydk::Entity
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

        ydk::YLeaf local; //type: empty
        ydk::YLeaf authentication; //type: string

}; // Native::Line::Vty::Login


class Native::Line::Vty::MediaType : public ydk::Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rj45; //type: empty

}; // Native::Line::Vty::MediaType


class Native::Line::Vty::Modem : public ydk::Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cts_alarm; //type: empty
        ydk::YLeaf dtr_active; //type: empty
        ydk::YLeaf dialin; //type: empty
        ydk::YLeaf host; //type: empty
        ydk::YLeaf inout; //type: empty
        ydk::YLeaf printer; //type: empty
        ydk::YLeaf answer_timeout; //type: empty
        ydk::YLeaf dtr_delay; //type: empty

}; // Native::Line::Vty::Modem


class Native::Line::Vty::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf character; //type: one of string, uint8
        ydk::YLeaf null; //type: uint8

}; // Native::Line::Vty::Padding


class Native::Line::Vty::Parity : public ydk::Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf even; //type: empty
        ydk::YLeaf mark; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf odd; //type: empty
        ydk::YLeaf space; //type: empty

}; // Native::Line::Vty::Parity


class Native::Line::Vty::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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
        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Line::Vty::Password


class Native::Line::Vty::Prc : public ydk::Entity
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

        ydk::YLeaf expose; //type: empty
        ydk::YLeaf hide; //type: empty

}; // Native::Line::Vty::Prc


class Native::Line::Vty::Privilege : public ydk::Entity
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

        class Level; //type: Native::Line::Vty::Privilege::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Privilege::Level> level; // presence node
        
}; // Native::Line::Vty::Privilege


class Native::Line::Vty::Privilege::Level : public ydk::Entity
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

        ydk::YLeaf number; //type: uint8

}; // Native::Line::Vty::Privilege::Level


class Native::Line::Vty::SessionTimeout : public ydk::Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_timeout_value; //type: uint16
        ydk::YLeaf output; //type: empty

}; // Native::Line::Vty::SessionTimeout


class Native::Line::Vty::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf login; //type: empty

}; // Native::Line::Vty::Timeout


class Native::Line::Vty::Telnet : public ydk::Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transparent; //type: empty

}; // Native::Line::Vty::Telnet


class Native::Line::Vty::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Line::Vty::Transport::Input
        class Output; //type: Native::Line::Vty::Transport::Output
        class Preferred; //type: Native::Line::Vty::Transport::Preferred

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Transport::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Transport::Output> output;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Vty::Transport


class Native::Line::Vty::Transport::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList input; //type: list of  Input
        class Input_;

}; // Native::Line::Vty::Transport::Input


class Native::Line::Vty::Transport::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList output; //type: list of  Output
        class Output_;

}; // Native::Line::Vty::Transport::Output


class Native::Line::Vty::Transport::Preferred : public ydk::Entity
{
    public:
        Preferred();
        ~Preferred();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::Line::Vty::Transport::Preferred


class Native::Line::Vty::UsbInactivityTimeout : public ydk::Entity
{
    public:
        UsbInactivityTimeout();
        ~UsbInactivityTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_; //type: empty

}; // Native::Line::Vty::UsbInactivityTimeout


class Native::Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authenticate; //type: empty
        ydk::YLeaf broadcastdelay; //type: uint32
        ydk::YLeaf clock_period; //type: uint32
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf max_associations; //type: uint32
        ydk::YLeaf maxdistance; //type: uint8
        ydk::YLeaf mindistance; //type: uint16
        ydk::YLeaf orphan; //type: uint8
        ydk::YLeaf passive; //type: empty
        ydk::YLeaf update_calendar; //type: empty
        class AccessGroup; //type: Native::Ntp::AccessGroup
        class Allow; //type: Native::Ntp::Allow
        class AuthenticationKey; //type: Native::Ntp::AuthenticationKey
        class Master; //type: Native::Ntp::Master
        class Panic; //type: Native::Ntp::Panic
        class Peer; //type: Native::Ntp::Peer
        class Server; //type: Native::Ntp::Server
        class Source; //type: Native::Ntp::Source
        class TrustedKey; //type: Native::Ntp::TrustedKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Allow> allow;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AuthenticationKey> > authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Master> master; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Panic> panic;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server> server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source> source;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::TrustedKey> > trusted_key;
        
}; // Native::Ntp


class Native::Ntp::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Ntp::AccessGroup::Ipv4
        class Ipv6; //type: Native::Ntp::AccessGroup::Ipv6
        class Peer; //type: Native::Ntp::AccessGroup::Peer
        class QueryOnly; //type: Native::Ntp::AccessGroup::QueryOnly
        class Serve; //type: Native::Ntp::AccessGroup::Serve
        class ServeOnly; //type: Native::Ntp::AccessGroup::ServeOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::QueryOnly> query_only;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Serve> serve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::ServeOnly> serve_only;
        
}; // Native::Ntp::AccessGroup


class Native::Ntp::AccessGroup::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: Native::Ntp::AccessGroup::Ipv4::Peer
        class QueryOnly; //type: Native::Ntp::AccessGroup::Ipv4::QueryOnly
        class Serve; //type: Native::Ntp::AccessGroup::Ipv4::Serve
        class ServeOnly; //type: Native::Ntp::AccessGroup::Ipv4::ServeOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::QueryOnly> query_only;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::Serve> serve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::ServeOnly> serve_only;
        
}; // Native::Ntp::AccessGroup::Ipv4


class Native::Ntp::AccessGroup::Ipv4::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::Peer


class Native::Ntp::AccessGroup::Ipv4::QueryOnly : public ydk::Entity
{
    public:
        QueryOnly();
        ~QueryOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::QueryOnly


class Native::Ntp::AccessGroup::Ipv4::Serve : public ydk::Entity
{
    public:
        Serve();
        ~Serve();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::Serve


class Native::Ntp::AccessGroup::Ipv4::ServeOnly : public ydk::Entity
{
    public:
        ServeOnly();
        ~ServeOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::ServeOnly


class Native::Ntp::AccessGroup::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: Native::Ntp::AccessGroup::Ipv6::Peer
        class QueryOnly; //type: Native::Ntp::AccessGroup::Ipv6::QueryOnly
        class Serve; //type: Native::Ntp::AccessGroup::Ipv6::Serve
        class ServeOnly; //type: Native::Ntp::AccessGroup::Ipv6::ServeOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::QueryOnly> query_only;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::Serve> serve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::ServeOnly> serve_only;
        
}; // Native::Ntp::AccessGroup::Ipv6


class Native::Ntp::AccessGroup::Ipv6::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::Peer


class Native::Ntp::AccessGroup::Ipv6::QueryOnly : public ydk::Entity
{
    public:
        QueryOnly();
        ~QueryOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::QueryOnly


class Native::Ntp::AccessGroup::Ipv6::Serve : public ydk::Entity
{
    public:
        Serve();
        ~Serve();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::Serve


class Native::Ntp::AccessGroup::Ipv6::ServeOnly : public ydk::Entity
{
    public:
        ServeOnly();
        ~ServeOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::ServeOnly


class Native::Ntp::AccessGroup::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Peer


class Native::Ntp::AccessGroup::QueryOnly : public ydk::Entity
{
    public:
        QueryOnly();
        ~QueryOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::QueryOnly


class Native::Ntp::AccessGroup::Serve : public ydk::Entity
{
    public:
        Serve();
        ~Serve();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Serve


class Native::Ntp::AccessGroup::ServeOnly : public ydk::Entity
{
    public:
        ServeOnly();
        ~ServeOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::ServeOnly


class Native::Ntp::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: Native::Ntp::Allow::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Allow::Mode> mode;
        
}; // Native::Ntp::Allow


class Native::Ntp::Allow::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf private_; //type: empty
        class Control; //type: Native::Ntp::Allow::Mode::Control

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Allow::Mode::Control> control; // presence node
        
}; // Native::Ntp::Allow::Mode


class Native::Ntp::Allow::Mode::Control : public ydk::Entity
{
    public:
        Control();
        ~Control();

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

}; // Native::Ntp::Allow::Mode::Control


class Native::Ntp::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf md5; //type: string
        ydk::YLeaf encryption_type; //type: uint32

}; // Native::Ntp::AuthenticationKey


class Native::Ntp::Master : public ydk::Entity
{
    public:
        Master();
        ~Master();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stratum_number; //type: uint8

}; // Native::Ntp::Master


class Native::Ntp::Panic : public ydk::Entity
{
    public:
        Panic();
        ~Panic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update; //type: empty

}; // Native::Ntp::Panic


class Native::Ntp::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerList; //type: Native::Ntp::Peer::ServerList
        class Ip; //type: Native::Ntp::Peer::Ip
        class Ipv6; //type: Native::Ntp::Peer::Ipv6
        class Vrf; //type: Native::Ntp::Peer::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Ipv6> > ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::ServerList> > server_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf> > vrf;
        
}; // Native::Ntp::Peer


class Native::Ntp::Peer::ServerList : public ydk::Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Peer::ServerList


class Native::Ntp::Peer::Ip : public ydk::Entity
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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Ip


class Native::Ntp::Peer::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Ipv6


class Native::Ntp::Peer::Vrf : public ydk::Entity
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
        class ServerList; //type: Native::Ntp::Peer::Vrf::ServerList
        class Ip; //type: Native::Ntp::Peer::Vrf::Ip
        class Ipv6; //type: Native::Ntp::Peer::Vrf::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf::Ipv6> > ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf::ServerList> > server_list;
        
}; // Native::Ntp::Peer::Vrf


class Native::Ntp::Peer::Vrf::ServerList : public ydk::Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Vrf::ServerList


class Native::Ntp::Peer::Vrf::Ip : public ydk::Entity
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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Vrf::Ip


class Native::Ntp::Peer::Vrf::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Vrf::Ipv6


class Native::Ntp::Server : public ydk::Entity
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

        class ServerList; //type: Native::Ntp::Server::ServerList
        class Ip; //type: Native::Ntp::Server::Ip
        class Ipv6; //type: Native::Ntp::Server::Ipv6
        class Vrf; //type: Native::Ntp::Server::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Ipv6> > ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::ServerList> > server_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Vrf> > vrf;
        
}; // Native::Ntp::Server


class Native::Ntp::Server::ServerList : public ydk::Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Server::ServerList


class Native::Ntp::Server::Ip : public ydk::Entity
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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Server::Ip


class Native::Ntp::Server::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Server::Ipv6


class Native::Ntp::Server::Vrf : public ydk::Entity
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
        class ServerList; //type: Native::Ntp::Server::Vrf::ServerList
        class Ip; //type: Native::Ntp::Server::Vrf::Ip
        class Ipv6; //type: Native::Ntp::Server::Vrf::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Vrf::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Vrf::Ipv6> > ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Vrf::ServerList> > server_list;
        
}; // Native::Ntp::Server::Vrf


class Native::Ntp::Server::Vrf::ServerList : public ydk::Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Server::Vrf::ServerList


class Native::Ntp::Server::Vrf::Ip : public ydk::Entity
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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Server::Vrf::Ip


class Native::Ntp::Server::Vrf::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf prefer; //type: empty
        ydk::YLeaf source; //type: string
        ydk::YLeaf version; //type: uint8

}; // Native::Ntp::Server::Vrf::Ipv6


class Native::Ntp::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        class AtmSubinterface; //type: Native::Ntp::Source::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ntp::Source::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ntp::Source::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ntp::Source::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ntp::Source


class Native::Ntp::Source::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Ntp::Source::AtmSubinterface


class Native::Ntp::Source::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ntp::Source::AtmAcrsubinterface


class Native::Ntp::Source::LispSubinterface : public ydk::Entity
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

}; // Native::Ntp::Source::LispSubinterface


class Native::Ntp::Source::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Ntp::Source::PortChannelSubinterface


class Native::Ntp::TrustedKey : public ydk::Entity
{
    public:
        TrustedKey();
        ~TrustedKey();

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
        ydk::YLeaf end_key; //type: uint16

}; // Native::Ntp::TrustedKey


class Native::Wsma : public ydk::Entity
{
    public:
        Wsma();
        ~Wsma();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Agent; //type: Native::Wsma::Agent
        class Profile; //type: Native::Wsma::Profile

        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent> agent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Profile> profile;
        
}; // Native::Wsma


class Native::Wsma::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exec; //type: Native::Wsma::Agent::Exec
        class Config; //type: Native::Wsma::Agent::Config
        class Filesys; //type: Native::Wsma::Agent::Filesys
        class Notify; //type: Native::Wsma::Agent::Notify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent::Config> config;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent::Exec> exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent::Filesys> filesys;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent::Notify> notify;
        
}; // Native::Wsma::Agent


class Native::Wsma::Agent::Exec : public ydk::Entity
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

        ydk::YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Exec


class Native::Wsma::Agent::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Config


class Native::Wsma::Agent::Filesys : public ydk::Entity
{
    public:
        Filesys();
        ~Filesys();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Filesys


class Native::Wsma::Agent::Notify : public ydk::Entity
{
    public:
        Notify();
        ~Notify();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Notify


class Native::Wsma::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Listener; //type: Native::Wsma::Profile::Listener

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Profile::Listener> > listener;
        
}; // Native::Wsma::Profile


class Native::Wsma::Profile::Listener : public ydk::Entity
{
    public:
        Listener();
        ~Listener();

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
        ydk::YLeaf transport; //type: Transport
        class Transport;

}; // Native::Wsma::Profile::Listener


class Native::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Manager; //type: Native::Event::Manager

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager> manager;
        
}; // Native::Event


class Native::Event::Manager : public ydk::Entity
{
    public:
        Manager();
        ~Manager();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Environment; //type: Native::Event::Manager::Environment
        class Directory; //type: Native::Event::Manager::Directory
        class Session; //type: Native::Event::Manager::Session
        class Applet; //type: Native::Event::Manager::Applet

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet> > applet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Directory> directory;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Environment> > environment;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Session> session;
        
}; // Native::Event::Manager


class Native::Event::Manager::Environment : public ydk::Entity
{
    public:
        Environment();
        ~Environment();

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
        ydk::YLeaf value_; //type: string

}; // Native::Event::Manager::Environment


class Native::Event::Manager::Directory : public ydk::Entity
{
    public:
        Directory();
        ~Directory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class User; //type: Native::Event::Manager::Directory::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Directory::User> user;
        
}; // Native::Event::Manager::Directory


class Native::Event::Manager::Directory::User : public ydk::Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: string

}; // Native::Event::Manager::Directory::User


class Native::Event::Manager::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cli; //type: Native::Event::Manager::Session::Cli

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Session::Cli> cli;
        
}; // Native::Event::Manager::Session


class Native::Event::Manager::Session::Cli : public ydk::Entity
{
    public:
        Cli();
        ~Cli();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Username; //type: Native::Event::Manager::Session::Cli::Username

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Session::Cli::Username> username;
        
}; // Native::Event::Manager::Session::Cli


class Native::Event::Manager::Session::Cli::Username : public ydk::Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Username_In_Word; //type: Native::Event::Manager::Session::Cli::Username::Username_In_Word

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Session::Cli::Username::Username_In_Word> > username_in_word;
        
}; // Native::Event::Manager::Session::Cli::Username


class Native::Event::Manager::Session::Cli::Username::Username_In_Word : public ydk::Entity
{
    public:
        Username_In_Word();
        ~Username_In_Word();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username_in_word; //type: string
        ydk::YLeaf privilege; //type: uint8

}; // Native::Event::Manager::Session::Cli::Username::Username_In_Word


class Native::Event::Manager::Applet : public ydk::Entity
{
    public:
        Applet();
        ~Applet();

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
        ydk::YLeaf authorization; //type: Authorization
        ydk::YLeaf class_; //type: string
        ydk::YLeaf trap; //type: empty
        ydk::YLeaf description; //type: string
        class Event_; //type: Native::Event::Manager::Applet::Event_
        class Action; //type: Native::Event::Manager::Applet::Action
        class Trigger; //type: Native::Event::Manager::Applet::Trigger

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action> > action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Trigger> trigger;
                class Authorization;

}; // Native::Event::Manager::Applet


class Native::Event::Manager::Applet::Event_ : public ydk::Entity
{
    public:
        Event_();
        ~Event_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timer; //type: Native::Event::Manager::Applet::Event_::Timer
        class SnmpNotification; //type: Native::Event::Manager::Applet::Event_::SnmpNotification
        class Syslog; //type: Native::Event::Manager::Applet::Event_::Syslog
        class Track; //type: Native::Event::Manager::Applet::Event_::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::SnmpNotification> snmp_notification;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Syslog> syslog;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer> timer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Track> track;
        
}; // Native::Event::Manager::Applet::Event_


class Native::Event::Manager::Applet::Event_::Timer : public ydk::Entity
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

        class Watchdog; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog> watchdog;
        
}; // Native::Event::Manager::Applet::Event_::Timer


class Native::Event::Manager::Applet::Event_::Timer::Watchdog : public ydk::Entity
{
    public:
        Watchdog();
        ~Watchdog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name> name;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name : public ydk::Entity
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

        class TimerName; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName> > timer_name;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName : public ydk::Entity
{
    public:
        TimerName();
        ~TimerName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_name; //type: string
        class Time; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time> time;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TimeInSeconds; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds> > time_in_seconds;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds : public ydk::Entity
{
    public:
        TimeInSeconds();
        ~TimeInSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: uint32
        class Maxrun; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun> maxrun;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun : public ydk::Entity
{
    public:
        Maxrun();
        ~Maxrun();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TimerInSeconds; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds> > timer_in_seconds;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds : public ydk::Entity
{
    public:
        TimerInSeconds();
        ~TimerInSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_in_seconds; //type: uint32
        ydk::YLeaf ratelimit; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds


class Native::Event::Manager::Applet::Event_::SnmpNotification : public ydk::Entity
{
    public:
        SnmpNotification();
        ~SnmpNotification();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        ydk::YLeaf oid_val; //type: string
        ydk::YLeaf op; //type: OperatorType
        ydk::YLeaf src_ip_address; //type: string
        ydk::YLeaf dest_ip_address; //type: string

}; // Native::Event::Manager::Applet::Event_::SnmpNotification


class Native::Event::Manager::Applet::Event_::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pattern; //type: string

}; // Native::Event::Manager::Applet::Event_::Syslog


class Native::Event::Manager::Applet::Event_::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf track_object_number; //type: uint16
        ydk::YLeaf state; //type: State
        class State;

}; // Native::Event::Manager::Applet::Event_::Track


class Native::Event::Manager::Applet::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

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
        ydk::YLeaf end; //type: empty
        ydk::YLeaf exit; //type: empty
        class Cli; //type: Native::Event::Manager::Applet::Action::Cli
        class If_; //type: Native::Event::Manager::Applet::Action::If_
        class Info; //type: Native::Event::Manager::Applet::Action::Info
        class Regexp; //type: Native::Event::Manager::Applet::Action::Regexp
        class SnmpTrap; //type: Native::Event::Manager::Applet::Action::SnmpTrap
        class String; //type: Native::Event::Manager::Applet::Action::String
        class Syslog; //type: Native::Event::Manager::Applet::Action::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Cli> cli;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::If_> if_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info> info;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Regexp> regexp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::SnmpTrap> snmp_trap; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::String> string;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Syslog> syslog;
        
}; // Native::Event::Manager::Applet::Action


class Native::Event::Manager::Applet::Action::Cli : public ydk::Entity
{
    public:
        Cli();
        ~Cli();

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

}; // Native::Event::Manager::Applet::Action::Cli


class Native::Event::Manager::Applet::Action::If_ : public ydk::Entity
{
    public:
        If_();
        ~If_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string_op_1; //type: string
        ydk::YLeaf keyword; //type: OperatorType
        ydk::YLeaf string_op_2; //type: string
        ydk::YLeaf goto_; //type: string

}; // Native::Event::Manager::Applet::Action::If_


class Native::Event::Manager::Applet::Action::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Type; //type: Native::Event::Manager::Applet::Action::Info::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type> type;
        
}; // Native::Event::Manager::Applet::Action::Info


class Native::Event::Manager::Applet::Action::Info::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snmp; //type: Native::Event::Manager::Applet::Action::Info::Type::Snmp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type::Snmp> snmp;
        
}; // Native::Event::Manager::Applet::Action::Info::Type


class Native::Event::Manager::Applet::Action::Info::Type::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Var; //type: Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var
        class Trap; //type: Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap> trap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var> var;
        
}; // Native::Event::Manager::Applet::Action::Info::Type::Snmp


class Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var : public ydk::Entity
{
    public:
        Var();
        ~Var();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf variable_name; //type: string
        ydk::YLeaf oid; //type: string
        ydk::YLeaf oid_type; //type: OidType
        ydk::YLeaf oid_type_value; //type: string
        class OidType;

}; // Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var


class Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enterprise_oid; //type: string
        ydk::YLeaf generic_trapnum; //type: uint32
        ydk::YLeaf specific_trapnum; //type: uint32
        ydk::YLeaf trap_oid; //type: string
        ydk::YLeaf trap_var; //type: string

}; // Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap


class Native::Event::Manager::Applet::Action::Regexp : public ydk::Entity
{
    public:
        Regexp();
        ~Regexp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string_pattern; //type: string
        ydk::YLeaf string_input; //type: string
        ydk::YLeaf string_match; //type: string
        ydk::YLeaf string_submatch1; //type: string
        ydk::YLeaf string_submatch2; //type: string
        ydk::YLeaf string_submatch3; //type: string

}; // Native::Event::Manager::Applet::Action::Regexp


class Native::Event::Manager::Applet::Action::SnmpTrap : public ydk::Entity
{
    public:
        SnmpTrap();
        ~SnmpTrap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intdata1; //type: int32
        ydk::YLeaf intdata2; //type: int32
        ydk::YLeaf strdata; //type: string

}; // Native::Event::Manager::Applet::Action::SnmpTrap


class Native::Event::Manager::Applet::Action::String : public ydk::Entity
{
    public:
        String();
        ~String();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trim; //type: string

}; // Native::Event::Manager::Applet::Action::String


class Native::Event::Manager::Applet::Action::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf facility; //type: string
        ydk::YLeaf msg; //type: string
        ydk::YLeaf priority; //type: one of enumeration, uint16

}; // Native::Event::Manager::Applet::Action::Syslog


class Native::Event::Manager::Applet::Trigger : public ydk::Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Event::Manager::Applet::Trigger


class Native::CiscoIosXeNative_Template : public ydk::Entity
{
    public:
        CiscoIosXeNative_Template();
        ~CiscoIosXeNative_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Template_Details; //type: Native::CiscoIosXeNative_Template::Template_Details

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details> > template_details;
        
}; // Native::CiscoIosXeNative_Template


class Native::CiscoIosXeNative_Template::Template_Details : public ydk::Entity
{
    public:
        Template_Details();
        ~Template_Details();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_name; //type: string
        class Ethernet; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet> ethernet;
        
}; // Native::CiscoIosXeNative_Template::Template_Details


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Oam; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam> oam;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam : public ydk::Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkMonitor; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor
        class RemoteFailure; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor> link_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure> remote_failure;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor : public ydk::Entity
{
    public:
        LinkMonitor();
        ~LinkMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Frame; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame
        class FramePeriod; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod
        class FrameSeconds; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds
        class HighThreshold; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold
        class ReceiveCrc; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc
        class SymbolPeriod; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod
        class TransmitCrc; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame> frame;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod> frame_period;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds> frame_seconds;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold> high_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc> receive_crc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod> symbol_period;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc> transmit_crc;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame : public ydk::Entity
{
    public:
        Frame();
        ~Frame();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold> threshold;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High> high;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod : public ydk::Entity
{
    public:
        FramePeriod();
        ~FramePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold> threshold;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High> high;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds : public ydk::Entity
{
    public:
        FrameSeconds();
        ~FrameSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold> threshold;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High> high;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold : public ydk::Entity
{
    public:
        HighThreshold();
        ~HighThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action> action;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc : public ydk::Entity
{
    public:
        ReceiveCrc();
        ~ReceiveCrc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold> threshold;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High> high;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod : public ydk::Entity
{
    public:
        SymbolPeriod();
        ~SymbolPeriod();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold> threshold;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High> high;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc : public ydk::Entity
{
    public:
        TransmitCrc();
        ~TransmitCrc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold> threshold;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High> high;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure : public ydk::Entity
{
    public:
        RemoteFailure();
        ~RemoteFailure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CriticalEvent; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent
        class DyingGasp; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp
        class LinkFault; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent> critical_event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp> dying_gasp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault> link_fault;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent : public ydk::Entity
{
    public:
        CriticalEvent();
        ~CriticalEvent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action> action;
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp : public ydk::Entity
{
    public:
        DyingGasp();
        ~DyingGasp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action> action; // presence node
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault : public ydk::Entity
{
    public:
        LinkFault();
        ~LinkFault();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action> action; // presence node
        
}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault


class Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action


class Native::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpu; //type: Native::Process::Cpu

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu> cpu;
        
}; // Native::Process


class Native::Process::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Process::Cpu::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold> threshold;
        
}; // Native::Process::Cpu


class Native::Process::Cpu::Threshold : public ydk::Entity
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

        class Type; //type: Native::Process::Cpu::Threshold::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type> type;
        
}; // Native::Process::Cpu::Threshold


class Native::Process::Cpu::Threshold::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interrupt; //type: Native::Process::Cpu::Threshold::Type::Interrupt
        class Process_; //type: Native::Process::Cpu::Threshold::Type::Process_
        class Total; //type: Native::Process::Cpu::Threshold::Type::Total

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt> interrupt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_> process;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total> total;
        
}; // Native::Process::Cpu::Threshold::Type

class Native::Line::Vty::Ip::NetmaskFormat::Format : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bit_count;
        static const ydk::Enum::YLeaf decimal;
        static const ydk::Enum::YLeaf hexadecimal;

};

class Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOut : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::Vty::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Line::Vty::Transport::Input::Input_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acercon;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf lapb_ta;
        static const ydk::Enum::YLeaf lat;
        static const ydk::Enum::YLeaf mop;
        static const ydk::Enum::YLeaf nasi;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pad;
        static const ydk::Enum::YLeaf rlogin;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf udptn;
        static const ydk::Enum::YLeaf v120;

};

class Native::Line::Vty::Transport::Output::Output_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acercon;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf lapb_ta;
        static const ydk::Enum::YLeaf lat;
        static const ydk::Enum::YLeaf mop;
        static const ydk::Enum::YLeaf nasi;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pad;
        static const ydk::Enum::YLeaf rlogin;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf udptn;
        static const ydk::Enum::YLeaf v120;

};

class Native::Line::Vty::Transport::Preferred::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acercon;
        static const ydk::Enum::YLeaf lat;
        static const ydk::Enum::YLeaf mop;
        static const ydk::Enum::YLeaf nasi;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pad;
        static const ydk::Enum::YLeaf rlogin;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf udptn;

};

class Native::Wsma::Profile::Listener::Transport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf https;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf tls;

};

class Native::Event::Manager::Applet::Authorization : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bypass;

};

class Native::Event::Manager::Applet::Event_::Track::State : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf counter;
        static const ydk::Enum::YLeaf gauge;
        static const ydk::Enum::YLeaf int_;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf octet;
        static const ydk::Enum::YLeaf string;
        static const ydk::Enum::YLeaf uint;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_171_ */

