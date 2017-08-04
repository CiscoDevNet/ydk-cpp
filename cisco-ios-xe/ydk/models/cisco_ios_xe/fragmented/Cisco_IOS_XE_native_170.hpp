#ifndef _CISCO_IOS_XE_NATIVE_170_
#define _CISCO_IOS_XE_NATIVE_170_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_169.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Metadata::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty

}; // Native::Metadata::Flow


class Native::Profile : public ydk::Entity
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

        ydk::YLeaf flow; //type: empty

}; // Native::Profile


class Native::Alias : public ydk::Entity
{
    public:
        Alias();
        ~Alias();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exec; //type: Native::Alias::Exec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Alias::Exec> exec;
        
}; // Native::Alias


class Native::Alias::Exec : public ydk::Entity
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

        ydk::YLeaf alias_name; //type: string
        ydk::YLeaf new_alias_name; //type: string

}; // Native::Alias::Exec


class Native::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LineList; //type: Native::Line::LineList
        class Aux; //type: Native::Line::Aux
        class Console; //type: Native::Line::Console
        class Vty; //type: Native::Line::Vty

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux> > aux;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console> > console;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList> > line_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty> > vty;
        
}; // Native::Line


class Native::Line::LineList : public ydk::Entity
{
    public:
        LineList();
        ~LineList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AccessClass> access_class;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Autocommand> autocommand;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Databits> databits;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::EscapeCharacter> escape_character;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Exec> exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::ExecTimeout> exec_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::History> history; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Login> login; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Modem> modem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::NoExec> no_exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Padding> padding;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Parity> parity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Prc> prc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Privilege> privilege;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::SessionTimeout> session_timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Telnet> telnet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Timeout> timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Transport> transport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::UsbInactivityTimeout> usb_inactivity_timeout;
                class Stopbits;

}; // Native::Line::LineList


class Native::Line::LineList::Authorization : public ydk::Entity
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

        class Command; //type: Native::Line::LineList::Authorization::Command

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Authorization::Command> command;
        
}; // Native::Line::LineList::Authorization


class Native::Line::LineList::Authorization::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_level; //type: uint8
        ydk::YLeaf auth_name; //type: string

}; // Native::Line::LineList::Authorization::Command


class Native::Line::LineList::AccessClass : public ydk::Entity
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

        class AcccessList; //type: Native::Line::LineList::AccessClass::AcccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::LineList::AccessClass


class Native::Line::LineList::AccessClass::AcccessList : public ydk::Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Native::Line::LineList::Autocommand : public ydk::Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::LineList::Autocommand::NoSuppressLinenumber

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::LineList::Autocommand


class Native::Line::LineList::Autocommand::NoSuppressLinenumber : public ydk::Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AbortCharacter; //type: Native::Line::LineList::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::LineList::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::LineList::AutocommandOptions::Nohangup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::LineList::AutocommandOptions


class Native::Line::LineList::AutocommandOptions::AbortCharacter : public ydk::Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

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

}; // Native::Line::LineList::AutocommandOptions::AbortCharacter


class Native::Line::LineList::AutocommandOptions::Delay : public ydk::Entity
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

        ydk::YLeaf time; //type: uint8

}; // Native::Line::LineList::AutocommandOptions::Delay


class Native::Line::LineList::AutocommandOptions::Nohangup : public ydk::Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Native::Line::LineList::NoExec : public ydk::Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exec; //type: boolean

}; // Native::Line::LineList::NoExec


class Native::Line::LineList::Exec : public ydk::Entity
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

        class Prompt; //type: Native::Line::LineList::Exec::Prompt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Exec::Prompt> prompt;
        
}; // Native::Line::LineList::Exec


class Native::Line::LineList::Exec::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Native::Line::LineList::Flowcontrol


class Native::Line::LineList::History : public ydk::Entity
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

}; // Native::Line::LineList::History


class Native::Line::LineList::Ip : public ydk::Entity
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
        class NetmaskFormat; //type: Native::Line::LineList::Ip::NetmaskFormat

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::LineList::Ip


class Native::Line::LineList::Ip::NetmaskFormat : public ydk::Entity
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

}; // Native::Line::LineList::Ip::NetmaskFormat


class Native::Line::LineList::Ipv6 : public ydk::Entity
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

        class AccessClass; //type: Native::Line::LineList::Ipv6::AccessClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ipv6::AccessClass> access_class;
        
}; // Native::Line::LineList::Ipv6


