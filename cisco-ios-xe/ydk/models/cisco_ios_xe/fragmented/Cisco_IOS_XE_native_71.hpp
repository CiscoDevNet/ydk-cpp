#ifndef _CISCO_IOS_XE_NATIVE_71_
#define _CISCO_IOS_XE_NATIVE_71_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_70.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Vasiright::Standby::StandbyList::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        YLeaf text; //type: string
        class Md5; //type: Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Authentication


class Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5


class Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        YLeaf timeout; //type: uint16
        class EncryptEnum;

}; // Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::Vasiright::Standby::StandbyList::Ip : public Entity
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

        YLeaf address; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::Vasiright::Standby::StandbyList::Ip


class Native::Interface::Vasiright::Standby::StandbyList::Preempt : public Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Preempt


class Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay : public Entity
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

        YLeaf minimum; //type: uint16
        YLeaf reload; //type: uint16
        YLeaf sync; //type: uint16

}; // Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay


class Native::Interface::Vasiright::Standby::StandbyList::Redirect : public Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unknown; //type: empty
        class Advertisement; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement : public Entity
{
    public:
        Advertisement();
        ~Advertisement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authentication; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Md5; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        YLeaf timeout; //type: uint16
        class EncryptEnum;

}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf advertisement; //type: uint16
        YLeaf holddown; //type: uint16

}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers


class Native::Interface::Vasiright::Standby::StandbyList::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelloInterval; //type: Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Timers


class Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime


class Native::Interface::Vasiright::Standby::StandbyList::Track : public Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf decrement; //type: uint8
        YLeaf shutdown; //type: empty

}; // Native::Interface::Vasiright::Standby::StandbyList::Track


class Native::Interface::Vasiright::AccessSession : public Entity
{
    public:
        AccessSession();
        ~AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf closed; //type: empty
        YLeaf host_mode; //type: HostModeEnum
        class PortControl; //type: Native::Interface::Vasiright::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::Vasiright::AccessSession


class Native::Interface::Vasiright::AccessSession::PortControl : public Entity
{
    public:
        PortControl();
        ~PortControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: empty

}; // Native::Interface::Vasiright::AccessSession::PortControl


class Native::Interface::Vasiright::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Vasiright::StormControl::Action
        class Broadcast; //type: Native::Interface::Vasiright::StormControl::Broadcast
        class Multicast; //type: Native::Interface::Vasiright::StormControl::Multicast
        class Unicast; //type: Native::Interface::Vasiright::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast> unicast;
        
}; // Native::Interface::Vasiright::StormControl


class Native::Interface::Vasiright::StormControl::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: decimal64
        YLeaf shutdown; //type: empty
        YLeaf trap; //type: empty

}; // Native::Interface::Vasiright::StormControl::Action


class Native::Interface::Vasiright::StormControl::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Include; //type: Native::Interface::Vasiright::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::Vasiright::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::Vasiright::StormControl::Broadcast


class Native::Interface::Vasiright::StormControl::Broadcast::Include : public Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast; //type: empty

}; // Native::Interface::Vasiright::StormControl::Broadcast::Include


class Native::Interface::Vasiright::StormControl::Broadcast::Level : public Entity
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

        YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Vasiright::StormControl::Broadcast::Level


class Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps


class Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps


class Native::Interface::Vasiright::StormControl::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Interface::Vasiright::StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Multicast::Level> level;
        
}; // Native::Interface::Vasiright::StormControl::Multicast


class Native::Interface::Vasiright::StormControl::Multicast::Level : public Entity
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

        YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Vasiright::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::Vasiright::StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::Vasiright::StormControl::Multicast::Level


class Native::Interface::Vasiright::StormControl::Multicast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Vasiright::StormControl::Multicast::Level::Bps


class Native::Interface::Vasiright::StormControl::Multicast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Vasiright::StormControl::Multicast::Level::Pps


class Native::Interface::Vasiright::StormControl::Unicast : public Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Interface::Vasiright::StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast::Level> level;
        
}; // Native::Interface::Vasiright::StormControl::Unicast


class Native::Interface::Vasiright::StormControl::Unicast::Level : public Entity
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

        class Threshold; //type: Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Vasiright::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Vasiright::StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::Vasiright::StormControl::Unicast::Level


class Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: decimal64
        YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold


class Native::Interface::Vasiright::StormControl::Unicast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Vasiright::StormControl::Unicast::Level::Bps


class Native::Interface::Vasiright::StormControl::Unicast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Vasiright::StormControl::Unicast::Level::Pps


