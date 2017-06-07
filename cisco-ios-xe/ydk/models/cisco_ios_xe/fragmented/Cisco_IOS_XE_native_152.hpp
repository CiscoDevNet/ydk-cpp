#ifndef _CISCO_IOS_XE_NATIVE_152_
#define _CISCO_IOS_XE_NATIVE_152_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_151.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Line::LineList::Databits : public Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_to_5; //type: empty
        YLeaf set_to_6; //type: empty
        YLeaf set_to_7; //type: empty
        YLeaf set_to_8; //type: empty

}; // Native::Line::LineList::Databits


class Native::Line::LineList::EscapeCharacter : public Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf char; //type: one of uint8, enumeration, string
        YLeaf soft; //type: empty
        class CharEnum;

}; // Native::Line::LineList::EscapeCharacter


class Native::Line::LineList::NoExec : public Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exec; //type: boolean

}; // Native::Line::LineList::NoExec


class Native::Line::LineList::Exec : public Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prompt; //type: Native::Line::LineList::Exec::Prompt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Exec::Prompt> prompt;
        
}; // Native::Line::LineList::Exec


class Native::Line::LineList::Exec::Prompt : public Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timestamp; //type: empty

}; // Native::Line::LineList::Exec::Prompt


class Native::Line::LineList::ExecTimeout : public Entity
{
    public:
        ExecTimeout();
        ~ExecTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minutes; //type: uint32
        YLeaf seconds; //type: uint32

}; // Native::Line::LineList::ExecTimeout


class Native::Line::LineList::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf hardware; //type: empty
        YLeaf software; //type: empty

}; // Native::Line::LineList::Flowcontrol


class Native::Line::LineList::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint8

}; // Native::Line::LineList::History


class Native::Line::LineList::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcp; //type: empty
        class NetmaskFormat; //type: Native::Line::LineList::Ip::NetmaskFormat

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::LineList::Ip


class Native::Line::LineList::Ip::NetmaskFormat : public Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf format; //type: FormatEnum
        class FormatEnum;

}; // Native::Line::LineList::Ip::NetmaskFormat


class Native::Line::LineList::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessClass; //type: Native::Line::LineList::Ipv6::AccessClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ipv6::AccessClass> access_class;
        
}; // Native::Line::LineList::Ipv6


class Native::Line::LineList::Ipv6::AccessClass : public Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessClass_; //type: Native::Line::LineList::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::LineList::Ipv6::AccessClass


class Native::Line::LineList::Ipv6::AccessClass::AccessClass_ : public Entity
{
    public:
        AccessClass_();
        ~AccessClass_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_class_name; //type: string
        YLeaf enumeration_in_out; //type: EnumerationInOutEnum
        class EnumerationInOutEnum;

}; // Native::Line::LineList::Ipv6::AccessClass::AccessClass_


class Native::Line::LineList::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Synchronous; //type: Native::Line::LineList::Logging::Synchronous

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::LineList::Logging


class Native::Line::LineList::Logging::Synchronous : public Entity
{
    public:
        Synchronous();
        ~Synchronous();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Line::LineList::Logging::Synchronous


class Native::Line::LineList::Login : public Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: empty
        YLeaf authentication; //type: string

}; // Native::Line::LineList::Login


class Native::Line::LineList::MediaType : public Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rj45; //type: empty

}; // Native::Line::LineList::MediaType


class Native::Line::LineList::Modem : public Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cts_alarm; //type: empty
        YLeaf dtr_active; //type: empty
        YLeaf dialin; //type: empty
        YLeaf host; //type: empty
        YLeaf inout; //type: empty
        YLeaf printer; //type: empty
        YLeaf answer_timeout; //type: empty
        YLeaf dtr_delay; //type: empty

}; // Native::Line::LineList::Modem


class Native::Line::LineList::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf character; //type: one of uint8, string
        YLeaf null; //type: uint8

}; // Native::Line::LineList::Padding


class Native::Line::LineList::Parity : public Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf even; //type: empty
        YLeaf mark; //type: empty
        YLeaf none; //type: empty
        YLeaf odd; //type: empty
        YLeaf space; //type: empty

}; // Native::Line::LineList::Parity


class Native::Line::LineList::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8
        YLeaf type; //type: TypeEnum
        YLeaf secret; //type: string
        class TypeEnum;

}; // Native::Line::LineList::Password


class Native::Line::LineList::Prc : public Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expose; //type: empty
        YLeaf hide; //type: empty

}; // Native::Line::LineList::Prc


class Native::Line::LineList::Privilege : public Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Line::LineList::Privilege::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Privilege::Level> level; // presence node
        
}; // Native::Line::LineList::Privilege


class Native::Line::LineList::Privilege::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8

}; // Native::Line::LineList::Privilege::Level


class Native::Line::LineList::SessionTimeout : public Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_timeout_value; //type: uint16
        YLeaf output; //type: empty

}; // Native::Line::LineList::SessionTimeout


class Native::Line::LineList::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf login; //type: empty

}; // Native::Line::LineList::Timeout


