#ifndef _CISCO_IOS_XE_NATIVE_82_
#define _CISCO_IOS_XE_NATIVE_82_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_81.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Line::Console::Exec : public ydk::Entity
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

        class Prompt; //type: Native::Line::Console::Exec::Prompt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Exec::Prompt> prompt;
        
}; // Native::Line::Console::Exec


class Native::Line::Console::Exec::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: empty

}; // Native::Line::Console::Exec::Prompt


class Native::Line::Console::ExecTimeout : public ydk::Entity
{
    public:
        ExecTimeout();
        ~ExecTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf seconds; //type: uint32

}; // Native::Line::Console::ExecTimeout


class Native::Line::Console::Flowcontrol : public ydk::Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

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
        ydk::YLeaf hardware; //type: empty
        ydk::YLeaf software; //type: empty

}; // Native::Line::Console::Flowcontrol


class Native::Line::Console::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint8

}; // Native::Line::Console::History


class Native::Line::Console::Ip : public ydk::Entity
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

        ydk::YLeaf tcp; //type: empty
        class NetmaskFormat; //type: Native::Line::Console::Ip::NetmaskFormat

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::Console::Ip


class Native::Line::Console::Ip::NetmaskFormat : public ydk::Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: Format
        class Format;

}; // Native::Line::Console::Ip::NetmaskFormat


class Native::Line::Console::Ipv6 : public ydk::Entity
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

        class AccessClass; //type: Native::Line::Console::Ipv6::AccessClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Ipv6::AccessClass> access_class;
        
}; // Native::Line::Console::Ipv6


class Native::Line::Console::Ipv6::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessClass_; //type: Native::Line::Console::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::Console::Ipv6::AccessClass


class Native::Line::Console::Ipv6::AccessClass::AccessClass_ : public ydk::Entity
{
    public:
        AccessClass_();
        ~AccessClass_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_class_name; //type: string
        ydk::YLeaf enumeration_in_out; //type: EnumerationInOut
        class EnumerationInOut;

}; // Native::Line::Console::Ipv6::AccessClass::AccessClass_


class Native::Line::Console::Logging : public ydk::Entity
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

        class Synchronous; //type: Native::Line::Console::Logging::Synchronous

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::Console::Logging


class Native::Line::Console::Logging::Synchronous : public ydk::Entity
{
    public:
        Synchronous();
        ~Synchronous();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Line::Console::Logging::Synchronous


class Native::Line::Console::Login : public ydk::Entity
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

        ydk::YLeaf local; //type: empty
        ydk::YLeaf authentication; //type: string

}; // Native::Line::Console::Login


class Native::Line::Console::MediaType : public ydk::Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rj45; //type: empty

}; // Native::Line::Console::MediaType


class Native::Line::Console::Modem : public ydk::Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Native::Line::Console::Modem


class Native::Line::Console::NoExec : public ydk::Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exec; //type: boolean

}; // Native::Line::Console::NoExec


class Native::Line::Console::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf character; //type: one of string, uint8
        ydk::YLeaf null; //type: uint8

}; // Native::Line::Console::Padding


class Native::Line::Console::Parity : public ydk::Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Native::Line::Console::Parity


class Native::Line::Console::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Native::Line::Console::Password


class Native::Line::Console::Prc : public ydk::Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expose; //type: empty
        ydk::YLeaf hide; //type: empty

}; // Native::Line::Console::Prc


class Native::Line::Console::Privilege : public ydk::Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Line::Console::Privilege::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Privilege::Level> level; // presence node
        
}; // Native::Line::Console::Privilege


class Native::Line::Console::Privilege::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8

}; // Native::Line::Console::Privilege::Level


class Native::Line::Console::SessionTimeout : public ydk::Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_timeout_value; //type: uint16
        ydk::YLeaf output; //type: empty

}; // Native::Line::Console::SessionTimeout


class Native::Line::Console::Telnet : public ydk::Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transparent; //type: empty

}; // Native::Line::Console::Telnet


class Native::Line::Console::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf login; //type: empty

}; // Native::Line::Console::Timeout


class Native::Line::Console::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Line::Console::Transport::Input
        class Output; //type: Native::Line::Console::Transport::Output
        class Preferred; //type: Native::Line::Console::Transport::Preferred

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Transport::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Transport::Output> output;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Console::Transport


class Native::Line::Console::Transport::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList input; //type: list of  Input_
        class Input_;

}; // Native::Line::Console::Transport::Input


class Native::Line::Console::Transport::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList output; //type: list of  Output_
        class Output_;

}; // Native::Line::Console::Transport::Output