class Native::Interface::Vasiright::Trust : public Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device; //type: DeviceEnum
        class DeviceEnum;

}; // Native::Interface::Vasiright::Trust


class Native::Interface::Vasiright::Utd : public Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Interface::Vasiright::Utd


class Native::Interface::Vasiright::PriorityQueue : public Entity
{
    public:
        PriorityQueue();
        ~PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::Vasiright::PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::Vasiright::PriorityQueue


class Native::Interface::Vasiright::PriorityQueue::CosMap : public Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Vasiright::PriorityQueue::CosMap


class Native::Interface::Vasiright::RcvQueue : public Entity
{
    public:
        RcvQueue();
        ~RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CosMap; //type: Native::Interface::Vasiright::RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::Vasiright::RcvQueue


class Native::Interface::Vasiright::RcvQueue::CosMap : public Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint8
        YLeaf threshold_id; //type: uint8
        YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Vasiright::RcvQueue::CosMap


class Native::Interface::Vasiright::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Interface::Vasiright::Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_> default_;
        
}; // Native::Interface::Vasiright::Peer


class Native::Interface::Vasiright::Peer::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Interface::Vasiright::Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_::Ip> ip;
        
}; // Native::Interface::Vasiright::Peer::Default_


class Native::Interface::Vasiright::Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::Vasiright::Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::Vasiright::Peer::Default_::Ip


class Native::Interface::Vasiright::Peer::Default_::Ip::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Vasiright::Peer::Default_::Ip::Address


class Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool : public Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pools; //type: string

}; // Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool : public Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pools; //type: string

}; // Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool


class Native::Interface::Vasiright::PmPath : public Entity
{
    public:
        PmPath();
        ~PmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf interface_id; //type: uint8

}; // Native::Interface::Vasiright::PmPath


class Native::Interface::Vasiright::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf history; //type: empty
        YLeaf input; //type: string
        YLeaf output; //type: string
        class Type; //type: Native::Interface::Vasiright::ServicePolicy::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type> type;
        
}; // Native::Interface::Vasiright::ServicePolicy


class Native::Interface::Vasiright::ServicePolicy::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Control; //type: Native::Interface::Vasiright::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::Control> control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::Vasiright::ServicePolicy::Type


class Native::Interface::Vasiright::ServicePolicy::Type::Control : public Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subscriber; //type: string

}; // Native::Interface::Vasiright::ServicePolicy::Type::Control


class Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor : public Entity
{
    public:
        PerformanceMonitor();
        ~PerformanceMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf name; //type: string
        class DirectionEnum;

}; // Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain : public Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain


class Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input : public Entity
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

        YLeaf name; //type: string

}; // Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output : public Entity
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

        YLeaf name; //type: string

}; // Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output


class Native::RouteMap : public Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class RouteMapSeq; //type: Native::RouteMap::RouteMapSeq

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq> > route_map_seq;
        
}; // Native::RouteMap


class Native::RouteMap::RouteMapSeq : public Entity
{
    public:
        RouteMapSeq();
        ~RouteMapSeq();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint16
        YLeaf operation_; //type: OperationEnum
        YLeaf description; //type: string
        class Set; //type: Native::RouteMap::RouteMapSeq::Set
        class Match; //type: Native::RouteMap::RouteMapSeq::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set> set;
                class OperationEnum;

}; // Native::RouteMap::RouteMapSeq


class Native::RouteMap::RouteMapSeq::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf automatic_tag; //type: empty
        YLeaf global; //type: empty
        YLeaf local_preference; //type: uint32
        YLeaf metric; //type: string
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf mpls_label; //type: empty
        YLeaf weight; //type: uint32
        YLeaf traffic_index; //type: uint8
        YLeaf vrf; //type: string
        class AigpMetric; //type: Native::RouteMap::RouteMapSeq::Set::AigpMetric
        class AsPath; //type: Native::RouteMap::RouteMapSeq::Set::AsPath
        class Clns; //type: Native::RouteMap::RouteMapSeq::Set::Clns
        class Community; //type: Native::RouteMap::RouteMapSeq::Set::Community
        class CommList; //type: Native::RouteMap::RouteMapSeq::Set::CommList
        class Dampening; //type: Native::RouteMap::RouteMapSeq::Set::Dampening
        class Default_; //type: Native::RouteMap::RouteMapSeq::Set::Default_
        class ExtcommList; //type: Native::RouteMap::RouteMapSeq::Set::ExtcommList
        class Extcommunity; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity
        class Interface; //type: Native::RouteMap::RouteMapSeq::Set::Interface
        class Ip; //type: Native::RouteMap::RouteMapSeq::Set::Ip
        class Ipv6; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6
        class Level; //type: Native::RouteMap::RouteMapSeq::Set::Level
        class Lisp; //type: Native::RouteMap::RouteMapSeq::Set::Lisp
        class Origin; //type: Native::RouteMap::RouteMapSeq::Set::Origin
        class Tag; //type: Native::RouteMap::RouteMapSeq::Set::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AigpMetric> aigp_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath> as_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Clns> clns;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::CommList> comm_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Dampening> dampening;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::ExtcommList> extcomm_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity> extcommunity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Level> level;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Origin> origin;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Tag> tag;
                class MetricTypeEnum;

}; // Native::RouteMap::RouteMapSeq::Set