class Native::Line::LineList::Telnet : public Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transparent; //type: empty

}; // Native::Line::LineList::Telnet


class Native::Line::LineList::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Line::LineList::Transport::Input
        class Output; //type: Native::Line::LineList::Transport::Output
        class Preferred; //type: Native::Line::LineList::Transport::Preferred

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Transport::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Transport::Output> output;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::LineList::Transport


class Native::Line::LineList::Transport::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList input; //type: list of  InputEnum
        class InputEnum;

}; // Native::Line::LineList::Transport::Input


class Native::Line::LineList::Transport::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList output; //type: list of  OutputEnum
        class OutputEnum;

}; // Native::Line::LineList::Transport::Output


class Native::Line::LineList::Transport::Preferred : public Entity
{
    public:
        Preferred();
        ~Preferred();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::Line::LineList::Transport::Preferred


class Native::Line::LineList::UsbInactivityTimeout : public Entity
{
    public:
        UsbInactivityTimeout();
        ~UsbInactivityTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: empty

}; // Native::Line::LineList::UsbInactivityTimeout


class Native::Line::LineList::VacantMessage : public Entity
{
    public:
        VacantMessage();
        ~VacantMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf banner; //type: string

}; // Native::Line::LineList::VacantMessage


class Native::Line::Aux : public Entity
{
    public:
        Aux();
        ~Aux();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf first; //type: FirstEnum
        YLeaf no_activation_character; //type: boolean
        YLeaf activation_character; //type: one of string, uint8
        YLeaf data_character_bits; //type: uint8
        YLeaf domain_lookup; //type: empty
        YLeaf editing; //type: empty
        YLeaf exec_banner; //type: empty
        YLeaf exec_character_bits; //type: uint8
        YLeaf full_help; //type: empty
        YLeaf international; //type: empty
        YLeaf length; //type: uint16
        YLeaf line; //type: uint8
        YLeaf location; //type: string
        YLeaf monitor; //type: empty
        YLeaf motd_banner; //type: empty
        YLeaf notify; //type: empty
        YLeaf refuse_message; //type: string
        YLeaf rotary; //type: uint8
        YLeaf rxspeed; //type: uint32
        YLeaf special_character_bits; //type: uint8
        YLeaf speed; //type: uint32
        YLeaf start_character; //type: one of uint8, string
        YLeaf stop_character; //type: one of uint8, string
        YLeaf stopbits; //type: StopbitsEnum
        YLeaf terminal_type; //type: string
        YLeaf txspeed; //type: uint32
        YLeaf width; //type: uint16
        class Authorization; //type: Native::Line::Aux::Authorization
        class AccessClass; //type: Native::Line::Aux::AccessClass
        class Autocommand; //type: Native::Line::Aux::Autocommand
        class AutocommandOptions; //type: Native::Line::Aux::AutocommandOptions
        class Databits; //type: Native::Line::Aux::Databits
        class EscapeCharacter; //type: Native::Line::Aux::EscapeCharacter
        class NoExec; //type: Native::Line::Aux::NoExec
        class Exec; //type: Native::Line::Aux::Exec
        class ExecTimeout; //type: Native::Line::Aux::ExecTimeout
        class Flowcontrol; //type: Native::Line::Aux::Flowcontrol
        class History; //type: Native::Line::Aux::History
        class Ip; //type: Native::Line::Aux::Ip
        class Ipv6; //type: Native::Line::Aux::Ipv6
        class Logging; //type: Native::Line::Aux::Logging
        class Login; //type: Native::Line::Aux::Login
        class MediaType; //type: Native::Line::Aux::MediaType
        class Modem; //type: Native::Line::Aux::Modem
        class Padding; //type: Native::Line::Aux::Padding
        class Parity; //type: Native::Line::Aux::Parity
        class Password; //type: Native::Line::Aux::Password
        class Prc; //type: Native::Line::Aux::Prc
        class Privilege; //type: Native::Line::Aux::Privilege
        class SessionTimeout; //type: Native::Line::Aux::SessionTimeout
        class Timeout; //type: Native::Line::Aux::Timeout
        class Telnet; //type: Native::Line::Aux::Telnet
        class Transport; //type: Native::Line::Aux::Transport
        class UsbInactivityTimeout; //type: Native::Line::Aux::UsbInactivityTimeout
        class VacantMessage; //type: Native::Line::Aux::VacantMessage

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AccessClass> access_class;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Autocommand> autocommand;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Databits> databits;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::EscapeCharacter> escape_character;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Exec> exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::ExecTimeout> exec_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::History> history; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Login> login; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Modem> modem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::NoExec> no_exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Padding> padding;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Parity> parity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Prc> prc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Privilege> privilege;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::SessionTimeout> session_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Telnet> telnet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Timeout> timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Transport> transport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::UsbInactivityTimeout> usb_inactivity_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::VacantMessage> vacant_message; // presence node
                class FirstEnum;
        class StopbitsEnum;

}; // Native::Line::Aux


class Native::Line::Aux::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Command; //type: Native::Line::Aux::Authorization::Command

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Authorization::Command> command;
        
}; // Native::Line::Aux::Authorization