class Native::Line::Console::Transport::Preferred : public ydk::Entity
{
    public:
        Preferred();
        ~Preferred();

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
        class Protocol;

}; // Native::Line::Console::Transport::Preferred


class Native::Line::Console::UsbInactivityTimeout : public ydk::Entity
{
    public:
        UsbInactivityTimeout();
        ~UsbInactivityTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_; //type: empty

}; // Native::Line::Console::UsbInactivityTimeout


class Native::Line::LineList : public ydk::Entity
{
    public:
        LineList();
        ~LineList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf first_number; //type: uint8
        ydk::YLeaf last_number; //type: uint16
        ydk::YLeaf no_activation_character; //type: boolean
        ydk::YLeaf activation_character; //type: one of string, uint8
        ydk::YLeaf data_character_bits; //type: uint8
        ydk::YLeaf domain_lookup; //type: empty
        ydk::YLeaf editing; //type: empty
        ydk::YLeaf exec_banner; //type: empty
        ydk::YLeaf exec_character_bits; //type: uint8
        ydk::YLeaf full_help; //type: empty
        ydk::YLeaf international; //type: empty
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf line; //type: uint8
        ydk::YLeaf location; //type: string
        ydk::YLeaf monitor; //type: empty
        ydk::YLeaf motd_banner; //type: empty
        ydk::YLeaf notify; //type: empty
        ydk::YLeaf rotary; //type: uint8
        ydk::YLeaf rxspeed; //type: uint32
        ydk::YLeaf special_character_bits; //type: uint8
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf start_character; //type: one of string, uint8
        ydk::YLeaf stop_character; //type: one of string, uint8
        ydk::YLeaf stopbits; //type: Stopbits
        ydk::YLeaf terminal_type; //type: string
        ydk::YLeaf txspeed; //type: uint32
        ydk::YLeaf width; //type: uint16
        class Authorization; //type: Native::Line::LineList::Authorization
        class AccessClass; //type: Native::Line::LineList::AccessClass
        class Autocommand; //type: Native::Line::LineList::Autocommand
        class AutocommandOptions; //type: Native::Line::LineList::AutocommandOptions
        class Databits; //type: Native::Line::LineList::Databits
        class EscapeCharacter; //type: Native::Line::LineList::EscapeCharacter
        class NoExec; //type: Native::Line::LineList::NoExec
        class Exec; //type: Native::Line::LineList::Exec
        class ExecTimeout; //type: Native::Line::LineList::ExecTimeout
        class Flowcontrol; //type: Native::Line::LineList::Flowcontrol
        class History; //type: Native::Line::LineList::History
        class Ip; //type: Native::Line::LineList::Ip
        class Ipv6; //type: Native::Line::LineList::Ipv6
        class Logging; //type: Native::Line::LineList::Logging
        class Login; //type: Native::Line::LineList::Login
        class MediaType; //type: Native::Line::LineList::MediaType
        class Modem; //type: Native::Line::LineList::Modem
        class Padding; //type: Native::Line::LineList::Padding
        class Parity; //type: Native::Line::LineList::Parity
        class Password; //type: Native::Line::LineList::Password
        class Prc; //type: Native::Line::LineList::Prc
        class Privilege; //type: Native::Line::LineList::Privilege
        class SessionTimeout; //type: Native::Line::LineList::SessionTimeout
        class Timeout; //type: Native::Line::LineList::Timeout
        class Telnet; //type: Native::Line::LineList::Telnet
        class Transport; //type: Native::Line::LineList::Transport
        class UsbInactivityTimeout; //type: Native::Line::LineList::UsbInactivityTimeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AccessClass> access_class;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Autocommand> autocommand;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Databits> databits;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::EscapeCharacter> escape_character;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Exec> exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::ExecTimeout> exec_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::History> history; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Login> login; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::MediaType> media_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Modem> modem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::NoExec> no_exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Padding> padding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Parity> parity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Prc> prc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Privilege> privilege;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::SessionTimeout> session_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Telnet> telnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::UsbInactivityTimeout> usb_inactivity_timeout;
                class Stopbits;

}; // Native::Line::LineList


class Native::Line::LineList::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AcccessList; //type: Native::Line::LineList::AccessClass::AcccessList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::LineList::AccessClass


class Native::Line::LineList::AccessClass::AcccessList : public ydk::Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf access_list; //type: one of string, uint16
        ydk::YLeaf vrf_also; //type: empty
        class Direction;

}; // Native::Line::LineList::AccessClass::AcccessList