class Native::Line::LineList::Ipv6::AccessClass : public ydk::Entity
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

        class AccessClass_; //type: Native::Line::LineList::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::LineList::Ipv6::AccessClass


class Native::Line::LineList::Ipv6::AccessClass::AccessClass_ : public ydk::Entity
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

}; // Native::Line::LineList::Ipv6::AccessClass::AccessClass_


class Native::Line::LineList::Logging : public ydk::Entity
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

        class Synchronous; //type: Native::Line::LineList::Logging::Synchronous

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::LineList::Logging


class Native::Line::LineList::Logging::Synchronous : public ydk::Entity
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


}; // Native::Line::LineList::Logging::Synchronous


class Native::Line::LineList::Login : public ydk::Entity
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

}; // Native::Line::LineList::Login


class Native::Line::LineList::MediaType : public ydk::Entity
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

}; // Native::Line::LineList::MediaType


class Native::Line::LineList::Modem : public ydk::Entity
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

}; // Native::Line::LineList::Modem


class Native::Line::LineList::Padding : public ydk::Entity
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

}; // Native::Line::LineList::Padding


class Native::Line::LineList::Parity : public ydk::Entity
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

}; // Native::Line::LineList::Parity


class Native::Line::LineList::Password : public ydk::Entity
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

}; // Native::Line::LineList::Password


class Native::Line::LineList::Prc : public ydk::Entity
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

}; // Native::Line::LineList::Prc


class Native::Line::LineList::Privilege : public ydk::Entity
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

        class Level; //type: Native::Line::LineList::Privilege::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Privilege::Level> level; // presence node
        
}; // Native::Line::LineList::Privilege


class Native::Line::LineList::Privilege::Level : public ydk::Entity
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

}; // Native::Line::LineList::Privilege::Level


class Native::Line::LineList::SessionTimeout : public ydk::Entity
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

}; // Native::Line::LineList::SessionTimeout


class Native::Line::LineList::Timeout : public ydk::Entity
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

}; // Native::Line::LineList::Timeout


class Native::Line::LineList::Telnet : public ydk::Entity
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

}; // Native::Line::LineList::Telnet


class Native::Line::LineList::Transport : public ydk::Entity
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

        class Input; //type: Native::Line::LineList::Transport::Input
        class Output; //type: Native::Line::LineList::Transport::Output
        class Preferred; //type: Native::Line::LineList::Transport::Preferred

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Transport::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Transport::Output> output;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::LineList::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::LineList::Transport


class Native::Line::LineList::Transport::Input : public ydk::Entity
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

}; // Native::Line::LineList::Transport::Input


class Native::Line::LineList::Transport::Output : public ydk::Entity
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

}; // Native::Line::LineList::Transport::Output


class Native::Line::LineList::Transport::Preferred : public ydk::Entity
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

}; // Native::Line::LineList::Transport::Preferred


class Native::Line::LineList::UsbInactivityTimeout : public ydk::Entity
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

}; // Native::Line::LineList::UsbInactivityTimeout


class Native::Line::Aux : public ydk::Entity
{
    public:
        Aux();
        ~Aux();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf first; //type: First
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
                class First;
        class Stopbits;

}; // Native::Line::Aux


class Native::Line::Aux::Authorization : public ydk::Entity
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

        class Command; //type: Native::Line::Aux::Authorization::Command

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Authorization::Command> command;
        
}; // Native::Line::Aux::Authorization


class Native::Line::Aux::Authorization::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_level; //type: uint8
        ydk::YLeaf auth_name; //type: string

}; // Native::Line::Aux::Authorization::Command


class Native::Line::Aux::AccessClass : public ydk::Entity
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

        class AcccessList; //type: Native::Line::Aux::AccessClass::AcccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Aux::AccessClass


class Native::Line::Aux::AccessClass::AcccessList : public ydk::Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Native::Line::Aux::AccessClass::AcccessList


class Native::Line::Aux::Autocommand : public ydk::Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::Aux::Autocommand::NoSuppressLinenumber

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Aux::Autocommand


class Native::Line::Aux::Autocommand::NoSuppressLinenumber : public ydk::Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Line::Aux::Autocommand::NoSuppressLinenumber