class Native::Line::Aux::Authorization::Command : public Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable_level; //type: uint8
        YLeaf auth_name; //type: string

}; // Native::Line::Aux::Authorization::Command


class Native::Line::Aux::AccessClass : public Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AcccessList; //type: Native::Line::Aux::AccessClass::AcccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Aux::AccessClass


class Native::Line::Aux::AccessClass::AcccessList : public Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf access_list; //type: one of uint16, string
        YLeaf vrf_also; //type: empty
        class DirectionEnum;

}; // Native::Line::Aux::AccessClass::AcccessList


class Native::Line::Aux::Autocommand : public Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::Aux::Autocommand::NoSuppressLinenumber

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Aux::Autocommand


class Native::Line::Aux::Autocommand::NoSuppressLinenumber : public Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line; //type: string

}; // Native::Line::Aux::Autocommand::NoSuppressLinenumber


class Native::Line::Aux::AutocommandOptions : public Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AbortCharacter; //type: Native::Line::Aux::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Aux::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Aux::AutocommandOptions::Nohangup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Aux::AutocommandOptions


class Native::Line::Aux::AutocommandOptions::AbortCharacter : public Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf character; //type: one of uint8, string

}; // Native::Line::Aux::AutocommandOptions::AbortCharacter


class Native::Line::Aux::AutocommandOptions::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint8

}; // Native::Line::Aux::AutocommandOptions::Delay


class Native::Line::Aux::AutocommandOptions::Nohangup : public Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf abort_character; //type: empty
        YLeaf delay; //type: empty

}; // Native::Line::Aux::AutocommandOptions::Nohangup


class Native::Line::Aux::Databits : public Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_to_5; //type: empty
        YLeaf set_to_6; //type: empty
        YLeaf set_to_7; //type: empty
        YLeaf set_to_8; //type: empty

}; // Native::Line::Aux::Databits


class Native::Line::Aux::EscapeCharacter : public Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf char; //type: one of uint8, enumeration, string
        YLeaf soft; //type: empty
        class CharEnum;

}; // Native::Line::Aux::EscapeCharacter


class Native::Line::Aux::NoExec : public Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exec; //type: boolean

}; // Native::Line::Aux::NoExec


class Native::Line::Aux::Exec : public Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prompt; //type: Native::Line::Aux::Exec::Prompt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Exec::Prompt> prompt;
        
}; // Native::Line::Aux::Exec


class Native::Line::Aux::Exec::Prompt : public Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timestamp; //type: empty

}; // Native::Line::Aux::Exec::Prompt


class Native::Line::Aux::ExecTimeout : public Entity
{
    public:
        ExecTimeout();
        ~ExecTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minutes; //type: uint32
        YLeaf seconds; //type: uint32

}; // Native::Line::Aux::ExecTimeout


class Native::Line::Aux::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf hardware; //type: empty
        YLeaf software; //type: empty

}; // Native::Line::Aux::Flowcontrol


class Native::Line::Aux::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint8

}; // Native::Line::Aux::History


class Native::Line::Aux::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcp; //type: empty
        class NetmaskFormat; //type: Native::Line::Aux::Ip::NetmaskFormat

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::Aux::Ip


class Native::Line::Aux::Ip::NetmaskFormat : public Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf format; //type: FormatEnum
        class FormatEnum;

}; // Native::Line::Aux::Ip::NetmaskFormat


class Native::Line::Aux::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessClass; //type: Native::Line::Aux::Ipv6::AccessClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Ipv6::AccessClass> access_class;
        
}; // Native::Line::Aux::Ipv6


class Native::Line::Aux::Ipv6::AccessClass : public Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessClass_; //type: Native::Line::Aux::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::Aux::Ipv6::AccessClass


class Native::Line::Aux::Ipv6::AccessClass::AccessClass_ : public Entity
{
    public:
        AccessClass_();
        ~AccessClass_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_class_name; //type: string
        YLeaf enumeration_in_out; //type: EnumerationInOutEnum
        class EnumerationInOutEnum;

}; // Native::Line::Aux::Ipv6::AccessClass::AccessClass_


class Native::Line::Aux::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Synchronous; //type: Native::Line::Aux::Logging::Synchronous

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::Aux::Logging


class Native::Line::Aux::Logging::Synchronous : public Entity
{
    public:
        Synchronous();
        ~Synchronous();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Line::Aux::Logging::Synchronous


class Native::Line::Aux::Login : public Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: empty
        YLeaf authentication; //type: string

}; // Native::Line::Aux::Login


class Native::Line::Aux::MediaType : public Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rj45; //type: empty

}; // Native::Line::Aux::MediaType


