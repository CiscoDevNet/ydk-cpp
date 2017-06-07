#ifndef _CISCO_IOS_XE_NATIVE_65_
#define _CISCO_IOS_XE_NATIVE_65_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_64.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::VirtualTemplate::Logging::Event::SpanningTree : public Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: empty

}; // Native::Interface::VirtualTemplate::Logging::Event::SpanningTree


class Native::Interface::VirtualTemplate::Logging::Event::SubifLinkStatus : public Entity
{
    public:
        SubifLinkStatus();
        ~SubifLinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore_bulk; //type: empty

}; // Native::Interface::VirtualTemplate::Logging::Event::SubifLinkStatus


class Native::Interface::VirtualTemplate::Mdix : public Entity
{
    public:
        Mdix();
        ~Mdix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: boolean

}; // Native::Interface::VirtualTemplate::Mdix


class Native::Interface::VirtualTemplate::Mop : public Entity
{
    public:
        Mop();
        ~Mop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Native::Interface::VirtualTemplate::Mop


class Native::Interface::VirtualTemplate::Interface_Qos : public Entity
{
    public:
        Interface_Qos();
        ~Interface_Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Trust; //type: Native::Interface::VirtualTemplate::Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Interface_Qos::Trust> trust;
        
}; // Native::Interface::VirtualTemplate::Interface_Qos


class Native::Interface::VirtualTemplate::Interface_Qos::Trust : public Entity
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

}; // Native::Interface::VirtualTemplate::Interface_Qos::Trust


class Native::Interface::VirtualTemplate::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: VersionEnum
        YLeaf bfd; //type: empty
        YLeaf mac_refresh; //type: uint8
        class Delay; //type: Native::Interface::VirtualTemplate::Standby::Delay
        class UseBia; //type: Native::Interface::VirtualTemplate::Standby::UseBia
        class StandbyList; //type: Native::Interface::VirtualTemplate::Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::VirtualTemplate::Standby


class Native::Interface::VirtualTemplate::Standby::Delay : public Entity
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

}; // Native::Interface::VirtualTemplate::Standby::Delay


class Native::Interface::VirtualTemplate::Standby::UseBia : public Entity
{
    public:
        UseBia();
        ~UseBia();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Scope; //type: Native::Interface::VirtualTemplate::Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::VirtualTemplate::Standby::UseBia


class Native::Interface::VirtualTemplate::Standby::UseBia::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty

}; // Native::Interface::VirtualTemplate::Standby::UseBia::Scope


class Native::Interface::VirtualTemplate::Standby::StandbyList : public Entity
{
    public:
        StandbyList();
        ~StandbyList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_number; //type: uint16
        YLeaf follow; //type: string
        YLeaf ipv6; //type: one of string, enumeration
        YLeaf mac_address; //type: string
        YLeaf name; //type: string
        YLeaf priority; //type: uint8
        class Authentication; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::VirtualTemplate::Standby::StandbyList


class Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication : public Entity
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
        class Md5; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication


class Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication::Md5


class Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::VirtualTemplate::Standby::StandbyList::Ip : public Entity
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

}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Ip


class Native::Interface::VirtualTemplate::Standby::StandbyList::Preempt : public Entity
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

        class Delay; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Preempt


class Native::Interface::VirtualTemplate::Standby::StandbyList::Preempt::Delay : public Entity
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

}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Preempt::Delay


class Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect : public Entity
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
        class Advertisement; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect


class Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement : public Entity
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

        class Authentication; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
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

        class Md5; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Timers : public Entity
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

}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Timers


class Native::Interface::VirtualTemplate::Standby::StandbyList::Timers : public Entity
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

        class HelloInterval; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::VirtualTemplate::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Timers


class Native::Interface::VirtualTemplate::Standby::StandbyList::Timers::HelloInterval : public Entity
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

}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::VirtualTemplate::Standby::StandbyList::Timers::HoldTime : public Entity
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

}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Timers::HoldTime


class Native::Interface::VirtualTemplate::Standby::StandbyList::Track : public Entity
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

}; // Native::Interface::VirtualTemplate::Standby::StandbyList::Track


class Native::Interface::VirtualTemplate::AccessSession : public Entity
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
        class PortControl; //type: Native::Interface::VirtualTemplate::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::VirtualTemplate::AccessSession