class Native::Line::LineList::Authorization : public ydk::Entity
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

        class Command; //type: Native::Line::LineList::Authorization::Command

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Authorization::Command> command;
        
}; // Native::Line::LineList::Authorization


class Native::Line::LineList::Authorization::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_level; //type: uint8
        ydk::YLeaf auth_name; //type: string

}; // Native::Line::LineList::Authorization::Command


class Native::Line::LineList::Autocommand : public ydk::Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::LineList::Autocommand::NoSuppressLinenumber

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::LineList::Autocommand


class Native::Line::LineList::Autocommand::NoSuppressLinenumber : public ydk::Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Line::LineList::Autocommand::NoSuppressLinenumber


class Native::Line::LineList::AutocommandOptions : public ydk::Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AbortCharacter; //type: Native::Line::LineList::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::LineList::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::LineList::AutocommandOptions::Nohangup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::LineList::AutocommandOptions


class Native::Line::LineList::AutocommandOptions::AbortCharacter : public ydk::Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf character; //type: one of string, uint8

}; // Native::Line::LineList::AutocommandOptions::AbortCharacter


class Native::Line::LineList::AutocommandOptions::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: uint8

}; // Native::Line::LineList::AutocommandOptions::Delay


class Native::Line::LineList::AutocommandOptions::Nohangup : public ydk::Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf abort_character; //type: empty
        ydk::YLeaf delay; //type: empty

}; // Native::Line::LineList::AutocommandOptions::Nohangup


class Native::Line::LineList::Databits : public ydk::Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_to_5; //type: empty
        ydk::YLeaf set_to_6; //type: empty
        ydk::YLeaf set_to_7; //type: empty
        ydk::YLeaf set_to_8; //type: empty

}; // Native::Line::LineList::Databits


class Native::Line::LineList::EscapeCharacter : public ydk::Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf char_; //type: one of string, enumeration, uint8
        ydk::YLeaf soft; //type: empty
        class Char_;

}; // Native::Line::LineList::EscapeCharacter


class Native::Line::LineList::Exec : public ydk::Entity
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

        class Prompt; //type: Native::Line::LineList::Exec::Prompt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Exec::Prompt> prompt;
        
}; // Native::Line::LineList::Exec


class Native::Line::LineList::Exec::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: empty

}; // Native::Line::LineList::Exec::Prompt


class Native::Line::LineList::ExecTimeout : public ydk::Entity
{
    public:
        ExecTimeout();
        ~ExecTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf seconds; //type: uint32

}; // Native::Line::LineList::ExecTimeout


class Native::Line::LineList::Flowcontrol : public ydk::Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

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
        ydk::YLeaf hardware; //type: empty
        ydk::YLeaf software; //type: empty

}; // Native::Line::LineList::Flowcontrol


class Native::Line::LineList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint8

}; // Native::Line::LineList::History


class Native::Line::LineList::Ip : public ydk::Entity
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

        ydk::YLeaf tcp; //type: empty
        class NetmaskFormat; //type: Native::Line::LineList::Ip::NetmaskFormat

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::LineList::Ip


class Native::Line::LineList::Ip::NetmaskFormat : public ydk::Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: Format
        class Format;

}; // Native::Line::LineList::Ip::NetmaskFormat


class Native::Line::LineList::Ipv6 : public ydk::Entity
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

        class AccessClass; //type: Native::Line::LineList::Ipv6::AccessClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Ipv6::AccessClass> access_class;
        
}; // Native::Line::LineList::Ipv6


class Native::Line::LineList::Ipv6::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessClass_; //type: Native::Line::LineList::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::LineList::Ipv6::AccessClass


class Native::Line::LineList::Ipv6::AccessClass::AccessClass_ : public ydk::Entity
{
    public:
        AccessClass_();
        ~AccessClass_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_class_name; //type: string
        ydk::YLeaf enumeration_in_out; //type: EnumerationInOut
        class EnumerationInOut;

}; // Native::Line::LineList::Ipv6::AccessClass::AccessClass_


class Native::Line::LineList::Logging : public ydk::Entity
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

        class Synchronous; //type: Native::Line::LineList::Logging::Synchronous

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::LineList::Logging


class Native::Line::LineList::Logging::Synchronous : public ydk::Entity
{
    public:
        Synchronous();
        ~Synchronous();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Line::LineList::Logging::Synchronous


class Native::Line::LineList::Login : public ydk::Entity
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

        ydk::YLeaf local; //type: empty
        ydk::YLeaf authentication; //type: string

}; // Native::Line::LineList::Login