class Native::Line::Aux::Modem : public Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cts_alarm; //type: empty
        YLeaf dtr_active; //type: empty
        YLeaf dialin; //type: empty
        YLeaf host; //type: empty
        YLeaf inout; //type: empty
        YLeaf printer; //type: empty
        YLeaf answer_timeout; //type: empty
        YLeaf dtr_delay; //type: empty

}; // Native::Line::Aux::Modem


class Native::Line::Aux::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf character; //type: one of uint8, string
        YLeaf null; //type: uint8

}; // Native::Line::Aux::Padding


class Native::Line::Aux::Parity : public Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf even; //type: empty
        YLeaf mark; //type: empty
        YLeaf none; //type: empty
        YLeaf odd; //type: empty
        YLeaf space; //type: empty

}; // Native::Line::Aux::Parity


class Native::Line::Aux::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8
        YLeaf type; //type: TypeEnum
        YLeaf secret; //type: string
        class TypeEnum;

}; // Native::Line::Aux::Password


class Native::Line::Aux::Prc : public Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expose; //type: empty
        YLeaf hide; //type: empty

}; // Native::Line::Aux::Prc


class Native::Line::Aux::Privilege : public Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Line::Aux::Privilege::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Privilege::Level> level; // presence node
        
}; // Native::Line::Aux::Privilege


class Native::Line::Aux::Privilege::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8

}; // Native::Line::Aux::Privilege::Level


class Native::Line::Aux::SessionTimeout : public Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_timeout_value; //type: uint16
        YLeaf output; //type: empty

}; // Native::Line::Aux::SessionTimeout


class Native::Line::Aux::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf login; //type: empty

}; // Native::Line::Aux::Timeout


class Native::Line::Aux::Telnet : public Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transparent; //type: empty

}; // Native::Line::Aux::Telnet


class Native::Line::Aux::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Line::Aux::Transport::Input
        class Output; //type: Native::Line::Aux::Transport::Output
        class Preferred; //type: Native::Line::Aux::Transport::Preferred

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Transport::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Transport::Output> output;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Aux::Transport


class Native::Line::Aux::Transport::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList input; //type: list of  InputEnum
        class InputEnum;

}; // Native::Line::Aux::Transport::Input


class Native::Line::Aux::Transport::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList output; //type: list of  OutputEnum
        class OutputEnum;

}; // Native::Line::Aux::Transport::Output


class Native::Line::Aux::Transport::Preferred : public Entity
{
    public:
        Preferred();
        ~Preferred();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::Line::Aux::Transport::Preferred


class Native::Line::Aux::UsbInactivityTimeout : public Entity
{
    public:
        UsbInactivityTimeout();
        ~UsbInactivityTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: empty

}; // Native::Line::Aux::UsbInactivityTimeout


class Native::Line::Aux::VacantMessage : public Entity
{
    public:
        VacantMessage();
        ~VacantMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf banner; //type: string

}; // Native::Line::Aux::VacantMessage


class Native::Line::Console : public Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf first; //type: FirstEnum
        YLeaf no_activation_character; //type: boolean
        YLeaf activation_character; //type: one of string, uint8
        YLeaf data_character_bits; //type: uint8
        YLeaf domain_lookup; //type: empty
        YLeaf editing; //type: empty
        YLeaf exec_banner; //type: empty
        YLeaf exec_character_bits; //type: uint8
        YLeaf full_help; //type: empty
        YLeaf international; //type: empty
        YLeaf length; //type: uint16
        YLeaf line; //type: uint8
        YLeaf location; //type: string
        YLeaf monitor; //type: empty
        YLeaf motd_banner; //type: empty
        YLeaf notify; //type: empty
        YLeaf refuse_message; //type: string
        YLeaf rotary; //type: uint8
        YLeaf rxspeed; //type: uint32
        YLeaf special_character_bits; //type: uint8
        YLeaf speed; //type: uint32
        YLeaf start_character; //type: one of uint8, string
        YLeaf stop_character; //type: one of uint8, string
        YLeaf stopbits; //type: StopbitsEnum
        YLeaf terminal_type; //type: string
        YLeaf txspeed; //type: uint32
        YLeaf width; //type: uint16
        class Authorization; //type: Native::Line::Console::Authorization
        class AccessClass; //type: Native::Line::Console::AccessClass
        class Autocommand; //type: Native::Line::Console::Autocommand
        class AutocommandOptions; //type: Native::Line::Console::AutocommandOptions
        class Databits; //type: Native::Line::Console::Databits
        class EscapeCharacter; //type: Native::Line::Console::EscapeCharacter
        class NoExec; //type: Native::Line::Console::NoExec
        class Exec; //type: Native::Line::Console::Exec
        class ExecTimeout; //type: Native::Line::Console::ExecTimeout
        class Flowcontrol; //type: Native::Line::Console::Flowcontrol
        class History; //type: Native::Line::Console::History
        class Ip; //type: Native::Line::Console::Ip
        class Ipv6; //type: Native::Line::Console::Ipv6
        class Logging; //type: Native::Line::Console::Logging
        class Login; //type: Native::Line::Console::Login
        class MediaType; //type: Native::Line::Console::MediaType
        class Modem; //type: Native::Line::Console::Modem
        class Padding; //type: Native::Line::Console::Padding
        class Parity; //type: Native::Line::Console::Parity
        class Password; //type: Native::Line::Console::Password
        class Prc; //type: Native::Line::Console::Prc
        class Privilege; //type: Native::Line::Console::Privilege
        class SessionTimeout; //type: Native::Line::Console::SessionTimeout
        class Timeout; //type: Native::Line::Console::Timeout
        class Telnet; //type: Native::Line::Console::Telnet
        class Transport; //type: Native::Line::Console::Transport
        class UsbInactivityTimeout; //type: Native::Line::Console::UsbInactivityTimeout
        class VacantMessage; //type: Native::Line::Console::VacantMessage

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AccessClass> access_class;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Autocommand> autocommand;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Databits> databits;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::EscapeCharacter> escape_character;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Exec> exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::ExecTimeout> exec_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::History> history; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Login> login; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Modem> modem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::NoExec> no_exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Padding> padding;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Parity> parity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Prc> prc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Privilege> privilege;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::SessionTimeout> session_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Telnet> telnet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Timeout> timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Transport> transport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::UsbInactivityTimeout> usb_inactivity_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::VacantMessage> vacant_message; // presence node
                class FirstEnum;
        class StopbitsEnum;

}; // Native::Line::Console


