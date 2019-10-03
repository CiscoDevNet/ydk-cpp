#ifndef _CISCO_IOS_XE_NATIVE_223_
#define _CISCO_IOS_XE_NATIVE_223_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


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

        ydk::YList environment;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Directory> directory;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Session> session;
        ydk::YList applet;
        
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


class Native::Event::Manager::Session : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Cli; //type: Native::Event::Manager::Session::Cli

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Session::Cli> cli;
        
}; // Native::Event::Manager::Session


class Native::Event::Manager::Session::Cli : public ydk::Entity
{
    public:
        Cli();
        ~Cli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Username; //type: Native::Event::Manager::Session::Cli::Username

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Session::Cli::Username> username;
        
}; // Native::Event::Manager::Session::Cli


class Native::Event::Manager::Session::Cli::Username : public ydk::Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UsernameInWord; //type: Native::Event::Manager::Session::Cli::Username::UsernameInWord

        ydk::YList username_in_word;
        
}; // Native::Event::Manager::Session::Cli::Username


class Native::Event::Manager::Session::Cli::Username::UsernameInWord : public ydk::Entity
{
    public:
        UsernameInWord();
        ~UsernameInWord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf username_in_word; //type: string
        ydk::YLeaf privilege; //type: uint8

}; // Native::Event::Manager::Session::Cli::Username::UsernameInWord


class Native::Event::Manager::Applet : public ydk::Entity
{
    public:
        Applet();
        ~Applet();

        bool has_data() const override;
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
        ydk::YLeaf authorization; //type: Authorization
        ydk::YLeaf class_; //type: string
        ydk::YLeaf trap; //type: empty
        ydk::YLeaf description; //type: string
        class Event_; //type: Native::Event::Manager::Applet::Event_
        class Action; //type: Native::Event::Manager::Applet::Action
        class Trigger; //type: Native::Event::Manager::Applet::Trigger

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_> event;
        ydk::YList action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Trigger> trigger;
                class Authorization;

}; // Native::Event::Manager::Applet


class Native::Event::Manager::Applet::Event_ : public ydk::Entity
{
    public:
        Event_();
        ~Event_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        class None; //type: Native::Event::Manager::Applet::Event_::None
        class Resource; //type: Native::Event::Manager::Applet::Event_::Resource
        class Rpc; //type: Native::Event::Manager::Applet::Event_::Rpc
        class Config; //type: Native::Event::Manager::Applet::Event_::Config
        class Env; //type: Native::Event::Manager::Applet::Event_::Env
        class Oir; //type: Native::Event::Manager::Applet::Event_::Oir
        class Rf; //type: Native::Event::Manager::Applet::Event_::Rf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer> timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::SnmpNotification> snmp_notification;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Syslog> syslog;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::None> none; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Resource> resource;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Rpc> rpc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Config> config; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Env> env;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Oir> oir; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Rf> rf;
        
}; // Native::Event::Manager::Applet::Event_


class Native::Event::Manager::Applet::Event_::Timer : public ydk::Entity
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

        class Absolute; //type: Native::Event::Manager::Applet::Event_::Timer::Absolute
        class Countdown; //type: Native::Event::Manager::Applet::Event_::Timer::Countdown
        class Cron; //type: Native::Event::Manager::Applet::Event_::Timer::Cron
        class Watchdog; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Absolute> absolute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Countdown> countdown;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Cron> cron;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog> watchdog;
        
}; // Native::Event::Manager::Applet::Event_::Timer


class Native::Event::Manager::Applet::Event_::Timer::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf ratelimit; //type: uint32
        ydk::YLeaf time; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Timer::Absolute


