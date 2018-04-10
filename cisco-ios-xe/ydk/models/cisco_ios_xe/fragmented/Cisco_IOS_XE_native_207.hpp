#ifndef _CISCO_IOS_XE_NATIVE_207_
#define _CISCO_IOS_XE_NATIVE_207_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_206.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Line::Aux::Timeout : public ydk::Entity
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

}; // Native::Line::Aux::Timeout


class Native::Line::Aux::Telnet : public ydk::Entity
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

}; // Native::Line::Aux::Telnet


class Native::Line::Aux::Transport : public ydk::Entity
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

        class Input; //type: Native::Line::Aux::Transport::Input
        class Output; //type: Native::Line::Aux::Transport::Output
        class Preferred; //type: Native::Line::Aux::Transport::Preferred

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Transport::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Transport::Output> output;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Aux::Transport


class Native::Line::Aux::Transport::Input : public ydk::Entity
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

}; // Native::Line::Aux::Transport::Input


class Native::Line::Aux::Transport::Output : public ydk::Entity
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

}; // Native::Line::Aux::Transport::Output


class Native::Line::Aux::Transport::Preferred : public ydk::Entity
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

}; // Native::Line::Aux::Transport::Preferred


class Native::Line::Aux::UsbInactivityTimeout : public ydk::Entity
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

}; // Native::Line::Aux::UsbInactivityTimeout


class Native::Line::Console : public ydk::Entity
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

        ydk::YLeaf first; //type: First
        ydk::YLeaf no_activation_character; //type: boolean
        ydk::YLeaf activation_character; //type: one of uint8, string
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
        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf special_character_bits; //type: uint8
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf start_character; //type: one of uint8, string
        ydk::YLeaf stop_character; //type: one of uint8, string
        ydk::YLeaf stopbits; //type: Stopbits
        ydk::YLeaf terminal_type; //type: string
        ydk::YLeaf txspeed; //type: uint32
        ydk::YLeaf width; //type: uint16
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AccessClass> access_class;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Autocommand> autocommand;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Databits> databits;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::EscapeCharacter> escape_character;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::NoExec> no_exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Exec> exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::ExecTimeout> exec_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::History> history; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Login> login; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::MediaType> media_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Modem> modem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Padding> padding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Parity> parity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Prc> prc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Privilege> privilege;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::SessionTimeout> session_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Telnet> telnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::UsbInactivityTimeout> usb_inactivity_timeout;
                class First;
        class Stopbits;

}; // Native::Line::Console


class Native::Line::Console::Authorization : public ydk::Entity
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

        class Command; //type: Native::Line::Console::Authorization::Command

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Authorization::Command> command;
        
}; // Native::Line::Console::Authorization


class Native::Line::Console::Authorization::Command : public ydk::Entity
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

}; // Native::Line::Console::Authorization::Command


class Native::Line::Console::AccessClass : public ydk::Entity
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

        class AcccessList; //type: Native::Line::Console::AccessClass::AcccessList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Console::AccessClass


class Native::Line::Console::AccessClass::AcccessList : public ydk::Entity
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
        ydk::YLeaf access_list; //type: one of uint16, string
        ydk::YLeaf vrf_also; //type: empty
        class Direction;

}; // Native::Line::Console::AccessClass::AcccessList


class Native::Line::Console::Autocommand : public ydk::Entity
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
        class NoSuppressLinenumber; //type: Native::Line::Console::Autocommand::NoSuppressLinenumber

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Console::Autocommand


class Native::Line::Console::Autocommand::NoSuppressLinenumber : public ydk::Entity
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

}; // Native::Line::Console::Autocommand::NoSuppressLinenumber


class Native::Line::Console::AutocommandOptions : public ydk::Entity
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

        class AbortCharacter; //type: Native::Line::Console::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Console::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Console::AutocommandOptions::Nohangup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Console::AutocommandOptions


class Native::Line::Console::AutocommandOptions::AbortCharacter : public ydk::Entity
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

        ydk::YLeaf character; //type: one of uint8, string

}; // Native::Line::Console::AutocommandOptions::AbortCharacter