class Native::Line::Console::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Command; //type: Native::Line::Console::Authorization::Command

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Authorization::Command> command;
        
}; // Native::Line::Console::Authorization


class Native::Line::Console::Authorization::Command : public Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable_level; //type: uint8
        YLeaf auth_name; //type: string

}; // Native::Line::Console::Authorization::Command


class Native::Line::Console::AccessClass : public Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AcccessList; //type: Native::Line::Console::AccessClass::AcccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Console::AccessClass


class Native::Line::Console::AccessClass::AcccessList : public Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf access_list; //type: one of uint16, string
        YLeaf vrf_also; //type: empty
        class DirectionEnum;

}; // Native::Line::Console::AccessClass::AcccessList


class Native::Line::Console::Autocommand : public Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::Console::Autocommand::NoSuppressLinenumber

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Console::Autocommand


class Native::Line::Console::Autocommand::NoSuppressLinenumber : public Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line; //type: string

}; // Native::Line::Console::Autocommand::NoSuppressLinenumber


class Native::Line::Console::AutocommandOptions : public Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AbortCharacter; //type: Native::Line::Console::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Console::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Console::AutocommandOptions::Nohangup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Console::AutocommandOptions


class Native::Line::Console::AutocommandOptions::AbortCharacter : public Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf character; //type: one of uint8, string

}; // Native::Line::Console::AutocommandOptions::AbortCharacter


class Native::Line::Console::AutocommandOptions::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint8

}; // Native::Line::Console::AutocommandOptions::Delay


class Native::Line::Console::AutocommandOptions::Nohangup : public Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf abort_character; //type: empty
        YLeaf delay; //type: empty

}; // Native::Line::Console::AutocommandOptions::Nohangup


class Native::Line::Console::Databits : public Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_to_5; //type: empty
        YLeaf set_to_6; //type: empty
        YLeaf set_to_7; //type: empty
        YLeaf set_to_8; //type: empty

}; // Native::Line::Console::Databits


class Native::Line::Console::EscapeCharacter : public Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf char; //type: one of uint8, enumeration, string
        YLeaf soft; //type: empty
        class CharEnum;

}; // Native::Line::Console::EscapeCharacter


class Native::Line::Console::NoExec : public Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exec; //type: boolean

}; // Native::Line::Console::NoExec


class Native::Line::Console::Exec : public Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prompt; //type: Native::Line::Console::Exec::Prompt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Exec::Prompt> prompt;
        
}; // Native::Line::Console::Exec


class Native::Line::Console::Exec::Prompt : public Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timestamp; //type: empty

}; // Native::Line::Console::Exec::Prompt


class Native::Line::Console::ExecTimeout : public Entity
{
    public:
        ExecTimeout();
        ~ExecTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minutes; //type: uint32
        YLeaf seconds; //type: uint32

}; // Native::Line::Console::ExecTimeout


class Native::Line::Console::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf hardware; //type: empty
        YLeaf software; //type: empty

}; // Native::Line::Console::Flowcontrol


class Native::Line::Console::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint8

}; // Native::Line::Console::History


class Native::Line::Console::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcp; //type: empty
        class NetmaskFormat; //type: Native::Line::Console::Ip::NetmaskFormat

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::Console::Ip


class Native::Line::Console::Ip::NetmaskFormat : public Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf format; //type: FormatEnum
        class FormatEnum;

}; // Native::Line::Console::Ip::NetmaskFormat


class Native::Line::Console::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessClass; //type: Native::Line::Console::Ipv6::AccessClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Ipv6::AccessClass> access_class;
        
}; // Native::Line::Console::Ipv6