class Native::Line::LineList::MediaType : public ydk::Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rj45; //type: empty

}; // Native::Line::LineList::MediaType


class Native::Line::LineList::Modem : public ydk::Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Native::Line::LineList::Modem


class Native::Line::LineList::NoExec : public ydk::Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exec; //type: boolean

}; // Native::Line::LineList::NoExec


class Native::Line::LineList::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf character; //type: one of string, uint8
        ydk::YLeaf null; //type: uint8

}; // Native::Line::LineList::Padding


class Native::Line::LineList::Parity : public ydk::Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Native::Line::LineList::Parity


class Native::Line::LineList::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Native::Line::LineList::Password


class Native::Line::LineList::Prc : public ydk::Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expose; //type: empty
        ydk::YLeaf hide; //type: empty

}; // Native::Line::LineList::Prc


class Native::Line::LineList::Privilege : public ydk::Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Line::LineList::Privilege::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Privilege::Level> level; // presence node
        
}; // Native::Line::LineList::Privilege


class Native::Line::LineList::Privilege::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8

}; // Native::Line::LineList::Privilege::Level


class Native::Line::LineList::SessionTimeout : public ydk::Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_timeout_value; //type: uint16
        ydk::YLeaf output; //type: empty

}; // Native::Line::LineList::SessionTimeout


class Native::Line::LineList::Telnet : public ydk::Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transparent; //type: empty

}; // Native::Line::LineList::Telnet


class Native::Line::LineList::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf login; //type: empty

}; // Native::Line::LineList::Timeout


class Native::Line::LineList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Line::LineList::Transport::Input
        class Output; //type: Native::Line::LineList::Transport::Output
        class Preferred; //type: Native::Line::LineList::Transport::Preferred

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Transport::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Transport::Output> output;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::LineList::Transport


class Native::Line::LineList::Transport::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList input; //type: list of  Input_
        class Input_;

}; // Native::Line::LineList::Transport::Input


class Native::Line::LineList::Transport::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList output; //type: list of  Output_
        class Output_;

}; // Native::Line::LineList::Transport::Output


class Native::Line::LineList::Transport::Preferred : public ydk::Entity
{
    public:
        Preferred();
        ~Preferred();

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
        class Protocol;

}; // Native::Line::LineList::Transport::Preferred


class Native::Line::LineList::UsbInactivityTimeout : public ydk::Entity
{
    public:
        UsbInactivityTimeout();
        ~UsbInactivityTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_; //type: empty

}; // Native::Line::LineList::UsbInactivityTimeout


class Native::Line::Vty : public ydk::Entity
{
    public:
        Vty();
        ~Vty();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf first; //type: uint16
        ydk::YLeaf last; //type: uint16
        ydk::YLeaf no_activation_character; //type: boolean
        ydk::YLeaf activation_character; //type: one of string, uint8
        ydk::YLeaf data_character_bits; //type: uint8
        ydk::YLeaf domain_lookup; //type: empty
        ydk::YLeaf editing; //type: empty
        ydk::YLeaf exec_banner; //type: empty
        ydk::YLeaf exec_character_bits; //type: uint8
        ydk::YLeaf full_help; //type: empty
        ydk::YLeaf international; //type: empty
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf line; //type: uint8
        ydk::YLeaf location; //type: string
        ydk::YLeaf monitor; //type: empty
        ydk::YLeaf motd_banner; //type: empty
        ydk::YLeaf notify; //type: empty
        ydk::YLeaf rotary; //type: uint8
        ydk::YLeaf rxspeed; //type: uint32
        ydk::YLeaf special_character_bits; //type: uint8
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf start_character; //type: one of string, uint8
        ydk::YLeaf stop_character; //type: one of string, uint8
        ydk::YLeaf stopbits; //type: Stopbits
        ydk::YLeaf terminal_type; //type: string
        ydk::YLeaf txspeed; //type: uint32
        ydk::YLeaf width; //type: uint16
        class Authorization; //type: Native::Line::Vty::Authorization
        class AccessClass; //type: Native::Line::Vty::AccessClass
        class Autocommand; //type: Native::Line::Vty::Autocommand
        class AutocommandOptions; //type: Native::Line::Vty::AutocommandOptions
        class Databits; //type: Native::Line::Vty::Databits
        class EscapeCharacter; //type: Native::Line::Vty::EscapeCharacter
        class NoExec; //type: Native::Line::Vty::NoExec
        class Exec; //type: Native::Line::Vty::Exec
        class ExecTimeout; //type: Native::Line::Vty::ExecTimeout
        class Flowcontrol; //type: Native::Line::Vty::Flowcontrol
        class History; //type: Native::Line::Vty::History
        class Ip; //type: Native::Line::Vty::Ip
        class Ipv6; //type: Native::Line::Vty::Ipv6
        class Logging; //type: Native::Line::Vty::Logging
        class Login; //type: Native::Line::Vty::Login
        class MediaType; //type: Native::Line::Vty::MediaType
        class Modem; //type: Native::Line::Vty::Modem
        class Padding; //type: Native::Line::Vty::Padding
        class Parity; //type: Native::Line::Vty::Parity
        class Password; //type: Native::Line::Vty::Password
        class Prc; //type: Native::Line::Vty::Prc
        class Privilege; //type: Native::Line::Vty::Privilege
        class SessionTimeout; //type: Native::Line::Vty::SessionTimeout
        class Timeout; //type: Native::Line::Vty::Timeout
        class Telnet; //type: Native::Line::Vty::Telnet
        class Transport; //type: Native::Line::Vty::Transport
        class UsbInactivityTimeout; //type: Native::Line::Vty::UsbInactivityTimeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::AccessClass> access_class;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Autocommand> autocommand;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Databits> databits;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::EscapeCharacter> escape_character;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Exec> exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::ExecTimeout> exec_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::History> history; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Login> login; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::MediaType> media_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Modem> modem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::NoExec> no_exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Padding> padding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Parity> parity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Prc> prc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Privilege> privilege;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::SessionTimeout> session_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Telnet> telnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::UsbInactivityTimeout> usb_inactivity_timeout;
                class Stopbits;

}; // Native::Line::Vty