class Native::Line::Console::AutocommandOptions::Delay : public ydk::Entity
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

}; // Native::Line::Console::AutocommandOptions::Delay


class Native::Line::Console::AutocommandOptions::Nohangup : public ydk::Entity
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

}; // Native::Line::Console::AutocommandOptions::Nohangup


class Native::Line::Console::Databits : public ydk::Entity
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

}; // Native::Line::Console::Databits


class Native::Line::Console::EscapeCharacter : public ydk::Entity
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

        ydk::YLeaf char_; //type: one of uint8, enumeration, string
        ydk::YLeaf soft; //type: empty
        class Char_;

}; // Native::Line::Console::EscapeCharacter


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

        ydk::YLeaf size; //type: uint16

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

        ydk::YLeaf character; //type: one of uint8, string
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
        ydk::YLeaf activation_character; //type: one of uint8, string
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
        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf special_character_bits; //type: uint8
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf start_character; //type: one of uint8, string
        ydk::YLeaf stop_character; //type: one of uint8, string
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::AccessClass> access_class;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Autocommand> autocommand;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Databits> databits;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::EscapeCharacter> escape_character;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::NoExec> no_exec;
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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Padding> padding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Parity> parity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Prc> prc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Privilege> privilege;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::SessionTimeout> session_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Telnet> telnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty::UsbInactivityTimeout> usb_inactivity_timeout;
                class Stopbits;

}; // Native::Line::Vty


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
        ydk::YLeaf access_list; //type: one of uint16, string
        ydk::YLeaf vrf_also; //type: empty
        class Direction;

}; // Native::Line::Vty::AccessClass::AcccessList


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

        ydk::YLeaf character; //type: one of uint8, string

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

        ydk::YLeaf char_; //type: one of uint8, enumeration, string
        ydk::YLeaf soft; //type: empty
        class Char_;

}; // Native::Line::Vty::EscapeCharacter


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

        ydk::YLeaf size; //type: uint16

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

        ydk::YLeaf character; //type: one of uint8, string
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


class Native::Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Allow> allow;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AuthenticationKey> > authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Master> master; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Panic> panic;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Source> source;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::TrustedKey> > trusted_key;
        
}; // Native::Ntp


class Native::Ntp::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::Ntp::AccessGroup::Ipv4
        class Ipv6; //type: Native::Ntp::AccessGroup::Ipv6
        class Peer; //type: Native::Ntp::AccessGroup::Peer
        class QueryOnly; //type: Native::Ntp::AccessGroup::QueryOnly
        class Serve; //type: Native::Ntp::AccessGroup::Serve
        class ServeOnly; //type: Native::Ntp::AccessGroup::ServeOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::QueryOnly> query_only;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Serve> serve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::ServeOnly> serve_only;
        
}; // Native::Ntp::AccessGroup


class Native::Ntp::AccessGroup::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Peer; //type: Native::Ntp::AccessGroup::Ipv4::Peer
        class QueryOnly; //type: Native::Ntp::AccessGroup::Ipv4::QueryOnly
        class Serve; //type: Native::Ntp::AccessGroup::Ipv4::Serve
        class ServeOnly; //type: Native::Ntp::AccessGroup::Ipv4::ServeOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::QueryOnly> query_only;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::Serve> serve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::ServeOnly> serve_only;
        
}; // Native::Ntp::AccessGroup::Ipv4


class Native::Ntp::AccessGroup::Ipv4::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::Peer


class Native::Ntp::AccessGroup::Ipv4::QueryOnly : public ydk::Entity
{
    public:
        QueryOnly();
        ~QueryOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::QueryOnly


class Native::Ntp::AccessGroup::Ipv4::Serve : public ydk::Entity
{
    public:
        Serve();
        ~Serve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::Serve


class Native::Ntp::AccessGroup::Ipv4::ServeOnly : public ydk::Entity
{
    public:
        ServeOnly();
        ~ServeOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::ServeOnly


class Native::Ntp::AccessGroup::Ipv6 : public ydk::Entity
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