class Native::Line::Console::Ipv6::AccessClass : public Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessClass_; //type: Native::Line::Console::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::Console::Ipv6::AccessClass


class Native::Line::Console::Ipv6::AccessClass::AccessClass_ : public Entity
{
    public:
        AccessClass_();
        ~AccessClass_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_class_name; //type: string
        YLeaf enumeration_in_out; //type: EnumerationInOutEnum
        class EnumerationInOutEnum;

}; // Native::Line::Console::Ipv6::AccessClass::AccessClass_


class Native::Line::Console::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Synchronous; //type: Native::Line::Console::Logging::Synchronous

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::Console::Logging


class Native::Line::Console::Logging::Synchronous : public Entity
{
    public:
        Synchronous();
        ~Synchronous();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Line::Console::Logging::Synchronous


class Native::Line::Console::Login : public Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: empty
        YLeaf authentication; //type: string

}; // Native::Line::Console::Login


class Native::Line::Console::MediaType : public Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rj45; //type: empty

}; // Native::Line::Console::MediaType


class Native::Line::Console::Modem : public Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cts_alarm; //type: empty
        YLeaf dtr_active; //type: empty
        YLeaf dialin; //type: empty
        YLeaf host; //type: empty
        YLeaf inout; //type: empty
        YLeaf printer; //type: empty
        YLeaf answer_timeout; //type: empty
        YLeaf dtr_delay; //type: empty

}; // Native::Line::Console::Modem


class Native::Line::Console::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf character; //type: one of uint8, string
        YLeaf null; //type: uint8

}; // Native::Line::Console::Padding


class Native::Line::Console::Parity : public Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf even; //type: empty
        YLeaf mark; //type: empty
        YLeaf none; //type: empty
        YLeaf odd; //type: empty
        YLeaf space; //type: empty

}; // Native::Line::Console::Parity


class Native::Line::Console::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8
        YLeaf type; //type: TypeEnum
        YLeaf secret; //type: string
        class TypeEnum;

}; // Native::Line::Console::Password


class Native::Line::Console::Prc : public Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expose; //type: empty
        YLeaf hide; //type: empty

}; // Native::Line::Console::Prc


class Native::Line::Console::Privilege : public Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Line::Console::Privilege::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Privilege::Level> level; // presence node
        
}; // Native::Line::Console::Privilege


class Native::Line::Console::Privilege::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8

}; // Native::Line::Console::Privilege::Level


class Native::Line::Console::SessionTimeout : public Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_timeout_value; //type: uint16
        YLeaf output; //type: empty

}; // Native::Line::Console::SessionTimeout


class Native::Line::Console::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf login; //type: empty

}; // Native::Line::Console::Timeout


class Native::Line::Console::Telnet : public Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transparent; //type: empty

}; // Native::Line::Console::Telnet


class Native::Line::Console::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Line::Console::Transport::Input
        class Output; //type: Native::Line::Console::Transport::Output
        class Preferred; //type: Native::Line::Console::Transport::Preferred

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Transport::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Transport::Output> output;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Console::Transport


class Native::Line::Console::Transport::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList input; //type: list of  InputEnum
        class InputEnum;

}; // Native::Line::Console::Transport::Input


class Native::Line::Console::Transport::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList output; //type: list of  OutputEnum
        class OutputEnum;

}; // Native::Line::Console::Transport::Output


class Native::Line::Console::Transport::Preferred : public Entity
{
    public:
        Preferred();
        ~Preferred();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::Line::Console::Transport::Preferred


class Native::Line::Console::UsbInactivityTimeout : public Entity
{
    public:
        UsbInactivityTimeout();
        ~UsbInactivityTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: empty

}; // Native::Line::Console::UsbInactivityTimeout


class Native::Line::Console::VacantMessage : public Entity
{
    public:
        VacantMessage();
        ~VacantMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf banner; //type: string

}; // Native::Line::Console::VacantMessage


class Native::Line::Vty : public Entity
{
    public:
        Vty();
        ~Vty();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf first; //type: uint16
        YLeaf last; //type: uint16
        YLeaf no_activation_character; //type: boolean
        YLeaf activation_character; //type: one of string, uint8
        YLeaf data_character_bits; //type: uint8
        YLeaf domain_lookup; //type: empty
        YLeaf editing; //type: empty
        YLeaf exec_banner; //type: empty
        YLeaf exec_character_bits; //type: uint8
        YLeaf full_help; //type: empty
        YLeaf international; //type: empty
        YLeaf length; //type: uint16
        YLeaf line; //type: uint8
        YLeaf location; //type: string
        YLeaf monitor; //type: empty
        YLeaf motd_banner; //type: empty
        YLeaf notify; //type: empty
        YLeaf refuse_message; //type: string
        YLeaf rotary; //type: uint8
        YLeaf rxspeed; //type: uint32
        YLeaf special_character_bits; //type: uint8
        YLeaf speed; //type: uint32
        YLeaf start_character; //type: one of uint8, string
        YLeaf stop_character; //type: one of uint8, string
        YLeaf stopbits; //type: StopbitsEnum
        YLeaf terminal_type; //type: string
        YLeaf txspeed; //type: uint32
        YLeaf width; //type: uint16
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
        class VacantMessage; //type: Native::Line::Vty::VacantMessage

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AccessClass> access_class;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Autocommand> autocommand;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Databits> databits;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::EscapeCharacter> escape_character;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Exec> exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::ExecTimeout> exec_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::History> history; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Login> login; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Modem> modem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::NoExec> no_exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Padding> padding;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Parity> parity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Prc> prc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Privilege> privilege;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::SessionTimeout> session_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Telnet> telnet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Timeout> timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Transport> transport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::UsbInactivityTimeout> usb_inactivity_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::VacantMessage> vacant_message; // presence node
                class StopbitsEnum;

}; // Native::Line::Vty


class Native::Line::Vty::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Command; //type: Native::Line::Vty::Authorization::Command

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Authorization::Command> command;
        
}; // Native::Line::Vty::Authorization