class Native::Event::Manager::Applet::Event_::Timer::Countdown : public ydk::Entity
{
    public:
        Countdown();
        ~Countdown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf ratelimit; //type: uint32
        ydk::YLeaf time; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Timer::Countdown


class Native::Event::Manager::Applet::Event_::Timer::Cron : public ydk::Entity
{
    public:
        Cron();
        ~Cron();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf ratelimit; //type: uint32
        ydk::YLeaf cron_entry; //type: string

}; // Native::Event::Manager::Applet::Event_::Timer::Cron


class Native::Event::Manager::Applet::Event_::Timer::Watchdog : public ydk::Entity
{
    public:
        Watchdog();
        ~Watchdog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf ratelimit; //type: uint32
        ydk::YLeaf time; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog


class Native::Event::Manager::Applet::Event_::SnmpNotification : public ydk::Entity
{
    public:
        SnmpNotification();
        ~SnmpNotification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Native::Event::Manager::Applet::Event_::None : public ydk::Entity
{
    public:
        None();
        ~None();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf ratelimit; //type: uint32
        ydk::YLeaf sync; //type: Sync
        class Sync;

}; // Native::Event::Manager::Applet::Event_::None


class Native::Event::Manager::Applet::Event_::Resource : public ydk::Entity
{
    public:
        Resource();
        ~Resource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: string
        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf ratelimit; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Resource


class Native::Event::Manager::Applet::Event_::Rpc : public ydk::Entity
{
    public:
        Rpc();
        ~Rpc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf ratelimit; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Rpc


class Native::Event::Manager::Applet::Event_::Config : public ydk::Entity
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

        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf ratelimit; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Config


class Native::Event::Manager::Applet::Event_::Env : public ydk::Entity
{
    public:
        Env();
        ~Env();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Severity; //type: Native::Event::Manager::Applet::Event_::Env::Severity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Env::Severity> severity;
        
}; // Native::Event::Manager::Applet::Event_::Env


class Native::Event::Manager::Applet::Event_::Env::Severity : public ydk::Entity
{
    public:
        Severity();
        ~Severity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Major; //type: Native::Event::Manager::Applet::Event_::Env::Severity::Major
        class Minor; //type: Native::Event::Manager::Applet::Event_::Env::Severity::Minor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Env::Severity::Major> major_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Env::Severity::Minor> minor; // presence node
        
}; // Native::Event::Manager::Applet::Event_::Env::Severity


class Native::Event::Manager::Applet::Event_::Env::Severity::Major : public ydk::Entity
{
    public:
        Major();
        ~Major();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf ratelimit; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Env::Severity::Major


class Native::Event::Manager::Applet::Event_::Env::Severity::Minor : public ydk::Entity
{
    public:
        Minor();
        ~Minor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf ratelimit; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Env::Severity::Minor


class Native::Event::Manager::Applet::Event_::Oir : public ydk::Entity
{
    public:
        Oir();
        ~Oir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event; //type: Event_
        ydk::YLeaf maxrun; //type: uint32
        class Event_;

}; // Native::Event::Manager::Applet::Event_::Oir


class Native::Event::Manager::Applet::Event_::Rf : public ydk::Entity
{
    public:
        Rf();
        ~Rf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event; //type: string
        ydk::YLeaf maxrun; //type: uint32
        ydk::YLeaf ratelimit; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Rf


class Native::Event::Manager::Applet::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

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
        ydk::YLeaf end; //type: empty
        ydk::YLeaf exit; //type: empty
        class Cli; //type: Native::Event::Manager::Applet::Action::Cli
        class If; //type: Native::Event::Manager::Applet::Action::If
        class Info; //type: Native::Event::Manager::Applet::Action::Info
        class Regexp; //type: Native::Event::Manager::Applet::Action::Regexp
        class SnmpTrap; //type: Native::Event::Manager::Applet::Action::SnmpTrap
        class String; //type: Native::Event::Manager::Applet::Action::String
        class Syslog; //type: Native::Event::Manager::Applet::Action::Syslog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Cli> cli;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::If> if_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info> info;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Regexp> regexp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::SnmpTrap> snmp_trap; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::String> string;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Syslog> syslog;
        
}; // Native::Event::Manager::Applet::Action


class Native::Event::Manager::Applet::Action::Cli : public ydk::Entity
{
    public:
        Cli();
        ~Cli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string

}; // Native::Event::Manager::Applet::Action::Cli


class Native::Event::Manager::Applet::Action::If : public ydk::Entity
{
    public:
        If();
        ~If();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Native::Event::Manager::Applet::Action::If


class Native::Event::Manager::Applet::Action::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Type; //type: Native::Event::Manager::Applet::Action::Info::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type> type;
        
}; // Native::Event::Manager::Applet::Action::Info


class Native::Event::Manager::Applet::Action::Info::Type : public ydk::Entity
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