class Native::RouteMap::RouteMapSeq::Set::AigpMetric : public Entity
{
    public:
        AigpMetric();
        ~AigpMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf igp_metric; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::AigpMetric


class Native::RouteMap::RouteMapSeq::Set::AsPath : public Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prepend; //type: Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend
        class Tag; //type: Native::RouteMap::RouteMapSeq::Set::AsPath::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend> prepend;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath::Tag> tag; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Set::AsPath


class Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend : public Entity
{
    public:
        Prepend();
        ~Prepend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsContainer; //type: Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer
        class LastAsCont; //type: Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer> as_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont> last_as_cont;
        
}; // Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend


class Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer : public Entity
{
    public:
        AsContainer();
        ~AsContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer


class Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont : public Entity
{
    public:
        LastAsCont();
        ~LastAsCont();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_as; //type: uint16

}; // Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont


class Native::RouteMap::RouteMapSeq::Set::AsPath::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::RouteMap::RouteMapSeq::Set::AsPath::Tag


class Native::RouteMap::RouteMapSeq::Set::Clns : public Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Clns::NextHop

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Clns::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Clns


class Native::RouteMap::RouteMapSeq::Set::Clns::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Set::Clns::NextHop


class Native::RouteMap::RouteMapSeq::Set::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        class CommunityWellKnown; //type: Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown> community_well_known;
        
}; // Native::RouteMap::RouteMapSeq::Set::Community


class Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown : public Entity
{
    public:
        CommunityWellKnown();
        ~CommunityWellKnown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf additive; //type: empty
        YLeafList community_list; //type: list of  one of union, enumeration

}; // Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown


class Native::RouteMap::RouteMapSeq::Set::CommList : public Entity
{
    public:
        CommList();
        ~CommList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf comm_list_standard; //type: uint16
        YLeaf comm_list_expanded; //type: uint16
        YLeaf comm_list_name; //type: string
        YLeaf delete_; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::CommList


class Native::RouteMap::RouteMapSeq::Set::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DampeningList; //type: Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList> > dampening_list;
        
}; // Native::RouteMap::RouteMapSeq::Set::Dampening


class Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList : public Entity
{
    public:
        DampeningList();
        ~DampeningList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf half_life_penalty; //type: uint8
        YLeaf restart_penalty; //type: uint16
        YLeaf suppress_penalty; //type: uint16
        YLeaf max_suppress_penalty; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList


class Native::RouteMap::RouteMapSeq::Set::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface> interface;
        
}; // Native::RouteMap::RouteMapSeq::Set::Default_


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface


class Native::RouteMap::RouteMapSeq::Set::ExtcommList : public Entity
{
    public:
        ExtcommList();
        ~ExtcommList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExtRange; //type: Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange
        class ExcommListName; //type: Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName> > excomm_list_name;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange> > ext_range;
        
}; // Native::RouteMap::RouteMapSeq::Set::ExtcommList


class Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange : public Entity
{
    public:
        ExtRange();
        ~ExtRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf comm_list_num; //type: uint16
        YLeaf delete_; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange


class Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName : public Entity
{
    public:
        ExcommListName();
        ~ExcommListName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf delete_; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName


class Native::RouteMap::RouteMapSeq::Set::Extcommunity : public Entity
{
    public:
        Extcommunity();
        ~Extcommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cost; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost
        class Rt; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt
        class Soo; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo
        class VpnDistinguisher; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt> rt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo> soo;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher> vpn_distinguisher;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommunityId; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId
        class Igp; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp
        class PreBestpath; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId> > community_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp> igp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath> pre_bestpath;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId : public Entity
{
    public:
        CommunityId();
        ~CommunityId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_id; //type: uint8
        YLeaf cost_value; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommunityId; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId> > community_id;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId : public Entity
{
    public:
        CommunityId();
        ~CommunityId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_id; //type: uint8
        YLeaf cost_value; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath : public Entity
{
    public:
        PreBestpath();
        ~PreBestpath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommunityId; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId> > community_id;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId : public Entity
{
    public:
        CommunityId();
        ~CommunityId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_id; //type: uint8
        YLeaf cost_value; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt : public Entity
{
    public:
        Rt();
        ~Rt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf additive; //type: empty
        YLeafList asn_nn; //type: list of  string
        class Range; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range> range;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower_limit; //type: string
        YLeaf high_limit; //type: string
        YLeaf additive; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo : public Entity
{
    public:
        Soo();
        ~Soo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn_nn; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher : public Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn_nn; //type: string
        class Range; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range> range;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower_limit; //type: string
        YLeaf high_limit; //type: string
        YLeaf additive; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range


class Native::RouteMap::RouteMapSeq::Set::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::RouteMap::RouteMapSeq::Set::Interface


class Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface


class Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface


class Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface


class Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface


class Native::RouteMap::RouteMapSeq::Set::Ip : public Entity
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

        YLeaf df; //type: uint8
        class Address; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Address
        class Default_; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_
        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop
        class Precedence; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Precedence
        class QosGroup; //type: Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup
        class Tos; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Tos
        class Vrf; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Global> global;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Precedence> precedence; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup> qos_group; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Tos> tos; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Vrf> vrf;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip


class Native::RouteMap::RouteMapSeq::Set::Ip::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Address


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop
        class Vrf; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global> global;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf> vrf;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrfs; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs> > vrfs;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Global


class Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf peer_address; //type: empty
        YLeaf self; //type: empty
        class Dynamic; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic
        class Encapsulate; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate
        class Recursive; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive
        class VerifyAvailability; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic> dynamic;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate> encapsulate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive> recursive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability> verify_availability; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dhcp; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate : public Entity
{
    public:
        Encapsulate();
        ~Encapsulate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l3vpn; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive : public Entity
{
    public:
        Recursive();
        ~Recursive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf global; //type: string
        class Vrf; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf> vrf;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrfs; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs> > vrfs;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        YLeaf ipv4; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability : public Entity
{
    public:
        VerifyAvailability();
        ~VerifyAvailability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4> > ipv4;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf range; //type: uint16

}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4


class Native::RouteMap::RouteMapSeq::Set::Ip::Precedence : public Entity
{
    public:
        Precedence();
        ~Precedence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf precedence_value; //type: uint8
        YLeaf precedence_fields; //type: PrecedenceFieldsEnum
        class PrecedenceFieldsEnum;

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Precedence


class Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup : public Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_id; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup


class Native::RouteMap::RouteMapSeq::Set::Ip::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_value; //type: uint8
        YLeaf tos_fields; //type: TosFieldsEnum
        class TosFieldsEnum;

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Tos


class Native::RouteMap::RouteMapSeq::Set::Ip::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrfs; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs> > vrfs;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Vrf


class Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs


class Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ipv6 : public Entity
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

        YLeaf precedence; //type: uint8
        class Address; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Address
        class Default_; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_
        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop
        class Bvrf; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Address> address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf> > bvrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Global> global;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Address


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop
        class Dvrf; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf> > dvrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global> global;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        class Ipv6S; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S> > ipv6s;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S : public Entity
{
    public:
        Ipv6S();
        ~Ipv6S();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf : public Entity
{
    public:
        Dvrf();
        ~Dvrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dvrf; //type: string
        class Dvrf0; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0> > dvrf0;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0 : public Entity
{
    public:
        Dvrf0();
        ~Dvrf0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dvrf0; //type: string
        YLeaf next_hop; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Global


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf verify_availability; //type: string
        class NhIpv6; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6> > nh_ipv6;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6 : public Entity
{
    public:
        NhIpv6();
        ~NhIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nh_ipv6; //type: string
        YLeaf nh_ipv60; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: empty
        YLeaf recursive; //type: string
        class NhaIpv6; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6
        class Encapsulate; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate
        class VerifyAvailability; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate> encapsulate;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6> > nha_ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability> verify_availability;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6 : public Entity
{
    public:
        NhaIpv6();
        ~NhaIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nha_ipv6; //type: string
        class NhaIpv60; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60> > nha_ipv60;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60 : public Entity
{
    public:
        NhaIpv60();
        ~NhaIpv60();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nha_ipv60; //type: string
        YLeaf nh_ipv6; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate : public Entity
{
    public:
        Encapsulate();
        ~Encapsulate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l3vpn; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability : public Entity
{
    public:
        VerifyAvailability();
        ~VerifyAvailability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VaIpv6; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6> > va_ipv6;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6 : public Entity
{
    public:
        VaIpv6();
        ~VaIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf va_ipv6; //type: string
        YLeaf seq_nh; //type: uint16

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf : public Entity
{
    public:
        Bvrf();
        ~Bvrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bvrf; //type: string
        class Bvrf0; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0> > bvrf0;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0 : public Entity
{
    public:
        Bvrf0();
        ~Bvrf0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bvrf0; //type: string
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bipv6; //type: string
        YLeaf verify_availability; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop


class Native::RouteMap::RouteMapSeq::Set::Level : public Entity
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

        YLeaf level_1; //type: empty
        YLeaf level_1_2; //type: empty
        YLeaf level_2; //type: empty
        YLeaf nssa_only; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Level


class Native::RouteMap::RouteMapSeq::Set::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf locator_set; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Lisp


class Native::RouteMap::RouteMapSeq::Set::Origin : public Entity
{
    public:
        Origin();
        ~Origin();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf origin_value; //type: OriginValueEnum
        YLeaf egp; //type: uint32
        class OriginValueEnum;

}; // Native::RouteMap::RouteMapSeq::Set::Origin


class Native::RouteMap::RouteMapSeq::Set::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag_val; //type: uint32
        YLeaf tag_ipv4; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Tag


class Native::RouteMap::RouteMapSeq::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mpls_label; //type: empty
        YLeaf track; //type: uint16
        class AdditionalPaths; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths
        class AsPath; //type: Native::RouteMap::RouteMapSeq::Match::AsPath
        class Clns; //type: Native::RouteMap::RouteMapSeq::Match::Clns
        class Community; //type: Native::RouteMap::RouteMapSeq::Match::Community
        class Extcommunity; //type: Native::RouteMap::RouteMapSeq::Match::Extcommunity
        class Interface; //type: Native::RouteMap::RouteMapSeq::Match::Interface
        class Ip; //type: Native::RouteMap::RouteMapSeq::Match::Ip
        class Ipv6; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6
        class Length; //type: Native::RouteMap::RouteMapSeq::Match::Length
        class LocalPreference; //type: Native::RouteMap::RouteMapSeq::Match::LocalPreference
        class MdtGroup; //type: Native::RouteMap::RouteMapSeq::Match::MdtGroup
        class Metric; //type: Native::RouteMap::RouteMapSeq::Match::Metric
        class PolicyList; //type: Native::RouteMap::RouteMapSeq::Match::PolicyList
        class RouteType; //type: Native::RouteMap::RouteMapSeq::Match::RouteType
        class Rpki; //type: Native::RouteMap::RouteMapSeq::Match::Rpki
        class SourceProtocol; //type: Native::RouteMap::RouteMapSeq::Match::SourceProtocol
        class Tag; //type: Native::RouteMap::RouteMapSeq::Match::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths> additional_paths;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AsPath> as_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Clns> clns;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Extcommunity> extcommunity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Length> length;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::LocalPreference> local_preference;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::MdtGroup> mdt_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::PolicyList> policy_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::RouteType> route_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Rpki> rpki;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::SourceProtocol> source_protocol; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Tag> tag;
        
}; // Native::RouteMap::RouteMapSeq::Match


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths : public Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AdvertiseSet; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet> advertise_set;
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet : public Entity
{
    public:
        AdvertiseSet();
        ~AdvertiseSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All
        class Best; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best
        class BestRange; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange
        class GroupBest; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All> all; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best> best;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange> best_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest> group_best; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf best; //type: uint8
        YLeaf best_range; //type: uint8
        class GroupBest; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest> group_best; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf best; //type: empty
        YLeaf best_range; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest

class Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Vasiright::AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::Vasiright::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;
        static const Enum::YLeaf cts;
        static const Enum::YLeaf ip_camera;
        static const Enum::YLeaf media_player;

};

class Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::RouteMap::RouteMapSeq::OperationEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Native::RouteMap::RouteMapSeq::Set::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf type_1;
        static const Enum::YLeaf type_2;

};

class Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFieldsEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf routine;

};

class Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFieldsEnum : public Enum
{
    public:
        static const Enum::YLeaf max_reliability;
        static const Enum::YLeaf max_throughput;
        static const Enum::YLeaf min_delay;
        static const Enum::YLeaf min_monetary_cost;
        static const Enum::YLeaf normal;

};

class Native::RouteMap::RouteMapSeq::Set::Origin::OriginValueEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf incomplete;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_71_ */