class Native::Interface::VirtualTemplate::AccessSession::PortControl : public Entity
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

}; // Native::Interface::VirtualTemplate::AccessSession::PortControl


class Native::Interface::VirtualTemplate::StormControl : public Entity
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

        class Action; //type: Native::Interface::VirtualTemplate::StormControl::Action
        class Broadcast; //type: Native::Interface::VirtualTemplate::StormControl::Broadcast
        class Multicast; //type: Native::Interface::VirtualTemplate::StormControl::Multicast
        class Unicast; //type: Native::Interface::VirtualTemplate::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Unicast> unicast;
        
}; // Native::Interface::VirtualTemplate::StormControl


class Native::Interface::VirtualTemplate::StormControl::Action : public Entity
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

}; // Native::Interface::VirtualTemplate::StormControl::Action


class Native::Interface::VirtualTemplate::StormControl::Broadcast : public Entity
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

        class Include; //type: Native::Interface::VirtualTemplate::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::VirtualTemplate::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::VirtualTemplate::StormControl::Broadcast


class Native::Interface::VirtualTemplate::StormControl::Broadcast::Include : public Entity
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

}; // Native::Interface::VirtualTemplate::StormControl::Broadcast::Include


class Native::Interface::VirtualTemplate::StormControl::Broadcast::Level : public Entity
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
        class Bps; //type: Native::Interface::VirtualTemplate::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::VirtualTemplate::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::VirtualTemplate::StormControl::Broadcast::Level


class Native::Interface::VirtualTemplate::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Interface::VirtualTemplate::StormControl::Broadcast::Level::Bps


class Native::Interface::VirtualTemplate::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Interface::VirtualTemplate::StormControl::Broadcast::Level::Pps


class Native::Interface::VirtualTemplate::StormControl::Multicast : public Entity
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

        class Level; //type: Native::Interface::VirtualTemplate::StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Multicast::Level> level;
        
}; // Native::Interface::VirtualTemplate::StormControl::Multicast


class Native::Interface::VirtualTemplate::StormControl::Multicast::Level : public Entity
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
        class Bps; //type: Native::Interface::VirtualTemplate::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::VirtualTemplate::StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::VirtualTemplate::StormControl::Multicast::Level


class Native::Interface::VirtualTemplate::StormControl::Multicast::Level::Bps : public Entity
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

}; // Native::Interface::VirtualTemplate::StormControl::Multicast::Level::Bps


class Native::Interface::VirtualTemplate::StormControl::Multicast::Level::Pps : public Entity
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

}; // Native::Interface::VirtualTemplate::StormControl::Multicast::Level::Pps


class Native::Interface::VirtualTemplate::StormControl::Unicast : public Entity
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

        class Level; //type: Native::Interface::VirtualTemplate::StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Unicast::Level> level;
        
}; // Native::Interface::VirtualTemplate::StormControl::Unicast


class Native::Interface::VirtualTemplate::StormControl::Unicast::Level : public Entity
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

        class Threshold; //type: Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::VirtualTemplate::StormControl::Unicast::Level


class Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Threshold : public Entity
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

}; // Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Threshold


class Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Bps : public Entity
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

}; // Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Bps


class Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Pps : public Entity
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

}; // Native::Interface::VirtualTemplate::StormControl::Unicast::Level::Pps


class Native::Interface::VirtualTemplate::Trust : public Entity
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

}; // Native::Interface::VirtualTemplate::Trust


class Native::Interface::VirtualTemplate::Utd : public Entity
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

}; // Native::Interface::VirtualTemplate::Utd


class Native::Interface::VirtualTemplate::PriorityQueue : public Entity
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
        class CosMap; //type: Native::Interface::VirtualTemplate::PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::VirtualTemplate::PriorityQueue


class Native::Interface::VirtualTemplate::PriorityQueue::CosMap : public Entity
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

}; // Native::Interface::VirtualTemplate::PriorityQueue::CosMap


class Native::Interface::VirtualTemplate::RcvQueue : public Entity
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

        class CosMap; //type: Native::Interface::VirtualTemplate::RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::VirtualTemplate::RcvQueue


class Native::Interface::VirtualTemplate::RcvQueue::CosMap : public Entity
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

}; // Native::Interface::VirtualTemplate::RcvQueue::CosMap