class Native::Line::Vty::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AcccessList; //type: Native::Line::Vty::AccessClass::AcccessList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Vty::AccessClass


class Native::Line::Vty::AccessClass::AcccessList : public ydk::Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf access_list; //type: one of string, uint16
        ydk::YLeaf vrf_also; //type: empty
        class Direction;

}; // Native::Line::Vty::AccessClass::AcccessList


class Native::Line::Vty::Authorization : public ydk::Entity
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

        class Command; //type: Native::Line::Vty::Authorization::Command

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Authorization::Command> command;
        
}; // Native::Line::Vty::Authorization


class Native::Line::Vty::Authorization::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_level; //type: uint8
        ydk::YLeaf auth_name; //type: string

}; // Native::Line::Vty::Authorization::Command


class Native::Line::Vty::Autocommand : public ydk::Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::Vty::Autocommand::NoSuppressLinenumber

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Vty::Autocommand


class Native::Line::Vty::Autocommand::NoSuppressLinenumber : public ydk::Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Line::Vty::Autocommand::NoSuppressLinenumber


class Native::Line::Vty::AutocommandOptions : public ydk::Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AbortCharacter; //type: Native::Line::Vty::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Vty::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Vty::AutocommandOptions::Nohangup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Vty::AutocommandOptions


class Native::Line::Vty::AutocommandOptions::AbortCharacter : public ydk::Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf character; //type: one of string, uint8

}; // Native::Line::Vty::AutocommandOptions::AbortCharacter


class Native::Line::Vty::AutocommandOptions::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: uint8

}; // Native::Line::Vty::AutocommandOptions::Delay


class Native::Line::Vty::AutocommandOptions::Nohangup : public ydk::Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf abort_character; //type: empty
        ydk::YLeaf delay; //type: empty

}; // Native::Line::Vty::AutocommandOptions::Nohangup


class Native::Line::Vty::Databits : public ydk::Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_to_5; //type: empty
        ydk::YLeaf set_to_6; //type: empty
        ydk::YLeaf set_to_7; //type: empty
        ydk::YLeaf set_to_8; //type: empty

}; // Native::Line::Vty::Databits


class Native::Line::Vty::EscapeCharacter : public ydk::Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf char_; //type: one of string, enumeration, uint8
        ydk::YLeaf soft; //type: empty
        class Char_;

}; // Native::Line::Vty::EscapeCharacter


class Native::Line::Vty::Exec : public ydk::Entity
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

        class Prompt; //type: Native::Line::Vty::Exec::Prompt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Exec::Prompt> prompt;
        
}; // Native::Line::Vty::Exec


class Native::Line::Vty::Exec::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: empty

}; // Native::Line::Vty::Exec::Prompt