class Native::Line::Vty::Authorization::Command : public Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable_level; //type: uint8
        YLeaf auth_name; //type: string

}; // Native::Line::Vty::Authorization::Command


class Native::Line::Vty::AccessClass : public Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AcccessList; //type: Native::Line::Vty::AccessClass::AcccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Vty::AccessClass


class Native::Line::Vty::AccessClass::AcccessList : public Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf access_list; //type: one of uint16, string
        YLeaf vrf_also; //type: empty
        class DirectionEnum;

}; // Native::Line::Vty::AccessClass::AcccessList


class Native::Line::Vty::Autocommand : public Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::Vty::Autocommand::NoSuppressLinenumber

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Vty::Autocommand


class Native::Line::Vty::Autocommand::NoSuppressLinenumber : public Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line; //type: string

}; // Native::Line::Vty::Autocommand::NoSuppressLinenumber


class Native::Line::Vty::AutocommandOptions : public Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AbortCharacter; //type: Native::Line::Vty::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Vty::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Vty::AutocommandOptions::Nohangup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Vty::AutocommandOptions


class Native::Line::Vty::AutocommandOptions::AbortCharacter : public Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf character; //type: one of uint8, string

}; // Native::Line::Vty::AutocommandOptions::AbortCharacter


class Native::Line::Vty::AutocommandOptions::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint8

}; // Native::Line::Vty::AutocommandOptions::Delay


class Native::Line::Vty::AutocommandOptions::Nohangup : public Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf abort_character; //type: empty
        YLeaf delay; //type: empty

}; // Native::Line::Vty::AutocommandOptions::Nohangup


class Native::Line::Vty::Databits : public Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_to_5; //type: empty
        YLeaf set_to_6; //type: empty
        YLeaf set_to_7; //type: empty
        YLeaf set_to_8; //type: empty

}; // Native::Line::Vty::Databits


class Native::Line::Vty::EscapeCharacter : public Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf char; //type: one of uint8, enumeration, string
        YLeaf soft; //type: empty
        class CharEnum;

}; // Native::Line::Vty::EscapeCharacter


class Native::Line::Vty::NoExec : public Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exec; //type: boolean

}; // Native::Line::Vty::NoExec


class Native::Line::Vty::Exec : public Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prompt; //type: Native::Line::Vty::Exec::Prompt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Exec::Prompt> prompt;
        
}; // Native::Line::Vty::Exec


class Native::Line::Vty::Exec::Prompt : public Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timestamp; //type: empty

}; // Native::Line::Vty::Exec::Prompt


class Native::Line::Vty::ExecTimeout : public Entity
{
    public:
        ExecTimeout();
        ~ExecTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minutes; //type: uint32
        YLeaf seconds; //type: uint32

}; // Native::Line::Vty::ExecTimeout


class Native::Line::Vty::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf hardware; //type: empty
        YLeaf software; //type: empty

}; // Native::Line::Vty::Flowcontrol


class Native::Line::Vty::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint8

}; // Native::Line::Vty::History


class Native::Line::Vty::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcp; //type: empty
        class NetmaskFormat; //type: Native::Line::Vty::Ip::NetmaskFormat

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::Vty::Ip


class Native::Line::Vty::Ip::NetmaskFormat : public Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf format; //type: FormatEnum
        class FormatEnum;

}; // Native::Line::Vty::Ip::NetmaskFormat


class Native::Line::Vty::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessClass; //type: Native::Line::Vty::Ipv6::AccessClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Ipv6::AccessClass> access_class;
        
}; // Native::Line::Vty::Ipv6


class Native::Line::Vty::Ipv6::AccessClass : public Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessClass_; //type: Native::Line::Vty::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::Vty::Ipv6::AccessClass


class Native::Line::Vty::Ipv6::AccessClass::AccessClass_ : public Entity
{
    public:
        AccessClass_();
        ~AccessClass_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_class_name; //type: string
        YLeaf enumeration_in_out; //type: EnumerationInOutEnum
        class EnumerationInOutEnum;

}; // Native::Line::Vty::Ipv6::AccessClass::AccessClass_