class Native::Interface::VirtualTemplate::Peer : public Entity
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

        class Default_; //type: Native::Interface::VirtualTemplate::Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Peer::Default_> default_;
        
}; // Native::Interface::VirtualTemplate::Peer


class Native::Interface::VirtualTemplate::Peer::Default_ : public Entity
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

        class Ip; //type: Native::Interface::VirtualTemplate::Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Peer::Default_::Ip> ip;
        
}; // Native::Interface::VirtualTemplate::Peer::Default_


class Native::Interface::VirtualTemplate::Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::VirtualTemplate::Peer::Default_::Ip


class Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address : public Entity
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
        class DhcpPool; //type: Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address


class Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address::DhcpPool : public Entity
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

}; // Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address::Pool : public Entity
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

}; // Native::Interface::VirtualTemplate::Peer::Default_::Ip::Address::Pool


class Native::Interface::VirtualTemplate::PmPath : public Entity
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

}; // Native::Interface::VirtualTemplate::PmPath


class Native::Interface::VirtualTemplate::CarrierDelay : public Entity
{
    public:
        CarrierDelay();
        ~CarrierDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16
        class Down; //type: Native::Interface::VirtualTemplate::CarrierDelay::Down
        class Up; //type: Native::Interface::VirtualTemplate::CarrierDelay::Up

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::CarrierDelay::Down> down;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::CarrierDelay::Up> up;
        
}; // Native::Interface::VirtualTemplate::CarrierDelay


class Native::Interface::VirtualTemplate::CarrierDelay::Down : public Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::VirtualTemplate::CarrierDelay::Down


class Native::Interface::VirtualTemplate::CarrierDelay::Up : public Entity
{
    public:
        Up();
        ~Up();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::VirtualTemplate::CarrierDelay::Up


class Native::Interface::VirtualTemplate::ChannelGroup : public Entity
{
    public:
        ChannelGroup();
        ~ChannelGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf mode; //type: ModeEnum
        YLeaf non_silent; //type: empty
        YLeaf link; //type: uint8
        YLeaf auto_; //type: empty
        class ModeEnum;

}; // Native::Interface::VirtualTemplate::ChannelGroup


class Native::Interface::VirtualTemplate::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Oam; //type: Native::Interface::VirtualTemplate::Ethernet::Oam

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam> oam; // presence node
        
}; // Native::Interface::VirtualTemplate::Ethernet