class Native::Line::Vty::ExecTimeout : public ydk::Entity
{
    public:
        ExecTimeout();
        ~ExecTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp; //type: empty
        class NetmaskFormat; //type: Native::Line::Vty::Ip::NetmaskFormat

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::Vty::Ip


class Native::Line::Vty::Ip::NetmaskFormat : public ydk::Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessClass; //type: Native::Line::Vty::Ipv6::AccessClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Ipv6::AccessClass> access_class;
        
}; // Native::Line::Vty::Ipv6


class Native::Line::Vty::Ipv6::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessClass_; //type: Native::Line::Vty::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::Vty::Ipv6::AccessClass


class Native::Line::Vty::Ipv6::AccessClass::AccessClass_ : public ydk::Entity
{
    public:
        AccessClass_();
        ~AccessClass_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Synchronous; //type: Native::Line::Vty::Logging::Synchronous

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::Vty::Logging


class Native::Line::Vty::Logging::Synchronous : public ydk::Entity
{
    public:
        Synchronous();
        ~Synchronous();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Native::Line::Vty::NoExec : public ydk::Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exec; //type: boolean

}; // Native::Line::Vty::NoExec


class Native::Line::Vty::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Line::Vty::Privilege::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Privilege::Level> level; // presence node
        
}; // Native::Line::Vty::Privilege


class Native::Line::Vty::Privilege::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_timeout_value; //type: uint16
        ydk::YLeaf output; //type: empty

}; // Native::Line::Vty::SessionTimeout


class Native::Line::Vty::Telnet : public ydk::Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transparent; //type: empty

}; // Native::Line::Vty::Telnet


class Native::Line::Vty::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf login; //type: empty

}; // Native::Line::Vty::Timeout


class Native::Line::Vty::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Line::Vty::Transport::Input
        class Output; //type: Native::Line::Vty::Transport::Output
        class Preferred; //type: Native::Line::Vty::Transport::Preferred

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Transport::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Transport::Output> output;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Vty::Transport


class Native::Line::Vty::Transport::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList input; //type: list of  Input_
        class Input_;

}; // Native::Line::Vty::Transport::Input


class Native::Line::Vty::Transport::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList output; //type: list of  Output_
        class Output_;

}; // Native::Line::Vty::Transport::Output


class Native::Line::Vty::Transport::Preferred : public ydk::Entity
{
    public:
        Preferred();
        ~Preferred();

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
        class Protocol;

}; // Native::Line::Vty::Transport::Preferred


class Native::Line::Vty::UsbInactivityTimeout : public ydk::Entity
{
    public:
        UsbInactivityTimeout();
        ~UsbInactivityTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_; //type: empty

}; // Native::Line::Vty::UsbInactivityTimeout


class Native::Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf run; //type: empty

}; // Native::Lldp


class Native::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CivicLocation; //type: Native::Location::CivicLocation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Location::CivicLocation> civic_location;
        
}; // Native::Location


class Native::Location::CivicLocation : public ydk::Entity
{
    public:
        CivicLocation();
        ~CivicLocation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Identifier; //type: Native::Location::CivicLocation::Identifier

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Location::CivicLocation::Identifier> > identifier;
        
}; // Native::Location::CivicLocation


class Native::Location::CivicLocation::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf building; //type: string
        ydk::YLeaf floor; //type: string
        ydk::YLeaf landmark; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf number; //type: string

}; // Native::Location::CivicLocation::Identifier


class Native::Logging : public ydk::Entity
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

        ydk::YLeaf alarm; //type: one of enumeration, uint8
        ydk::YLeaf facility; //type: Facility
        ydk::YLeaf hostip; //type: one of union, string
        ydk::YLeaf snmp_authfail; //type: empty
        ydk::YLeaf buginf; //type: empty
        ydk::YLeaf userinfo; //type: empty
        class Discriminator; //type: Native::Logging::Discriminator
        class Persistent; //type: Native::Logging::Persistent
        class MonitorConf; //type: Native::Logging::MonitorConf
        class Monitor; //type: Native::Logging::Monitor
        class Buffered; //type: Native::Logging::Buffered
        class ConsoleConf; //type: Native::Logging::ConsoleConf
        class Console; //type: Native::Logging::Console
        class Event; //type: Native::Logging::Event
        class Esm; //type: Native::Logging::Esm
        class History; //type: Native::Logging::History
        class Host; //type: Native::Logging::Host
        class OriginId; //type: Native::Logging::OriginId
        class RateLimitConf; //type: Native::Logging::RateLimitConf
        class RateLimit; //type: Native::Logging::RateLimit
        class SourceInterface; //type: Native::Logging::SourceInterface
        class SnmpTrap; //type: Native::Logging::SnmpTrap
        class Trap; //type: Native::Logging::Trap
        class File; //type: Native::Logging::File

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Buffered> buffered; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Console> console; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::ConsoleConf> console_conf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Discriminator> > discriminator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Esm> esm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Event> event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::File> file;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::History> history;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Monitor> monitor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::MonitorConf> monitor_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::OriginId> origin_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Persistent> persistent; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit> rate_limit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimitConf> rate_limit_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::SnmpTrap> snmp_trap;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::SourceInterface> > source_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Trap> trap; // presence node
                class Alarm;
        class Facility;

}; // Native::Logging