class Native::Line::Vty::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Synchronous; //type: Native::Line::Vty::Logging::Synchronous

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::Vty::Logging


class Native::Line::Vty::Logging::Synchronous : public Entity
{
    public:
        Synchronous();
        ~Synchronous();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Line::Vty::Logging::Synchronous


class Native::Line::Vty::Login : public Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: empty
        YLeaf authentication; //type: string

}; // Native::Line::Vty::Login


class Native::Line::Vty::MediaType : public Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rj45; //type: empty

}; // Native::Line::Vty::MediaType


class Native::Line::Vty::Modem : public Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cts_alarm; //type: empty
        YLeaf dtr_active; //type: empty
        YLeaf dialin; //type: empty
        YLeaf host; //type: empty
        YLeaf inout; //type: empty
        YLeaf printer; //type: empty
        YLeaf answer_timeout; //type: empty
        YLeaf dtr_delay; //type: empty

}; // Native::Line::Vty::Modem

class Native::Line::LineList::EscapeCharacter::CharEnum : public Enum
{
    public:
        static const Enum::YLeaf BREAK;
        static const Enum::YLeaf DEFAULT;
        static const Enum::YLeaf NONE;

};

class Native::Line::LineList::Ip::NetmaskFormat::FormatEnum : public Enum
{
    public:
        static const Enum::YLeaf bit_count;
        static const Enum::YLeaf decimal;
        static const Enum::YLeaf hexadecimal;

};

class Native::Line::LineList::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Line::LineList::Password::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Line::LineList::Transport::Input::InputEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf all;
        static const Enum::YLeaf lapb_ta;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;
        static const Enum::YLeaf v120;

};

class Native::Line::LineList::Transport::Output::OutputEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf all;
        static const Enum::YLeaf lapb_ta;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;
        static const Enum::YLeaf v120;

};

class Native::Line::LineList::Transport::Preferred::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;

};

class Native::Line::Aux::FirstEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;

};

class Native::Line::Aux::StopbitsEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_1__DOT__5;
        static const Enum::YLeaf Y_2;

};

class Native::Line::Aux::AccessClass::AcccessList::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Line::Aux::EscapeCharacter::CharEnum : public Enum
{
    public:
        static const Enum::YLeaf BREAK;
        static const Enum::YLeaf DEFAULT;
        static const Enum::YLeaf NONE;

};

class Native::Line::Aux::Ip::NetmaskFormat::FormatEnum : public Enum
{
    public:
        static const Enum::YLeaf bit_count;
        static const Enum::YLeaf decimal;
        static const Enum::YLeaf hexadecimal;

};

class Native::Line::Aux::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Line::Aux::Password::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Line::Aux::Transport::Input::InputEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf all;
        static const Enum::YLeaf lapb_ta;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;
        static const Enum::YLeaf v120;

};

class Native::Line::Aux::Transport::Output::OutputEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf all;
        static const Enum::YLeaf lapb_ta;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;
        static const Enum::YLeaf v120;

};

class Native::Line::Aux::Transport::Preferred::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;

};

class Native::Line::Console::FirstEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;

};

class Native::Line::Console::StopbitsEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_1__DOT__5;
        static const Enum::YLeaf Y_2;

};

class Native::Line::Console::AccessClass::AcccessList::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Line::Console::EscapeCharacter::CharEnum : public Enum
{
    public:
        static const Enum::YLeaf BREAK;
        static const Enum::YLeaf DEFAULT;
        static const Enum::YLeaf NONE;

};

class Native::Line::Console::Ip::NetmaskFormat::FormatEnum : public Enum
{
    public:
        static const Enum::YLeaf bit_count;
        static const Enum::YLeaf decimal;
        static const Enum::YLeaf hexadecimal;

};

class Native::Line::Console::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Line::Console::Password::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Line::Console::Transport::Input::InputEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf all;
        static const Enum::YLeaf lapb_ta;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;
        static const Enum::YLeaf v120;

};

class Native::Line::Console::Transport::Output::OutputEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf all;
        static const Enum::YLeaf lapb_ta;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;
        static const Enum::YLeaf v120;

};

class Native::Line::Console::Transport::Preferred::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;

};

class Native::Line::Vty::StopbitsEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_1__DOT__5;
        static const Enum::YLeaf Y_2;

};

class Native::Line::Vty::AccessClass::AcccessList::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Line::Vty::EscapeCharacter::CharEnum : public Enum
{
    public:
        static const Enum::YLeaf BREAK;
        static const Enum::YLeaf DEFAULT;
        static const Enum::YLeaf NONE;

};

class Native::Line::Vty::Ip::NetmaskFormat::FormatEnum : public Enum
{
    public:
        static const Enum::YLeaf bit_count;
        static const Enum::YLeaf decimal;
        static const Enum::YLeaf hexadecimal;

};

class Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_152_ */