class Native::Line::Aux::AutocommandOptions : public ydk::Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AbortCharacter; //type: Native::Line::Aux::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Aux::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Aux::AutocommandOptions::Nohangup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Aux::AutocommandOptions


class Native::Line::Aux::AutocommandOptions::AbortCharacter : public ydk::Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

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

}; // Native::Line::Aux::AutocommandOptions::AbortCharacter


class Native::Line::Aux::AutocommandOptions::Delay : public ydk::Entity
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

        ydk::YLeaf time; //type: uint8

}; // Native::Line::Aux::AutocommandOptions::Delay


class Native::Line::Aux::AutocommandOptions::Nohangup : public ydk::Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf abort_character; //type: empty
        ydk::YLeaf delay; //type: empty

}; // Native::Line::Aux::AutocommandOptions::Nohangup


class Native::Line::Aux::Databits : public ydk::Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Native::Line::Aux::Databits


class Native::Line::Aux::EscapeCharacter : public ydk::Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf char_; //type: one of string, enumeration, uint8
        ydk::YLeaf soft; //type: empty
        class Char_;

}; // Native::Line::Aux::EscapeCharacter


class Native::Line::Aux::NoExec : public ydk::Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exec; //type: boolean

}; // Native::Line::Aux::NoExec


class Native::Line::Aux::Exec : public ydk::Entity
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

        class Prompt; //type: Native::Line::Aux::Exec::Prompt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Exec::Prompt> prompt;
        
}; // Native::Line::Aux::Exec


class Native::Line::Aux::Exec::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: empty

}; // Native::Line::Aux::Exec::Prompt


class Native::Line::Aux::ExecTimeout : public ydk::Entity
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

}; // Native::Line::Aux::ExecTimeout


class Native::Line::Aux::Flowcontrol : public ydk::Entity
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

}; // Native::Line::Aux::Flowcontrol


class Native::Line::Aux::History : public ydk::Entity
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

}; // Native::Line::Aux::History


class Native::Line::Aux::Ip : public ydk::Entity
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
        class NetmaskFormat; //type: Native::Line::Aux::Ip::NetmaskFormat

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::Aux::Ip


class Native::Line::Aux::Ip::NetmaskFormat : public ydk::Entity
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

}; // Native::Line::Aux::Ip::NetmaskFormat


class Native::Line::Aux::Ipv6 : public ydk::Entity
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

        class AccessClass; //type: Native::Line::Aux::Ipv6::AccessClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Ipv6::AccessClass> access_class;
        
}; // Native::Line::Aux::Ipv6


class Native::Line::Aux::Ipv6::AccessClass : public ydk::Entity
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

        class AccessClass_; //type: Native::Line::Aux::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::Aux::Ipv6::AccessClass


class Native::Line::Aux::Ipv6::AccessClass::AccessClass_ : public ydk::Entity
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

}; // Native::Line::Aux::Ipv6::AccessClass::AccessClass_


class Native::Line::Aux::Logging : public ydk::Entity
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

        class Synchronous; //type: Native::Line::Aux::Logging::Synchronous

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::Aux::Logging


class Native::Line::Aux::Logging::Synchronous : public ydk::Entity
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


}; // Native::Line::Aux::Logging::Synchronous


class Native::Line::Aux::Login : public ydk::Entity
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

}; // Native::Line::Aux::Login


class Native::Line::Aux::MediaType : public ydk::Entity
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

}; // Native::Line::Aux::MediaType


class Native::Line::Aux::Modem : public ydk::Entity
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

}; // Native::Line::Aux::Modem


class Native::Line::Aux::Padding : public ydk::Entity
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

}; // Native::Line::Aux::Padding


class Native::Line::Aux::Parity : public ydk::Entity
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

}; // Native::Line::Aux::Parity


class Native::Line::Aux::Password : public ydk::Entity
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

}; // Native::Line::Aux::Password


class Native::Line::Aux::Prc : public ydk::Entity
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

}; // Native::Line::Aux::Prc


class Native::Line::Aux::Privilege : public ydk::Entity
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

        class Level; //type: Native::Line::Aux::Privilege::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Privilege::Level> level; // presence node
        
}; // Native::Line::Aux::Privilege


class Native::Line::Aux::Privilege::Level : public ydk::Entity
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

}; // Native::Line::Aux::Privilege::Level