        class Peer; //type: Native::Ntp::AccessGroup::Ipv6::Peer
        class QueryOnly; //type: Native::Ntp::AccessGroup::Ipv6::QueryOnly
        class Serve; //type: Native::Ntp::AccessGroup::Ipv6::Serve
        class ServeOnly; //type: Native::Ntp::AccessGroup::Ipv6::ServeOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::QueryOnly> query_only;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::Serve> serve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::ServeOnly> serve_only;
        
}; // Native::Ntp::AccessGroup::Ipv6


class Native::Ntp::AccessGroup::Ipv6::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::Peer


class Native::Ntp::AccessGroup::Ipv6::QueryOnly : public ydk::Entity
{
    public:
        QueryOnly();
        ~QueryOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::QueryOnly


class Native::Ntp::AccessGroup::Ipv6::Serve : public ydk::Entity
{
    public:
        Serve();
        ~Serve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::Serve


class Native::Ntp::AccessGroup::Ipv6::ServeOnly : public ydk::Entity
{
    public:
        ServeOnly();
        ~ServeOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::ServeOnly


class Native::Ntp::AccessGroup::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Peer


class Native::Ntp::AccessGroup::QueryOnly : public ydk::Entity
{
    public:
        QueryOnly();
        ~QueryOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::QueryOnly


class Native::Ntp::AccessGroup::Serve : public ydk::Entity
{
    public:
        Serve();
        ~Serve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Serve


class Native::Ntp::AccessGroup::ServeOnly : public ydk::Entity
{
    public:
        ServeOnly();
        ~ServeOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::ServeOnly


class Native::Ntp::Allow : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Mode; //type: Native::Ntp::Allow::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Allow::Mode> mode;
        
}; // Native::Ntp::Allow


class Native::Ntp::Allow::Mode : public ydk::Entity
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

        ydk::YLeaf private_; //type: empty
        class Control; //type: Native::Ntp::Allow::Mode::Control

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Allow::Mode::Control> control; // presence node
        
}; // Native::Ntp::Allow::Mode


class Native::Ntp::Allow::Mode::Control : public ydk::Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf delay; //type: uint8

}; // Native::Ntp::Allow::Mode::Control


class Native::Ntp::AuthenticationKey : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf stratum_number; //type: uint8

}; // Native::Ntp::Master


class Native::Ntp::Panic : public ydk::Entity
{
    public:
        Panic();
        ~Panic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf update; //type: empty

}; // Native::Ntp::Panic


class Native::Ntp::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServerList; //type: Native::Ntp::Peer::ServerList
        class Ip; //type: Native::Ntp::Peer::Ip
        class Ipv6; //type: Native::Ntp::Peer::Ipv6
        class Vrf; //type: Native::Ntp::Peer::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Peer::ServerList> > server_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Peer::Ip> > ip;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Peer::Ipv6> > ipv6;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf> > vrf;
        
}; // Native::Ntp::Peer


class Native::Ntp::Peer::ServerList : public ydk::Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class ServerList; //type: Native::Ntp::Peer::Vrf::ServerList
        class Ip; //type: Native::Ntp::Peer::Vrf::Ip
        class Ipv6; //type: Native::Ntp::Peer::Vrf::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf::ServerList> > server_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf::Ip> > ip;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf::Ipv6> > ipv6;
        
}; // Native::Ntp::Peer::Vrf


class Native::Ntp::Peer::Vrf::ServerList : public ydk::Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServerList; //type: Native::Ntp::Server::ServerList
        class Ip; //type: Native::Ntp::Server::Ip
        class Ipv6; //type: Native::Ntp::Server::Ipv6
        class Vrf; //type: Native::Ntp::Server::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Server::ServerList> > server_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Server::Ip> > ip;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Server::Ipv6> > ipv6;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Server::Vrf> > vrf;
        
}; // Native::Ntp::Server


class Native::Ntp::Server::ServerList : public ydk::Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class ServerList; //type: Native::Ntp::Server::Vrf::ServerList
        class Ip; //type: Native::Ntp::Server::Vrf::Ip
        class Ipv6; //type: Native::Ntp::Server::Vrf::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Server::Vrf::ServerList> > server_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Server::Vrf::Ip> > ip;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Server::Vrf::Ipv6> > ipv6;
        
}; // Native::Ntp::Server::Vrf