        class Snmp; //type: Native::Event::Manager::Applet::Action::Info::Type::Snmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type::Snmp> snmp;
        
}; // Native::Event::Manager::Applet::Action::Info::Type


class Native::Event::Manager::Applet::Action::Info::Type::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Var; //type: Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var
        class Trap; //type: Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var> var;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap> trap;
        
}; // Native::Event::Manager::Applet::Action::Info::Type::Snmp


class Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var : public ydk::Entity
{
    public:
        Var();
        ~Var();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf facility; //type: string
        ydk::YLeaf msg; //type: string
        ydk::YLeaf priority; //type: one of uint16, enumeration

}; // Native::Event::Manager::Applet::Action::Syslog


class Native::Event::Manager::Applet::Trigger : public ydk::Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Event::Manager::Applet::Trigger


class Native::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TemplateDetails; //type: Native::Template::TemplateDetails
        class IPCAMERAINTERFACETEMPLATE; //type: Native::Template::IPCAMERAINTERFACETEMPLATE
        class LAPINTERFACETEMPLATE; //type: Native::Template::LAPINTERFACETEMPLATE
        class APINTERFACETEMPLATE; //type: Native::Template::APINTERFACETEMPLATE
        class DMPINTERFACETEMPLATE; //type: Native::Template::DMPINTERFACETEMPLATE
        class IPPHONEINTERFACETEMPLATE; //type: Native::Template::IPPHONEINTERFACETEMPLATE
        class MSPCAMERAINTERFACETEMPLATE; //type: Native::Template::MSPCAMERAINTERFACETEMPLATE
        class MSPVCINTERFACETEMPLATE; //type: Native::Template::MSPVCINTERFACETEMPLATE
        class PRINTERINTERFACETEMPLATE; //type: Native::Template::PRINTERINTERFACETEMPLATE
        class ROUTERINTERFACETEMPLATE; //type: Native::Template::ROUTERINTERFACETEMPLATE
        class SWITCHINTERFACETEMPLATE; //type: Native::Template::SWITCHINTERFACETEMPLATE
        class TPINTERFACETEMPLATE; //type: Native::Template::TPINTERFACETEMPLATE