class Native::Line::Aux::SessionTimeout : public ydk::Entity
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

}; // Native::Line::Aux::SessionTimeout


class Native::Line::Aux::Timeout : public ydk::Entity
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

}; // Native::Line::Aux::Timeout


class Native::Line::Aux::Telnet : public ydk::Entity
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

}; // Native::Line::Aux::Telnet


class Native::Line::Aux::Transport : public ydk::Entity
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

        class Input; //type: Native::Line::Aux::Transport::Input
        class Output; //type: Native::Line::Aux::Transport::Output
        class Preferred; //type: Native::Line::Aux::Transport::Preferred

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Transport::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Transport::Output> output;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Aux::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Aux::Transport


class Native::Line::Aux::Transport::Input : public ydk::Entity
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

}; // Native::Line::Aux::Transport::Input


class Native::Line::Aux::Transport::Output : public ydk::Entity
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

}; // Native::Line::Aux::Transport::Output


class Native::Line::Aux::Transport::Preferred : public ydk::Entity
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

}; // Native::Line::Aux::Transport::Preferred


class Native::Line::Aux::UsbInactivityTimeout : public ydk::Entity
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

}; // Native::Line::Aux::UsbInactivityTimeout


class Native::Line::Console : public ydk::Entity
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

        ydk::YLeaf first; //type: First
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Command; //type: Native::Line::Console::Authorization::Command

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Authorization::Command> command;
        
}; // Native::Line::Console::Authorization


class Native::Line::Console::Authorization::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AcccessList; //type: Native::Line::Console::AccessClass::AcccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Console::AccessClass


class Native::Line::Console::AccessClass::AcccessList : public ydk::Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Native::Line::Console::AccessClass::AcccessList


class Native::Line::Console::Autocommand : public ydk::Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::Console::Autocommand::NoSuppressLinenumber

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Console::Autocommand


class Native::Line::Console::Autocommand::NoSuppressLinenumber : public ydk::Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AbortCharacter; //type: Native::Line::Console::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Console::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Console::AutocommandOptions::Nohangup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Console::AutocommandOptions


class Native::Line::Console::AutocommandOptions::AbortCharacter : public ydk::Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

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

}; // Native::Line::Console::AutocommandOptions::AbortCharacter


class Native::Line::Console::AutocommandOptions::Delay : public ydk::Entity
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

        ydk::YLeaf time; //type: uint8

}; // Native::Line::Console::AutocommandOptions::Delay


class Native::Line::Console::AutocommandOptions::Nohangup : public ydk::Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf char_; //type: one of string, enumeration, uint8
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prompt; //type: Native::Line::Console::Exec::Prompt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Exec::Prompt> prompt;
        
}; // Native::Line::Console::Exec


class Native::Line::Console::Exec::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Native::Line::Console::Flowcontrol


class Native::Line::Console::History : public ydk::Entity
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

}; // Native::Line::Console::History


class Native::Line::Console::Ip : public ydk::Entity
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
        class NetmaskFormat; //type: Native::Line::Console::Ip::NetmaskFormat

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::Console::Ip


class Native::Line::Console::Ip::NetmaskFormat : public ydk::Entity
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

}; // Native::Line::Console::Ip::NetmaskFormat


class Native::Line::Console::Ipv6 : public ydk::Entity
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

        class AccessClass; //type: Native::Line::Console::Ipv6::AccessClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Ipv6::AccessClass> access_class;
        
}; // Native::Line::Console::Ipv6


class Native::Line::Console::Ipv6::AccessClass : public ydk::Entity
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

        class AccessClass_; //type: Native::Line::Console::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::Console::Ipv6::AccessClass


class Native::Line::Console::Ipv6::AccessClass::AccessClass_ : public ydk::Entity
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

}; // Native::Line::Console::Ipv6::AccessClass::AccessClass_


class Native::Line::Console::Logging : public ydk::Entity
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

        class Synchronous; //type: Native::Line::Console::Logging::Synchronous

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::Console::Logging


class Native::Line::Console::Logging::Synchronous : public ydk::Entity
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


}; // Native::Line::Console::Logging::Synchronous


class Native::Line::Console::Login : public ydk::Entity
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

}; // Native::Line::Console::Login


class Native::Line::Console::MediaType : public ydk::Entity
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

}; // Native::Line::Console::MediaType


class Native::Line::Console::Modem : public ydk::Entity
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

}; // Native::Line::Console::Modem