class Native::Logging::Buffered : public ydk::Entity
{
    public:
        Buffered();
        ~Buffered();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf severity; //type: one of enumeration, uint16
        ydk::YLeaf xxml; //type: uint32
        class Discriminator; //type: Native::Logging::Buffered::Discriminator
        class Size; //type: Native::Logging::Buffered::Size

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Buffered::Discriminator> > discriminator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Buffered::Size> size;
        
}; // Native::Logging::Buffered


class Native::Logging::Buffered::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

        bool has_data() const override;
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
        ydk::YLeaf size_value; //type: uint32
        ydk::YLeaf severity; //type: one of enumeration, uint16

}; // Native::Logging::Buffered::Discriminator


class Native::Logging::Buffered::Size : public ydk::Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf size_value; //type: uint32
        ydk::YLeaf severity; //type: one of enumeration, uint16

}; // Native::Logging::Buffered::Size


class Native::Logging::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf filtered; //type: empty
        ydk::YLeaf guaranteed; //type: empty
        ydk::YLeaf xxml; //type: one of enumeration, uint16
        ydk::YLeaf severity; //type: one of enumeration, uint16
        class Discriminator; //type: Native::Logging::Console::Discriminator

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Console::Discriminator> > discriminator;
        
}; // Native::Logging::Console


class Native::Logging::Console::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

        bool has_data() const override;
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
        ydk::YLeaf severity; //type: one of enumeration, uint16

}; // Native::Logging::Console::Discriminator


class Native::Logging::ConsoleConf : public ydk::Entity
{
    public:
        ConsoleConf();
        ~ConsoleConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf console; //type: boolean

}; // Native::Logging::ConsoleConf


class Native::Logging::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

        bool has_data() const override;
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
        class MsgBody; //type: Native::Logging::Discriminator::MsgBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Discriminator::MsgBody> msg_body;
        
}; // Native::Logging::Discriminator


class Native::Logging::Discriminator::MsgBody : public ydk::Entity
{
    public:
        MsgBody();
        ~MsgBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drops; //type: string
        ydk::YLeaf includes; //type: string

}; // Native::Logging::Discriminator::MsgBody


class Native::Logging::Esm : public ydk::Entity
{
    public:
        Esm();
        ~Esm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf config; //type: empty

}; // Native::Logging::Esm


class Native::Logging::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LinkStatus; //type: Native::Logging::Event::LinkStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Event::LinkStatus> link_status;
        
}; // Native::Logging::Event


class Native::Logging::Event::LinkStatus : public ydk::Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf boot; //type: empty
        ydk::YLeaf global; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Logging::Event::LinkStatus


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
        ydk::YLeaf severity; //type: one of enumeration, uint16

}; // Native::Logging::File


class Native::Logging::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf severity_level; //type: one of enumeration, uint8
        class SeverityLevel;

}; // Native::Logging::History


class Native::Logging::Host : public ydk::Entity
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

        class Ipv4HostList; //type: Native::Logging::Host::Ipv4HostList
        class Ipv4HostTransportList; //type: Native::Logging::Host::Ipv4HostTransportList
        class Ipv4HostVrfList; //type: Native::Logging::Host::Ipv4HostVrfList
        class Ipv4HostVrfTransportList; //type: Native::Logging::Host::Ipv4HostVrfTransportList
        class Ipv6; //type: Native::Logging::Host::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostList> > ipv4_host_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList> > ipv4_host_transport_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfList> > ipv4_host_vrf_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList> > ipv4_host_vrf_transport_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6> ipv6;
        
}; // Native::Logging::Host


class Native::Logging::Host::Ipv4HostList : public ydk::Entity
{
    public:
        Ipv4HostList();
        ~Ipv4HostList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_host; //type: one of union, string

}; // Native::Logging::Host::Ipv4HostList