class Native::Ntp::Server::Vrf::ServerList : public ydk::Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        class ATMSubinterface; //type: Native::Ntp::Source::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ntp::Source::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ntp::Source::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ntp::Source::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Source::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Source::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Source::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ntp::Source::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ntp::Source


class Native::Ntp::Source::ATMSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::Ntp::Source::ATMSubinterface


class Native::Ntp::Source::ATMACRsubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ntp::Source::ATMACRsubinterface


class Native::Ntp::Source::LISPSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Ntp::Source::LISPSubinterface


class Native::Ntp::Source::PortChannelSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Ntp::Source::PortChannelSubinterface


class Native::Ntp::TrustedKey : public ydk::Entity
{
    public:
        TrustedKey();
        ~TrustedKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Agent; //type: Native::Wsma::Agent
        class Profile; //type: Native::Wsma::Profile

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wsma::Agent> agent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wsma::Profile> profile;
        
}; // Native::Wsma


class Native::Wsma::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Exec; //type: Native::Wsma::Agent::Exec
        class Config; //type: Native::Wsma::Agent::Config
        class Filesys; //type: Native::Wsma::Agent::Filesys
        class Notify; //type: Native::Wsma::Agent::Notify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wsma::Agent::Exec> exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wsma::Agent::Config> config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wsma::Agent::Filesys> filesys;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wsma::Agent::Notify> notify;
        
}; // Native::Wsma::Agent


class Native::Wsma::Agent::Exec : public ydk::Entity
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

        ydk::YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Exec


class Native::Wsma::Agent::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Config


class Native::Wsma::Agent::Filesys : public ydk::Entity
{
    public:
        Filesys();
        ~Filesys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Filesys


class Native::Wsma::Agent::Notify : public ydk::Entity
{
    public:
        Notify();
        ~Notify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Notify


class Native::Wsma::Profile : public ydk::Entity
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

        class Listener; //type: Native::Wsma::Profile::Listener

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Wsma::Profile::Listener> > listener;
        
}; // Native::Wsma::Profile


class Native::Wsma::Profile::Listener : public ydk::Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Manager; //type: Native::Event::Manager

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager> manager;
        
}; // Native::Event


class Native::Event::Manager : public ydk::Entity
{
    public:
        Manager();
        ~Manager();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Environment; //type: Native::Event::Manager::Environment
        class Directory; //type: Native::Event::Manager::Directory
        class Session; //type: Native::Event::Manager::Session
        class Applet; //type: Native::Event::Manager::Applet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Environment> > environment;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Directory> directory;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Session> session;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet> > applet;
        
}; // Native::Event::Manager


class Native::Event::Manager::Environment : public ydk::Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
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
        ydk::YLeaf value_; //type: string

}; // Native::Event::Manager::Environment


class Native::Event::Manager::Directory : public ydk::Entity
{
    public:
        Directory();
        ~Directory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class User; //type: Native::Event::Manager::Directory::User

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Directory::User> user;
        
}; // Native::Event::Manager::Directory


class Native::Event::Manager::Directory::User : public ydk::Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf policy; //type: string

}; // Native::Event::Manager::Directory::User

class Native::Line::Aux::Transport::Input::Input_ : public ydk::Enum
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

class Native::Line::Aux::Transport::Output::Output_ : public ydk::Enum
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

class Native::Line::Aux::Transport::Preferred::Protocol : public ydk::Enum
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

class Native::Line::Console::First : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;

};

class Native::Line::Console::Stopbits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_1__DOT__5;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Line::Console::AccessClass::AcccessList::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::Console::EscapeCharacter::Char_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf BREAK;
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf NONE;

};

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

class Native::Wsma::Profile::Listener::Transport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf https;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf tls;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_207_ */