class Native::Line::Console::Padding : public ydk::Entity
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

}; // Native::Line::Console::Padding


class Native::Line::Console::Parity : public ydk::Entity
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

}; // Native::Line::Console::Parity


class Native::Line::Console::Password : public ydk::Entity
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

}; // Native::Line::Console::Password


class Native::Line::Console::Prc : public ydk::Entity
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

}; // Native::Line::Console::Prc


class Native::Line::Console::Privilege : public ydk::Entity
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

        class Level; //type: Native::Line::Console::Privilege::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Privilege::Level> level; // presence node
        
}; // Native::Line::Console::Privilege


class Native::Line::Console::Privilege::Level : public ydk::Entity
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

}; // Native::Line::Console::Privilege::Level


class Native::Line::Console::SessionTimeout : public ydk::Entity
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

}; // Native::Line::Console::SessionTimeout


class Native::Line::Console::Timeout : public ydk::Entity
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

}; // Native::Line::Console::Timeout


class Native::Line::Console::Telnet : public ydk::Entity
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

}; // Native::Line::Console::Telnet


class Native::Line::Console::Transport : public ydk::Entity
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

        class Input; //type: Native::Line::Console::Transport::Input
        class Output; //type: Native::Line::Console::Transport::Output
        class Preferred; //type: Native::Line::Console::Transport::Preferred

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Transport::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Transport::Output> output;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Console::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Console::Transport


class Native::Line::Console::Transport::Input : public ydk::Entity
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

}; // Native::Line::Console::Transport::Input


class Native::Line::Console::Transport::Output : public ydk::Entity
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

}; // Native::Line::Console::Transport::Output


class Native::Line::Console::Transport::Preferred : public ydk::Entity
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

}; // Native::Line::Console::Transport::Preferred


class Native::Line::Console::UsbInactivityTimeout : public ydk::Entity
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

}; // Native::Line::Console::UsbInactivityTimeout


class Native::Line::Vty : public ydk::Entity
{
    public:
        Vty();
        ~Vty();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
                class Stopbits;

}; // Native::Line::Vty


class Native::Line::Vty::Authorization : public ydk::Entity
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

        class Command; //type: Native::Line::Vty::Authorization::Command

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Authorization::Command> command;
        
}; // Native::Line::Vty::Authorization


class Native::Line::Vty::Authorization::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AcccessList; //type: Native::Line::Vty::AccessClass::AcccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Vty::AccessClass


class Native::Line::Vty::AccessClass::AcccessList : public ydk::Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Native::Line::Vty::Autocommand : public ydk::Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::Vty::Autocommand::NoSuppressLinenumber

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Vty::Autocommand


class Native::Line::Vty::Autocommand::NoSuppressLinenumber : public ydk::Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AbortCharacter; //type: Native::Line::Vty::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Vty::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Vty::AutocommandOptions::Nohangup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Vty::AutocommandOptions


class Native::Line::Vty::AutocommandOptions::AbortCharacter : public ydk::Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

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

}; // Native::Line::Vty::AutocommandOptions::AbortCharacter


class Native::Line::Vty::AutocommandOptions::Delay : public ydk::Entity
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

        ydk::YLeaf time; //type: uint8

}; // Native::Line::Vty::AutocommandOptions::Delay


class Native::Line::Vty::AutocommandOptions::Nohangup : public ydk::Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Native::Line::Vty::NoExec : public ydk::Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prompt; //type: Native::Line::Vty::Exec::Prompt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Exec::Prompt> prompt;
        
}; // Native::Line::Vty::Exec


class Native::Line::Vty::Exec::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: empty

}; // Native::Line::Vty::Exec::Prompt

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

class Native::Line::Aux::First : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;

};

class Native::Line::Aux::Stopbits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_1__DOT__5;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Line::Aux::AccessClass::AcccessList::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::Aux::EscapeCharacter::Char_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf BREAK;
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf NONE;

};

class Native::Line::Aux::Ip::NetmaskFormat::Format : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bit_count;
        static const ydk::Enum::YLeaf decimal;
        static const ydk::Enum::YLeaf hexadecimal;

};

class Native::Line::Aux::Ipv6::AccessClass::AccessClass_::EnumerationInOut : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::Aux::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

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


}
}

#endif /* _CISCO_IOS_XE_NATIVE_170_ */