        ydk::YList template_details;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE> ip_camera_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE> lap_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::APINTERFACETEMPLATE> ap_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::DMPINTERFACETEMPLATE> dmp_interface_template; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPPHONEINTERFACETEMPLATE> ip_phone_interface_template; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::MSPCAMERAINTERFACETEMPLATE> msp_camera_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::MSPVCINTERFACETEMPLATE> msp_vc_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::PRINTERINTERFACETEMPLATE> printer_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::ROUTERINTERFACETEMPLATE> router_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::SWITCHINTERFACETEMPLATE> switch_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE> tp_interface_template;
        
}; // Native::Template


class Native::Template::TemplateDetails : public ydk::Entity
{
    public:
        TemplateDetails();
        ~TemplateDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf load_interval; //type: uint16
        class Ethernet; //type: Native::Template::TemplateDetails::Ethernet
        class ServicePolicy; //type: Native::Template::TemplateDetails::ServicePolicy
        class Switchport; //type: Native::Template::TemplateDetails::Switchport
        class SpanningTree; //type: Native::Template::TemplateDetails::SpanningTree
        class StormControl; //type: Native::Template::TemplateDetails::StormControl
        class Ip; //type: Native::Template::TemplateDetails::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ip> ip;
        
}; // Native::Template::TemplateDetails


class Native::Template::TemplateDetails::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Oam; //type: Native::Template::TemplateDetails::Ethernet::Oam

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam> oam;
        
}; // Native::Template::TemplateDetails::Ethernet


class Native::Template::TemplateDetails::Ethernet::Oam : public ydk::Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkMonitor; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor
        class RemoteFailure; //type: Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor> link_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure> remote_failure;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor : public ydk::Entity
{
    public:
        LinkMonitor();
        ~LinkMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Frame; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame
        class FramePeriod; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod
        class FrameSeconds; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds
        class HighThreshold; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold
        class ReceiveCrc; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc
        class SymbolPeriod; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod
        class TransmitCrc; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame> frame;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod> frame_period;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds> frame_seconds;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold> high_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc> receive_crc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod> symbol_period;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc> transmit_crc;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame : public ydk::Entity
{
    public:
        Frame();
        ~Frame();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold> threshold;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High> high;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod : public ydk::Entity
{
    public:
        FramePeriod();
        ~FramePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold> threshold;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High> high;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds : public ydk::Entity
{
    public:
        FrameSeconds();
        ~FrameSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold> threshold;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High> high;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold : public ydk::Entity
{
    public:
        HighThreshold();
        ~HighThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action> action;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc : public ydk::Entity
{
    public:
        ReceiveCrc();
        ~ReceiveCrc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold> threshold;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High> high;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod : public ydk::Entity
{
    public:
        SymbolPeriod();
        ~SymbolPeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold> threshold;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High> high;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc : public ydk::Entity
{
    public:
        TransmitCrc();
        ~TransmitCrc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold> threshold;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High> high;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold


class Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_range; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High


class Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure : public ydk::Entity
{
    public:
        RemoteFailure();
        ~RemoteFailure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CriticalEvent; //type: Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent
        class DyingGasp; //type: Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp
        class LinkFault; //type: Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent> critical_event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp> dying_gasp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault> link_fault;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure


class Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent : public ydk::Entity
{
    public:
        CriticalEvent();
        ~CriticalEvent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action> action;
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent


class Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action


class Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp : public ydk::Entity
{
    public:
        DyingGasp();
        ~DyingGasp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action> action; // presence node
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp


class Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action


class Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault : public ydk::Entity
{
    public:
        LinkFault();
        ~LinkFault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action> action; // presence node
        
}; // Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault


class Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action


class Native::Template::TemplateDetails::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Template::TemplateDetails::ServicePolicy::Input
        class Output; //type: Native::Template::TemplateDetails::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::ServicePolicy::Output> output;
        
}; // Native::Template::TemplateDetails::ServicePolicy


class Native::Template::TemplateDetails::ServicePolicy::Input : public ydk::Entity
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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::Template::TemplateDetails::ServicePolicy::Input


class Native::Template::TemplateDetails::ServicePolicy::Output : public ydk::Entity
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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::Template::TemplateDetails::ServicePolicy::Output


class Native::Template::TemplateDetails::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::Template::TemplateDetails::Switchport::Mode
        class Block; //type: Native::Template::TemplateDetails::Switchport::Block
        class PortSecurity; //type: Native::Template::TemplateDetails::Switchport::PortSecurity
        class Access; //type: Native::Template::TemplateDetails::Switchport::Access
        class Voice; //type: Native::Template::TemplateDetails::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::Voice> voice;
        
}; // Native::Template::TemplateDetails::Switchport


class Native::Template::TemplateDetails::Switchport::Mode : public ydk::Entity
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

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::Template::TemplateDetails::Switchport::Mode


class Native::Template::TemplateDetails::Switchport::Block : public ydk::Entity
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

        ydk::YLeaf unicast; //type: empty

}; // Native::Template::TemplateDetails::Switchport::Block


class Native::Template::TemplateDetails::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aging; //type: Native::Template::TemplateDetails::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template::TemplateDetails::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template::TemplateDetails::Switchport::PortSecurity


class Native::Template::TemplateDetails::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template::TemplateDetails::Switchport::PortSecurity::Aging


class Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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

        ydk::YLeaf inactivity; //type: empty

}; // Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type


class Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range

        ydk::YList range;
        
}; // Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum


class Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range


class Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access; //type: empty

}; // Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template::TemplateDetails::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protect; //type: empty
        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::Template::TemplateDetails::Switchport::PortSecurity::Violation


class Native::Template::TemplateDetails::Switchport::Access : public ydk::Entity
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

        ydk::YLeaf vlan; //type: uint16

}; // Native::Template::TemplateDetails::Switchport::Access


class Native::Template::TemplateDetails::Switchport::Voice : public ydk::Entity
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

        ydk::YLeaf vlan; //type: uint16

}; // Native::Template::TemplateDetails::Switchport::Voice


class Native::Template::TemplateDetails::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::Template::TemplateDetails::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template::TemplateDetails::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::SpanningTree::Portfast> portfast; // presence node
        
}; // Native::Template::TemplateDetails::SpanningTree


class Native::Template::TemplateDetails::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Template::TemplateDetails::SpanningTree::Bpduguard


class Native::Template::TemplateDetails::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::Template::TemplateDetails::SpanningTree::Portfast


class Native::Template::TemplateDetails::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::Template::TemplateDetails::StormControl::Broadcast
        class Multicast; //type: Native::Template::TemplateDetails::StormControl::Multicast
        class Action; //type: Native::Template::TemplateDetails::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl::Action> action;
        
}; // Native::Template::TemplateDetails::StormControl


class Native::Template::TemplateDetails::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Template::TemplateDetails::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl::Broadcast::Level> level;
        
}; // Native::Template::TemplateDetails::StormControl::Broadcast


class Native::Template::TemplateDetails::StormControl::Broadcast::Level : public ydk::Entity
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

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps> bps;
        
}; // Native::Template::TemplateDetails::StormControl::Broadcast::Level


class Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: string

}; // Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps


class Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps


class Native::Template::TemplateDetails::StormControl::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Template::TemplateDetails::StormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl::Multicast::Level> level;
        
}; // Native::Template::TemplateDetails::StormControl::Multicast