class Native::Logging::Host::Ipv4HostTransportList : public ydk::Entity
{
    public:
        Ipv4HostTransportList();
        ~Ipv4HostTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_host; //type: one of union, string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv4HostTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv4HostTransportList


class Native::Logging::Host::Ipv4HostTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv4HostTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport::Udp> udp;
        
}; // Native::Logging::Host::Ipv4HostTransportList::Transport


class Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp


class Native::Logging::Host::Ipv4HostTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostTransportList::Transport::Udp


class Native::Logging::Host::Ipv4HostVrfList : public ydk::Entity
{
    public:
        Ipv4HostVrfList();
        ~Ipv4HostVrfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_host; //type: one of union, string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string

}; // Native::Logging::Host::Ipv4HostVrfList


class Native::Logging::Host::Ipv4HostVrfTransportList : public ydk::Entity
{
    public:
        Ipv4HostVrfTransportList();
        ~Ipv4HostVrfTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_host; //type: one of union, string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv4HostVrfTransportList


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp> udp;
        
}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp


class Native::Logging::Host::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ipv6HostList; //type: Native::Logging::Host::Ipv6::Ipv6HostList
        class Ipv6HostTransportList; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList
        class Ipv6HostVrfList; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfList
        class Ipv6HostVrfTransportList; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostList> > ipv6_host_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList> > ipv6_host_transport_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfList> > ipv6_host_vrf_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList> > ipv6_host_vrf_transport_list;
        
}; // Native::Logging::Host::Ipv6


class Native::Logging::Host::Ipv6::Ipv6HostList : public ydk::Entity
{
    public:
        Ipv6HostList();
        ~Ipv6HostList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6_host; //type: string

}; // Native::Logging::Host::Ipv6::Ipv6HostList


class Native::Logging::Host::Ipv6::Ipv6HostTransportList : public ydk::Entity
{
    public:
        Ipv6HostTransportList();
        ~Ipv6HostTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp> udp;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp

class Native::Line::Console::Ip::NetmaskFormat::Format : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bit_count;
        static const ydk::Enum::YLeaf decimal;
        static const ydk::Enum::YLeaf hexadecimal;

};

class Native::Line::Console::Ipv6::AccessClass::AccessClass_::EnumerationInOut : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::Console::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Line::Console::Transport::Input::Input_ : public ydk::Enum
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

class Native::Line::Console::Transport::Output::Output_ : public ydk::Enum
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

class Native::Line::Console::Transport::Preferred::Protocol : public ydk::Enum
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

class Native::Line::LineList::Stopbits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_1__DOT__5;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Line::LineList::AccessClass::AcccessList::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::LineList::EscapeCharacter::Char_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf BREAK;
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf NONE;

};

class Native::Line::LineList::Ip::NetmaskFormat::Format : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bit_count;
        static const ydk::Enum::YLeaf decimal;
        static const ydk::Enum::YLeaf hexadecimal;

};

class Native::Line::LineList::Ipv6::AccessClass::AccessClass_::EnumerationInOut : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::LineList::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Line::LineList::Transport::Input::Input_ : public ydk::Enum
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

class Native::Line::LineList::Transport::Output::Output_ : public ydk::Enum
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

class Native::Line::LineList::Transport::Preferred::Protocol : public ydk::Enum
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

class Native::Line::Vty::Stopbits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_1__DOT__5;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Line::Vty::AccessClass::AcccessList::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::Vty::EscapeCharacter::Char_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf BREAK;
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf NONE;

};

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

class Native::Logging::Alarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;

};

class Native::Logging::Facility : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf cron;
        static const ydk::Enum::YLeaf daemon;
        static const ydk::Enum::YLeaf kern;
        static const ydk::Enum::YLeaf local0;
        static const ydk::Enum::YLeaf local1;
        static const ydk::Enum::YLeaf local2;
        static const ydk::Enum::YLeaf local3;
        static const ydk::Enum::YLeaf local4;
        static const ydk::Enum::YLeaf local5;
        static const ydk::Enum::YLeaf local6;
        static const ydk::Enum::YLeaf local7;
        static const ydk::Enum::YLeaf lpr;
        static const ydk::Enum::YLeaf mail;
        static const ydk::Enum::YLeaf news;
        static const ydk::Enum::YLeaf sys10;
        static const ydk::Enum::YLeaf sys11;
        static const ydk::Enum::YLeaf sys12;
        static const ydk::Enum::YLeaf sys13;
        static const ydk::Enum::YLeaf sys14;
        static const ydk::Enum::YLeaf sys9;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf uucp;

};

class Native::Logging::History::SeverityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf warnings;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_82_ */