class Native::Interface::VirtualTemplate::Ethernet::Oam : public Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_rate; //type: uint8
        YLeaf min_rate; //type: uint8
        YLeaf mode; //type: ModeEnum
        YLeaf timeout; //type: uint8
        class LinkMonitor; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor
        class RemoteFailure; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure
        class RemoteLoopback; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor> link_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure> remote_failure;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback> remote_loopback;
                class ModeEnum;

}; // Native::Interface::VirtualTemplate::Ethernet::Oam


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor : public Entity
{
    public:
        LinkMonitor();
        ~LinkMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf on; //type: empty
        YLeaf supported; //type: empty
        class Frame; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame
        class FramePeriod; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod
        class FrameSeconds; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds
        class HighThreshold; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold
        class ReceiveCrc; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc
        class SymbolPeriod; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame> frame;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod> frame_period;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds> frame_seconds;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold> high_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc> receive_crc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod> symbol_period;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame : public Entity
{
    public:
        Frame();
        ~Frame();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame::Threshold> threshold;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame::Threshold : public Entity
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

        YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame::Threshold::High> high;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame::Threshold


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame::Threshold::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf thresh; //type: uint16
        YLeaf none; //type: empty

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::Frame::Threshold::High


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod : public Entity
{
    public:
        FramePeriod();
        ~FramePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold> threshold;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold : public Entity
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

        YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High> high;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf f_thresh; //type: uint16
        YLeaf none; //type: empty

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds : public Entity
{
    public:
        FrameSeconds();
        ~FrameSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold> threshold;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold : public Entity
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

        YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High> high;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf e_thresh; //type: uint16
        YLeaf none; //type: empty

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold : public Entity
{
    public:
        HighThreshold();
        ~HighThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action> action;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action : public Entity
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

        YLeaf error_disable_interface; //type: empty

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc : public Entity
{
    public:
        ReceiveCrc();
        ~ReceiveCrc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold> threshold;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold : public Entity
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

        YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High> high;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crc_thresh; //type: uint16
        YLeaf none; //type: empty

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod : public Entity
{
    public:
        SymbolPeriod();
        ~SymbolPeriod();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold> threshold;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold : public Entity
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

        YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High> high;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold


class Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf err_thresh; //type: uint16
        YLeaf none; //type: empty

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High


class Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure : public Entity
{
    public:
        RemoteFailure();
        ~RemoteFailure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CriticalEvent; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent
        class DyingGasp; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp
        class LinkFault; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent> critical_event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp> dying_gasp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault> link_fault;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure


class Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent : public Entity
{
    public:
        CriticalEvent();
        ~CriticalEvent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action> action;
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent


class Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action : public Entity
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

        YLeaf error_disable_interface; //type: empty

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action


class Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp : public Entity
{
    public:
        DyingGasp();
        ~DyingGasp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action> action; // presence node
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp


class Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action : public Entity
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

        YLeaf error_disable_interface; //type: empty

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action


class Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault : public Entity
{
    public:
        LinkFault();
        ~LinkFault();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action> action; // presence node
        
}; // Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault


class Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action : public Entity
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

        YLeaf error_disable_interface; //type: empty

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action


class Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback : public Entity
{
    public:
        RemoteLoopback();
        ~RemoteLoopback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf supported; //type: empty
        YLeaf timeout; //type: uint8

}; // Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback


class Native::Interface::VirtualTemplate::Negotiation : public Entity
{
    public:
        Negotiation();
        ~Negotiation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: boolean

}; // Native::Interface::VirtualTemplate::Negotiation


class Native::Interface::VirtualTemplate::Synchronous : public Entity
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

        YLeaf mode; //type: empty

}; // Native::Interface::VirtualTemplate::Synchronous


class Native::Interface::VirtualTemplate::Speed : public Entity
{
    public:
        Speed();
        ~Speed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: empty
        YLeaf value_10; //type: empty
        YLeaf value_100; //type: empty
        YLeaf value_1000; //type: empty
        YLeaf value_10000; //type: empty
        YLeaf nonegotiate; //type: empty

}; // Native::Interface::VirtualTemplate::Speed


class Native::Interface::VirtualTemplate::Plim : public Entity
{
    public:
        Plim();
        ~Plim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ethernet; //type: Native::Interface::VirtualTemplate::Plim::Ethernet
        class Qos; //type: Native::Interface::VirtualTemplate::Plim::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Qos> qos;
        
}; // Native::Interface::VirtualTemplate::Plim


class Native::Interface::VirtualTemplate::Plim::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan> vlan;
        
}; // Native::Interface::VirtualTemplate::Plim::Ethernet


class Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Filter; //type: Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter> filter;
        
}; // Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan


class Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter


class Native::Interface::VirtualTemplate::Plim::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Interface::VirtualTemplate::Plim::Qos::Input

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Qos::Input> input;
        
}; // Native::Interface::VirtualTemplate::Plim::Qos


class Native::Interface::VirtualTemplate::Plim::Qos::Input : public Entity
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

        class Queue; //type: Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue> queue;
        
}; // Native::Interface::VirtualTemplate::Plim::Qos::Input


class Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue : public Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Zero; //type: Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero
        class StrictPriority; //type: Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority> strict_priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero> zero;
        
}; // Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue


class Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero : public Entity
{
    public:
        Zero();
        ~Zero();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pause; //type: Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause> pause;
        
}; // Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero


class Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause : public Entity
{
    public:
        Pause();
        ~Pause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf threshold; //type: uint8

}; // Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause


class Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority : public Entity
{
    public:
        StrictPriority();
        ~StrictPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pause; //type: Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause> pause;
        
}; // Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority


class Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause : public Entity
{
    public:
        Pause();
        ~Pause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf threshold; //type: uint8

}; // Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause


class Native::Interface::VirtualTemplate::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_sessions; //type: uint16
        class Enable; //type: Native::Interface::VirtualTemplate::Pppoe::Enable

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Pppoe::Enable> enable; // presence node
        
}; // Native::Interface::VirtualTemplate::Pppoe


class Native::Interface::VirtualTemplate::Pppoe::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Interface::VirtualTemplate::Pppoe::Enable


class Native::Interface::VirtualTemplate::Service : public Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Instance; //type: Native::Interface::VirtualTemplate::Service::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance> > instance;
        
}; // Native::Interface::VirtualTemplate::Service


class Native::Interface::VirtualTemplate::Service::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf trunk; //type: empty
        YLeaf gigabitethernet; //type: empty
        YLeaf ethernet; //type: empty
        YLeaf ethernet_evc_name; //type: string
        YLeaf description; //type: string
        YLeaf evc_name; //type: string
        YLeaf group; //type: uint32
        YLeaf shutdown; //type: empty
        class Encapsulation; //type: Native::Interface::VirtualTemplate::Service::Instance::Encapsulation
        class Ip; //type: Native::Interface::VirtualTemplate::Service::Instance::Ip
        class Ipv6; //type: Native::Interface::VirtualTemplate::Service::Instance::Ipv6
        class Rewrite; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite
        class Errdisable; //type: Native::Interface::VirtualTemplate::Service::Instance::Errdisable
        class EthernetContainer; //type: Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer
        class Snmp; //type: Native::Interface::VirtualTemplate::Service::Instance::Snmp
        class BridgeDomain; //type: Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain
        class Mac; //type: Native::Interface::VirtualTemplate::Service::Instance::Mac
        class ServicePolicy; //type: Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy
        class Cfm; //type: Native::Interface::VirtualTemplate::Service::Instance::Cfm
        class L2Protocol; //type: Native::Interface::VirtualTemplate::Service::Instance::L2Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain> bridge_domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Cfm> cfm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Errdisable> errdisable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer> ethernet_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::L2Protocol> l2protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite> rewrite;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Snmp> snmp;
        
}; // Native::Interface::VirtualTemplate::Service::Instance


class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty
        class Dot1Ad; //type: Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad
        class Dot1Q; //type: Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q
        class PriorityTagged; //type: Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged
        class Untagged; //type: Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad> dot1ad;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged> priority_tagged;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged> untagged; // presence node
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Encapsulation


class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad : public Entity
{
    public:
        Dot1Ad();
        ~Dot1Ad();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exact; //type: empty
        YLeafList id; //type: list of  one of uint16, string, enumeration
        YLeafList cos; //type: list of  uint8
        YLeafList dot1q; //type: list of  one of uint16, string, enumeration
        YLeafList etype; //type: list of  EtypeEnum
        class Cos2; //type: Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2> cos2;
                class IdEnum;
        class Dot1QEnum;
        class EtypeEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad


class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2 : public Entity
{
    public:
        Cos2();
        ~Cos2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList cos; //type: list of  uint8

}; // Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2


class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q : public Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exact; //type: empty
        YLeaf vlan_type; //type: VlanTypeEnum
        YLeafList id; //type: list of  one of uint16, string, enumeration
        YLeafList cos; //type: list of  uint8
        YLeafList second_dot1q; //type: list of  one of uint16, string, enumeration
        YLeafList etype; //type: list of  EtypeEnum
        class Cos2; //type: Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2> cos2;
                class IdEnum;
        class SecondDot1QEnum;
        class EtypeEnum;
        class VlanTypeEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q


class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2 : public Entity
{
    public:
        Cos2();
        ~Cos2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList cos; //type: list of  uint8

}; // Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2


class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged : public Entity
{
    public:
        PriorityTagged();
        ~PriorityTagged();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList etype; //type: list of  EtypeEnum
        class CosContainer; //type: Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer> cos_container;
                class EtypeEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged


class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer : public Entity
{
    public:
        CosContainer();
        ~CosContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList cos; //type: list of  uint8

}; // Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer


class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged : public Entity
{
    public:
        Untagged();
        ~Untagged();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged


class Native::Interface::VirtualTemplate::Service::Instance::Ip : public Entity
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

        class Acl; //type: Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl
        class Dhcp; //type: Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp
        class Verify; //type: Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify> verify;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Ip


class Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_group; //type: one of uint16, string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl


class Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Relay; //type: Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay> relay;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp


class Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay


class Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Option; //type: Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information


class Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subscriber_id; //type: string

}; // Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option


class Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify : public Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: empty
        YLeaf vlan; //type: empty
        YLeaf dhcp_snooping; //type: empty
        YLeaf port_security; //type: empty

}; // Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify


class Native::Interface::VirtualTemplate::Service::Instance::Ipv6 : public Entity
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

        YLeaf traffic_filter; //type: string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Interface::VirtualTemplate::Service::Instance::Ipv6


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite : public Entity
{
    public:
        Rewrite();
        ~Rewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ingress; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress> ingress;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress : public Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tag; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag> tag;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag : public Entity
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

        class Pop; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop
        class Push; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push
        class Translate; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop> pop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push> push;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate> translate;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop : public Entity
{
    public:
        Pop();
        ~Pop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf way; //type: WayEnum
        YLeaf mode; //type: ModeEnum
        class WayEnum;
        class ModeEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate : public Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class T1To1; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1
        class T1To2; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2
        class T2To1; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1
        class T2To2; //type: Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1> t1_to_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2> t1_to_2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1> t2_to_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2> t2_to_2;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1 : public Entity
{
    public:
        T1To1();
        ~T1To1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2 : public Entity
{
    public:
        T1To2();
        ~T1To2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf second_dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1 : public Entity
{
    public:
        T2To1();
        ~T2To1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1


class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2 : public Entity
{
    public:
        T2To2();
        ~T2To2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf second_dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2


class Native::Interface::VirtualTemplate::Service::Instance::Errdisable : public Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Recovery; //type: Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery> recovery;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Errdisable


class Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery : public Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cause; //type: Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause> cause;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery


class Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause : public Entity
{
    public:
        Cause();
        ~Cause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_security; //type: uint32

}; // Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause


class Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer : public Entity
{
    public:
        EthernetContainer();
        ~EthernetContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ethernet; //type: Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet> ethernet;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer


class Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lmi; //type: Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi
        class Loopback; //type: Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi> lmi;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback> loopback;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet


class Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi : public Entity
{
    public:
        Lmi();
        ~Lmi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CeVlan; //type: Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan> ce_vlan;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi


class Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan : public Entity
{
    public:
        CeVlan();
        ~CeVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Map; //type: Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map> map;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan


class Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map : public Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any; //type: empty
        YLeaf default_; //type: empty
        YLeaf untagged; //type: empty
        class VlanRange; //type: Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange> vlan_range;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map


class Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16
        YLeaf comma; //type: uint16
        YLeaf hyphen; //type: uint16

}; // Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange


class Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback : public Entity
{
    public:
        Loopback();
        ~Loopback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Permit; //type: Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit> permit;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback


class Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external; //type: empty
        YLeaf internal; //type: empty

}; // Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit


class Native::Interface::VirtualTemplate::Service::Instance::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Trap; //type: Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap
        class Ifindex; //type: Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap> trap;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Snmp


class Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap : public Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_status; //type: empty

}; // Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap


class Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex : public Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf persist; //type: empty

}; // Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex


class Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain : public Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_id; //type: uint16
        YLeaf from_encapsulation; //type: empty
        class SplitHorizon; //type: Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon> split_horizon;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain


class Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon : public Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: uint8

}; // Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon

class Native::Interface::VirtualTemplate::Interface_Qos::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;

};

class Native::Interface::VirtualTemplate::Standby::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::VirtualTemplate::Standby::StandbyList::Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf autoconfig;

};

class Native::Interface::VirtualTemplate::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::VirtualTemplate::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::VirtualTemplate::AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::VirtualTemplate::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;
        static const Enum::YLeaf cts;
        static const Enum::YLeaf ip_camera;
        static const Enum::YLeaf media_player;

};

class Native::Interface::VirtualTemplate::ChannelGroup::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf desirable;
        static const Enum::YLeaf on;
        static const Enum::YLeaf passive;

};

class Native::Interface::VirtualTemplate::Ethernet::Oam::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};

class Native::Interface::VirtualTemplate::Pppoe::Enable::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf global;

};

class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Dot1QEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pppoe_all;
        static const Enum::YLeaf pppoe_discovery;
        static const Enum::YLeaf pppoe_session;

};

class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::SecondDot1QEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::EtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pppoe_all;
        static const Enum::YLeaf pppoe_discovery;
        static const Enum::YLeaf pppoe_session;

};

class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::VlanTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0x88A8;
        static const Enum::YLeaf Y_0x9100;
        static const Enum::YLeaf Y_0x9200;

};

class Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pppoe_all;
        static const Enum::YLeaf pppoe_discovery;
        static const Enum::YLeaf pppoe_session;

};

class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::WayEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_65_ */