class Native::Template::TemplateDetails::StormControl::Multicast::Level : public ydk::Entity
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

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps
        class Bps; //type: Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps> bps;
        
}; // Native::Template::TemplateDetails::StormControl::Multicast::Level


class Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: string

}; // Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps


class Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps


class Native::Template::TemplateDetails::StormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::Template::TemplateDetails::StormControl::Action


class Native::Template::TemplateDetails::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::Template::TemplateDetails::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ip::Dhcp> dhcp;
        
}; // Native::Template::TemplateDetails::Ip


class Native::Template::TemplateDetails::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snooping; //type: Native::Template::TemplateDetails::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template::TemplateDetails::Ip::Dhcp


class Native::Template::TemplateDetails::Ip::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template::TemplateDetails::Ip::Dhcp::Snooping


class Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit


class Native::Template::IPCAMERAINTERFACETEMPLATE : public ydk::Entity
{
    public:
        IPCAMERAINTERFACETEMPLATE();
        ~IPCAMERAINTERFACETEMPLATE();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Ip> ip;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE


class Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Input; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy


class Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input


class Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
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

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf unicast; //type: empty

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Aging; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Range; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        ydk::YList range;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access; //type: empty

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protect; //type: empty
        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
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

        ydk::YLeaf vlan; //type: uint16

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access


class Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
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

        ydk::YLeaf vlan; //type: uint16

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice


class Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast> portfast; // presence node
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree


class Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Broadcast; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast
        class Multicast; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast
        class Action; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action> action;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Level; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: string

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Level; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level> level;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps
        class Bps; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps> bps;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: string

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps


class Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action


class Native::Template::IPCAMERAINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Ip


class Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Snooping; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp


class Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rate; //type: uint16

}; // Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::Template::LAPINTERFACETEMPLATE : public ydk::Entity
{
    public:
        LAPINTERFACETEMPLATE();
        ~LAPINTERFACETEMPLATE();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template::LAPINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::Template::LAPINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::Template::LAPINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::Template::LAPINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Ip> ip;
        
}; // Native::Template::LAPINTERFACETEMPLATE


class Native::Template::LAPINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Input; //type: Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::Template::LAPINTERFACETEMPLATE::ServicePolicy


class Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input


class Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output


class Native::Template::LAPINTERFACETEMPLATE::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::Template::LAPINTERFACETEMPLATE::Switchport


class Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
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

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode


class Native::Template::LAPINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf unicast; //type: empty

}; // Native::Template::LAPINTERFACETEMPLATE::Switchport::Block


class Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Aging; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity


class Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Range; //type: Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        ydk::YList range;
        
}; // Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum

class Native::Event::Manager::Applet::Authorization : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bypass;

        static int get_enum_value(const std::string & name) {
            if (name == "bypass") return 0;
            return -1;
        }
};

class Native::Event::Manager::Applet::Event_::Track::State : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            if (name == "down") return 1;
            if (name == "up") return 2;
            return -1;
        }
};

class Native::Event::Manager::Applet::Event_::None::Sync : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf yes;
        static const ydk::Enum::YLeaf no;

        static int get_enum_value(const std::string & name) {
            if (name == "yes") return 0;
            if (name == "no") return 1;
            return -1;
        }
};

class Native::Event::Manager::Applet::Event_::Oir::Event_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf insert;
        static const ydk::Enum::YLeaf removal;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            if (name == "insert") return 1;
            if (name == "removal") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "counter") return 0;
            if (name == "gauge") return 1;
            if (name == "int") return 2;
            if (name == "ipv4") return 3;
            if (name == "octet") return 4;
            if (name == "string") return 5;
            if (name == "uint") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_223_ */

