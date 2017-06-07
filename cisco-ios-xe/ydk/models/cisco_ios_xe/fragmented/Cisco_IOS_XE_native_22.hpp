#ifndef _CISCO_IOS_XE_NATIVE_22_
#define _CISCO_IOS_XE_NATIVE_22_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_21.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::EmbeddedServiceEngine::Ipv6::Address::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf anycast; //type: empty
        YLeaf eui_64; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ipv6::Address::PrefixList


class Native::Interface::EmbeddedServiceEngine::Ipv6::Address::LinkLocalAddress : public Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf link_local; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ipv6::Address::LinkLocalAddress


class Native::Interface::EmbeddedServiceEngine::Ipv6::Nd : public Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Ipv6::Nd


class Native::Interface::EmbeddedServiceEngine::Ipv6::TrafficFilter : public Entity
{
    public:
        TrafficFilter();
        ~TrafficFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf access_list; //type: string
        class DirectionEnum;

}; // Native::Interface::EmbeddedServiceEngine::Ipv6::TrafficFilter


class Native::Interface::EmbeddedServiceEngine::Logging : public Entity
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

        class Event; //type: Native::Interface::EmbeddedServiceEngine::Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Logging::Event> event;
        
}; // Native::Interface::EmbeddedServiceEngine::Logging


class Native::Interface::EmbeddedServiceEngine::Logging::Event : public Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: empty
        YLeaf link_status; //type: empty
        YLeaf trunk_status; //type: empty
        YLeaf nfas_status; //type: empty
        YLeaf power_inline_status; //type: empty
        YLeaf status; //type: empty
        class SpanningTree; //type: Native::Interface::EmbeddedServiceEngine::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::EmbeddedServiceEngine::Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::EmbeddedServiceEngine::Logging::Event


class Native::Interface::EmbeddedServiceEngine::Logging::Event::SpanningTree : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Logging::Event::SpanningTree


class Native::Interface::EmbeddedServiceEngine::Logging::Event::SubifLinkStatus : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Logging::Event::SubifLinkStatus


class Native::Interface::EmbeddedServiceEngine::Mdix : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Mdix


class Native::Interface::EmbeddedServiceEngine::Mop : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Mop


class Native::Interface::EmbeddedServiceEngine::Interface_Qos : public Entity
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

        class Trust; //type: Native::Interface::EmbeddedServiceEngine::Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Interface_Qos::Trust> trust;
        
}; // Native::Interface::EmbeddedServiceEngine::Interface_Qos


class Native::Interface::EmbeddedServiceEngine::Interface_Qos::Trust : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Interface_Qos::Trust


class Native::Interface::EmbeddedServiceEngine::Standby : public Entity
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
        class Delay; //type: Native::Interface::EmbeddedServiceEngine::Standby::Delay
        class UseBia; //type: Native::Interface::EmbeddedServiceEngine::Standby::UseBia
        class StandbyList; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::EmbeddedServiceEngine::Standby


class Native::Interface::EmbeddedServiceEngine::Standby::Delay : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::Delay


class Native::Interface::EmbeddedServiceEngine::Standby::UseBia : public Entity
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

        class Scope; //type: Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::EmbeddedServiceEngine::Standby::UseBia


class Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::UseBia::Scope


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList : public Entity
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
        class Authentication; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication : public Entity
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
        class Md5; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ip


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt : public Entity
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

        class Delay; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Preempt::Delay


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect : public Entity
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
        class Advertisement; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement : public Entity
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

        class Authentication; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
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

        class Md5; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Timers


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers : public Entity
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

        class HelloInterval; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Timers::HoldTime


class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Track


class Native::Interface::EmbeddedServiceEngine::AccessSession : public Entity
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
        class PortControl; //type: Native::Interface::EmbeddedServiceEngine::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::EmbeddedServiceEngine::AccessSession


class Native::Interface::EmbeddedServiceEngine::AccessSession::PortControl : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::AccessSession::PortControl


class Native::Interface::EmbeddedServiceEngine::StormControl : public Entity
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

        class Action; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Action
        class Broadcast; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast
        class Multicast; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Multicast
        class Unicast; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Unicast> unicast;
        
}; // Native::Interface::EmbeddedServiceEngine::StormControl


class Native::Interface::EmbeddedServiceEngine::StormControl::Action : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::StormControl::Action


class Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast : public Entity
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

        class Include; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast


class Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Include


class Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level : public Entity
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
        class Bps; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level


class Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Bps


class Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::StormControl::Broadcast::Level::Pps


class Native::Interface::EmbeddedServiceEngine::StormControl::Multicast : public Entity
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

        class Level; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level> level;
        
}; // Native::Interface::EmbeddedServiceEngine::StormControl::Multicast


class Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level : public Entity
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
        class Bps; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level


class Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Bps


class Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::StormControl::Multicast::Level::Pps


class Native::Interface::EmbeddedServiceEngine::StormControl::Unicast : public Entity
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

        class Level; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level> level;
        
}; // Native::Interface::EmbeddedServiceEngine::StormControl::Unicast


class Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level : public Entity
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

        class Threshold; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level


class Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Threshold


class Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Bps


class Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::StormControl::Unicast::Level::Pps


class Native::Interface::EmbeddedServiceEngine::Trust : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Trust


class Native::Interface::EmbeddedServiceEngine::Utd : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Utd


class Native::Interface::EmbeddedServiceEngine::PriorityQueue : public Entity
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
        class CosMap; //type: Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::EmbeddedServiceEngine::PriorityQueue


class Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::PriorityQueue::CosMap


class Native::Interface::EmbeddedServiceEngine::RcvQueue : public Entity
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

        class CosMap; //type: Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::EmbeddedServiceEngine::RcvQueue


class Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::RcvQueue::CosMap


class Native::Interface::EmbeddedServiceEngine::Peer : public Entity
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

        class Default_; //type: Native::Interface::EmbeddedServiceEngine::Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Peer::Default_> default_;
        
}; // Native::Interface::EmbeddedServiceEngine::Peer


class Native::Interface::EmbeddedServiceEngine::Peer::Default_ : public Entity
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

        class Ip; //type: Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip> ip;
        
}; // Native::Interface::EmbeddedServiceEngine::Peer::Default_


class Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip


class Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address : public Entity
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
        class DhcpPool; //type: Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address


class Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::Peer::Default_::Ip::Address::Pool


class Native::Interface::EmbeddedServiceEngine::PmPath : public Entity
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

}; // Native::Interface::EmbeddedServiceEngine::PmPath


class Native::Interface::Fastethernet : public Entity
{
    public:
        Fastethernet();
        ~Fastethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        YLeaf channel_protocol; //type: ChannelProtocolEnum
        YLeaf duplex; //type: DuplexEnum
        class SwitchportConf; //type: Native::Interface::Fastethernet::SwitchportConf
        class Switchport; //type: Native::Interface::Fastethernet::Switchport
        class Arp; //type: Native::Interface::Fastethernet::Arp
        class Backup; //type: Native::Interface::Fastethernet::Backup
        class Cemoudp; //type: Native::Interface::Fastethernet::Cemoudp
        class CwsTunnel; //type: Native::Interface::Fastethernet::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Fastethernet::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Fastethernet::Encapsulation
        class FairQueueConf; //type: Native::Interface::Fastethernet::FairQueueConf
        class FairQueue; //type: Native::Interface::Fastethernet::FairQueue
        class Flowcontrol; //type: Native::Interface::Fastethernet::Flowcontrol
        class Isis; //type: Native::Interface::Fastethernet::Isis
        class KeepaliveSettings; //type: Native::Interface::Fastethernet::KeepaliveSettings
        class Bfd; //type: Native::Interface::Fastethernet::Bfd
        class Bandwidth; //type: Native::Interface::Fastethernet::Bandwidth
        class Dampening; //type: Native::Interface::Fastethernet::Dampening
        class Domain; //type: Native::Interface::Fastethernet::Domain
        class HoldQueue; //type: Native::Interface::Fastethernet::HoldQueue
        class Mpls; //type: Native::Interface::Fastethernet::Mpls
        class IpVrf; //type: Native::Interface::Fastethernet::IpVrf
        class Vrf; //type: Native::Interface::Fastethernet::Vrf
        class Ip; //type: Native::Interface::Fastethernet::Ip
        class Ipv6; //type: Native::Interface::Fastethernet::Ipv6
        class Logging; //type: Native::Interface::Fastethernet::Logging
        class Mdix; //type: Native::Interface::Fastethernet::Mdix
        class Mop; //type: Native::Interface::Fastethernet::Mop
        class Interface_Qos; //type: Native::Interface::Fastethernet::Interface_Qos
        class Standby; //type: Native::Interface::Fastethernet::Standby
        class AccessSession; //type: Native::Interface::Fastethernet::AccessSession
        class StormControl; //type: Native::Interface::Fastethernet::StormControl
        class Trust; //type: Native::Interface::Fastethernet::Trust
        class Utd; //type: Native::Interface::Fastethernet::Utd
        class PriorityQueue; //type: Native::Interface::Fastethernet::PriorityQueue
        class RcvQueue; //type: Native::Interface::Fastethernet::RcvQueue
        class Peer; //type: Native::Interface::Fastethernet::Peer
        class PmPath; //type: Native::Interface::Fastethernet::PmPath
        class CarrierDelay; //type: Native::Interface::Fastethernet::CarrierDelay
        class ChannelGroup; //type: Native::Interface::Fastethernet::ChannelGroup
        class Ethernet; //type: Native::Interface::Fastethernet::Ethernet
        class Negotiation; //type: Native::Interface::Fastethernet::Negotiation
        class Synchronous; //type: Native::Interface::Fastethernet::Synchronous
        class Speed; //type: Native::Interface::Fastethernet::Speed
        class Plim; //type: Native::Interface::Fastethernet::Plim
        class Pppoe; //type: Native::Interface::Fastethernet::Pppoe
        class Service; //type: Native::Interface::Fastethernet::Service
        class Xconnect; //type: Native::Interface::Fastethernet::Xconnect
        class Cdp; //type: Native::Interface::Fastethernet::Cdp
        class Crypto; //type: Native::Interface::Fastethernet::Crypto
        class Cts; //type: Native::Interface::Fastethernet::Cts
        class Dot1X; //type: Native::Interface::Fastethernet::Dot1X
        class Performance; //type: Native::Interface::Fastethernet::Performance
        class ServicePolicy; //type: Native::Interface::Fastethernet::ServicePolicy
        class Snmp; //type: Native::Interface::Fastethernet::Snmp
        class Lisp; //type: Native::Interface::Fastethernet::Lisp
        class Mka; //type: Native::Interface::Fastethernet::Mka
        class Ospfv3; //type: Native::Interface::Fastethernet::Ospfv3
        class Power; //type: Native::Interface::Fastethernet::Power
        class Authentication; //type: Native::Interface::Fastethernet::Authentication
        class Mab; //type: Native::Interface::Fastethernet::Mab
        class SpanningTree; //type: Native::Interface::Fastethernet::SpanningTree
        class Auto_; //type: Native::Interface::Fastethernet::Auto_
        class Datalink; //type: Native::Interface::Fastethernet::Datalink
        class Energywise; //type: Native::Interface::Fastethernet::Energywise
        class Location; //type: Native::Interface::Fastethernet::Location
        class Mac; //type: Native::Interface::Fastethernet::Mac
        class Macro; //type: Native::Interface::Fastethernet::Macro
        class DualActive; //type: Native::Interface::Fastethernet::DualActive
        class Lldp; //type: Native::Interface::Fastethernet::Lldp
        class LoadBalancing; //type: Native::Interface::Fastethernet::LoadBalancing
        class VlanRange; //type: Native::Interface::Fastethernet::VlanRange
        class Switch; //type: Native::Interface::Fastethernet::Switch
        class SrrQueue; //type: Native::Interface::Fastethernet::SrrQueue
        class Macsec; //type: Native::Interface::Fastethernet::Macsec
        class DeviceTracking; //type: Native::Interface::Fastethernet::DeviceTracking
        class Udld; //type: Native::Interface::Fastethernet::Udld
        class ZoneMember; //type: Native::Interface::Fastethernet::ZoneMember

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cdp> cdp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::ChannelGroup> channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Crypto> crypto;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Datalink> datalink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::DeviceTracking> device_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::DualActive> dual_active;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Energywise> energywise; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Lldp> lldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::LoadBalancing> load_balancing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Location> location;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mab> mab; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Macro> macro;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Macsec> macsec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mka> mka;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Negotiation> negotiation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Performance> performance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Plim> plim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Power> power;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SpanningTree> spanning_tree;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Speed> speed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SrrQueue> srr_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switch> switch;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Synchronous> synchronous;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Udld> udld;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Utd> utd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::VlanRange> > vlan_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::ZoneMember> zone_member;
                class IfStateEnum;
        class ServiceInsertionEnum;
        class ChannelProtocolEnum;
        class DuplexEnum;

}; // Native::Interface::Fastethernet


class Native::Interface::Fastethernet::SwitchportConf : public Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchport; //type: boolean

}; // Native::Interface::Fastethernet::SwitchportConf


class Native::Interface::Fastethernet::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nonegotiate; //type: empty
        YLeaf protected_; //type: empty
        YLeaf host; //type: empty
        class Access; //type: Native::Interface::Fastethernet::Switchport::Access
        class Block; //type: Native::Interface::Fastethernet::Switchport::Block
        class Mode; //type: Native::Interface::Fastethernet::Switchport::Mode
        class PortSecurity; //type: Native::Interface::Fastethernet::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::Fastethernet::Switchport::Trunk
        class Voice; //type: Native::Interface::Fastethernet::Switchport::Voice
        class Priority; //type: Native::Interface::Fastethernet::Switchport::Priority
        class Autostate; //type: Native::Interface::Fastethernet::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::Fastethernet::Switchport::PrivateVlan
        class DeviceTracking; //type: Native::Interface::Fastethernet::Switchport::DeviceTracking

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Autostate> autostate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::DeviceTracking> device_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Trunk> trunk;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Voice> voice;
        
}; // Native::Interface::Fastethernet::Switchport


class Native::Interface::Fastethernet::Switchport::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Fastethernet::Switchport::Access::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::Fastethernet::Switchport::Access


class Native::Interface::Fastethernet::Switchport::Access::Vlan : public Entity
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

        YLeaf vlan; //type: one of uint16, enumeration
        YLeaf name; //type: string
        class VlanEnum;

}; // Native::Interface::Fastethernet::Switchport::Access::Vlan


class Native::Interface::Fastethernet::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast; //type: empty
        YLeaf unicast; //type: empty

}; // Native::Interface::Fastethernet::Switchport::Block


class Native::Interface::Fastethernet::Switchport::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: DynamicEnum
        class Access; //type: Native::Interface::Fastethernet::Switchport::Mode::Access
        class Dot1QTunnel; //type: Native::Interface::Fastethernet::Switchport::Mode::Dot1QTunnel
        class PrivateVlan; //type: Native::Interface::Fastethernet::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::Fastethernet::Switchport::Mode::Trunk

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Mode::Dot1QTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Mode::Trunk> trunk; // presence node
                class DynamicEnum;

}; // Native::Interface::Fastethernet::Switchport::Mode


class Native::Interface::Fastethernet::Switchport::Mode::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fastethernet::Switchport::Mode::Access


class Native::Interface::Fastethernet::Switchport::Mode::Dot1QTunnel : public Entity
{
    public:
        Dot1QTunnel();
        ~Dot1QTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fastethernet::Switchport::Mode::Dot1QTunnel


class Native::Interface::Fastethernet::Switchport::Mode::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty
        YLeaf promiscuous; //type: empty

}; // Native::Interface::Fastethernet::Switchport::Mode::PrivateVlan


class Native::Interface::Fastethernet::Switchport::Mode::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fastethernet::Switchport::Mode::Trunk


class Native::Interface::Fastethernet::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf violation; //type: ViolationEnum
        class Aging; //type: Native::Interface::Fastethernet::Switchport::PortSecurity::Aging
        class MacAddress; //type: Native::Interface::Fastethernet::Switchport::PortSecurity::MacAddress
        class Maximum; //type: Native::Interface::Fastethernet::Switchport::PortSecurity::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PortSecurity::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PortSecurity::Maximum> maximum;
                class ViolationEnum;

}; // Native::Interface::Fastethernet::Switchport::PortSecurity


class Native::Interface::Fastethernet::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        YLeaf type; //type: TypeEnum
        class TypeEnum;

}; // Native::Interface::Fastethernet::Switchport::PortSecurity::Aging


class Native::Interface::Fastethernet::Switchport::PortSecurity::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sticky; //type: empty
        YLeaf hw_address; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::Fastethernet::Switchport::PortSecurity::MacAddress


class Native::Interface::Fastethernet::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_addresses; //type: uint16
        YLeaf vlan; //type: string

}; // Native::Interface::Fastethernet::Switchport::PortSecurity::Maximum


class Native::Interface::Fastethernet::Switchport::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        class Allowed; //type: Native::Interface::Fastethernet::Switchport::Trunk::Allowed
        class Native_; //type: Native::Interface::Fastethernet::Switchport::Trunk::Native_
        class Pruning; //type: Native::Interface::Fastethernet::Switchport::Trunk::Pruning

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Trunk::Allowed> allowed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Trunk::Native_> native;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Trunk::Pruning> pruning;
                class EncapsulationEnum;

}; // Native::Interface::Fastethernet::Switchport::Trunk


class Native::Interface::Fastethernet::Switchport::Trunk::Allowed : public Entity
{
    public:
        Allowed();
        ~Allowed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Fastethernet::Switchport::Trunk::Allowed::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Trunk::Allowed::Vlan> vlan;
        
}; // Native::Interface::Fastethernet::Switchport::Trunk::Allowed


class Native::Interface::Fastethernet::Switchport::Trunk::Allowed::Vlan : public Entity
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

        YLeaf vlans; //type: string
        YLeaf add; //type: one of uint16, string
        YLeaf all; //type: empty
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::Fastethernet::Switchport::Trunk::Allowed::Vlan


class Native::Interface::Fastethernet::Switchport::Trunk::Native_ : public Entity
{
    public:
        Native_();
        ~Native_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, enumeration
        class VlanEnum;

}; // Native::Interface::Fastethernet::Switchport::Trunk::Native_


class Native::Interface::Fastethernet::Switchport::Trunk::Pruning : public Entity
{
    public:
        Pruning();
        ~Pruning();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Fastethernet::Switchport::Trunk::Pruning::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Trunk::Pruning::Vlan> vlan;
        
}; // Native::Interface::Fastethernet::Switchport::Trunk::Pruning


class Native::Interface::Fastethernet::Switchport::Trunk::Pruning::Vlan : public Entity
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

        YLeaf add; //type: one of uint16, string
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList vlans; //type: list of  one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::Fastethernet::Switchport::Trunk::Pruning::Vlan


class Native::Interface::Fastethernet::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Fastethernet::Switchport::Voice::Vlan
        class Detect; //type: Native::Interface::Fastethernet::Switchport::Voice::Detect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Voice::Detect> detect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Voice::Vlan> vlan;
        
}; // Native::Interface::Fastethernet::Switchport::Voice


class Native::Interface::Fastethernet::Switchport::Voice::Vlan : public Entity
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

        YLeaf vlan; //type: one of uint16, string, enumeration
        YLeaf name; //type: string
        class VlanEnum;

}; // Native::Interface::Fastethernet::Switchport::Voice::Vlan


class Native::Interface::Fastethernet::Switchport::Voice::Detect : public Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CiscoPhone; //type: Native::Interface::Fastethernet::Switchport::Voice::Detect::CiscoPhone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Voice::Detect::CiscoPhone> cisco_phone; // presence node
        
}; // Native::Interface::Fastethernet::Switchport::Voice::Detect


class Native::Interface::Fastethernet::Switchport::Voice::Detect::CiscoPhone : public Entity
{
    public:
        CiscoPhone();
        ~CiscoPhone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf full_duplex; //type: empty

}; // Native::Interface::Fastethernet::Switchport::Voice::Detect::CiscoPhone


class Native::Interface::Fastethernet::Switchport::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Extend; //type: Native::Interface::Fastethernet::Switchport::Priority::Extend

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::Priority::Extend> extend;
        
}; // Native::Interface::Fastethernet::Switchport::Priority


class Native::Interface::Fastethernet::Switchport::Priority::Extend : public Entity
{
    public:
        Extend();
        ~Extend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        YLeaf cos; //type: uint8

}; // Native::Interface::Fastethernet::Switchport::Priority::Extend


class Native::Interface::Fastethernet::Switchport::Autostate : public Entity
{
    public:
        Autostate();
        ~Autostate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exclude; //type: empty

}; // Native::Interface::Fastethernet::Switchport::Autostate


class Native::Interface::Fastethernet::Switchport::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Association; //type: Native::Interface::Fastethernet::Switchport::PrivateVlan::Association
        class HostAssociation; //type: Native::Interface::Fastethernet::Switchport::PrivateVlan::HostAssociation
        class Mapping; //type: Native::Interface::Fastethernet::Switchport::PrivateVlan::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PrivateVlan::Association> association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PrivateVlan::HostAssociation> host_association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PrivateVlan::Mapping> mapping;
        
}; // Native::Interface::Fastethernet::Switchport::PrivateVlan


class Native::Interface::Fastethernet::Switchport::PrivateVlan::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Native::Interface::Fastethernet::Switchport::PrivateVlan::Association::Host
        class Mapping; //type: Native::Interface::Fastethernet::Switchport::PrivateVlan::Association::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PrivateVlan::Association::Host> host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switchport::PrivateVlan::Association::Mapping> mapping;
        
}; // Native::Interface::Fastethernet::Switchport::PrivateVlan::Association


class Native::Interface::Fastethernet::Switchport::PrivateVlan::Association::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::Fastethernet::Switchport::PrivateVlan::Association::Host


class Native::Interface::Fastethernet::Switchport::PrivateVlan::Association::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::Fastethernet::Switchport::PrivateVlan::Association::Mapping


class Native::Interface::Fastethernet::Switchport::PrivateVlan::HostAssociation : public Entity
{
    public:
        HostAssociation();
        ~HostAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::Fastethernet::Switchport::PrivateVlan::HostAssociation


class Native::Interface::Fastethernet::Switchport::PrivateVlan::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::Fastethernet::Switchport::PrivateVlan::Mapping


class Native::Interface::Fastethernet::Switchport::DeviceTracking : public Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Fastethernet::Switchport::DeviceTracking


class Native::Interface::Fastethernet::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Interface::Fastethernet::Arp


class Native::Interface::Fastethernet::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Fastethernet::Backup::Delay
        class Interface_; //type: Native::Interface::Fastethernet::Backup::Interface_
        class Load; //type: Native::Interface::Fastethernet::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Backup::Load> load;
        
}; // Native::Interface::Fastethernet::Backup


class Native::Interface::Fastethernet::Backup::Delay : public Entity
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

        YLeaf failure; //type: one of uint32, enumeration
        YLeaf secondary_disable; //type: one of uint32, enumeration
        class FailureEnum;
        class SecondaryDisableEnum;

}; // Native::Interface::Fastethernet::Backup::Delay


class Native::Interface::Fastethernet::Backup::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

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
        class AtmSubinterface; //type: Native::Interface::Fastethernet::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Fastethernet::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Fastethernet::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Fastethernet::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Fastethernet::Backup::Interface_


class Native::Interface::Fastethernet::Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::Fastethernet::Backup::Interface_::AtmSubinterface


class Native::Interface::Fastethernet::Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::Fastethernet::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Fastethernet::Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::Fastethernet::Backup::Interface_::LispSubinterface


class Native::Interface::Fastethernet::Backup::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::Fastethernet::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Fastethernet::Backup::Load : public Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kickin; //type: one of uint32, enumeration
        YLeaf kickout; //type: one of uint32, enumeration
        class KickinEnum;
        class KickoutEnum;

}; // Native::Interface::Fastethernet::Backup::Load


class Native::Interface::Fastethernet::Cemoudp : public Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reserve; //type: Native::Interface::Fastethernet::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Fastethernet::Cemoudp


class Native::Interface::Fastethernet::Cemoudp::Reserve : public Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acr; //type: uint8

}; // Native::Interface::Fastethernet::Cemoudp::Reserve


class Native::Interface::Fastethernet::CwsTunnel : public Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::Fastethernet::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::CwsTunnel::Out> out;
        
}; // Native::Interface::Fastethernet::CwsTunnel


class Native::Interface::Fastethernet::CwsTunnel::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Fastethernet::CwsTunnel::Out


class Native::Interface::Fastethernet::L2ProtocolTunnel : public Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdp; //type: empty
        YLeaf stp; //type: empty
        YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::Fastethernet::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Fastethernet::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Fastethernet::L2ProtocolTunnel


class Native::Interface::Fastethernet::L2ProtocolTunnel::DropThreshold : public Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Fastethernet::L2ProtocolTunnel::DropThreshold


class Native::Interface::Fastethernet::L2ProtocolTunnel::ShutdownThreshold : public Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Fastethernet::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Fastethernet::Encapsulation : public Entity
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

        class Dot1Q; //type: Native::Interface::Fastethernet::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Fastethernet::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Fastethernet::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Fastethernet::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Fastethernet::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Fastethernet::Encapsulation


class Native::Interface::Fastethernet::Encapsulation::Dot1Q : public Entity
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

        YLeaf vlan_id; //type: uint16
        YLeaf native; //type: empty

}; // Native::Interface::Fastethernet::Encapsulation::Dot1Q


class Native::Interface::Fastethernet::Encapsulation::Isl : public Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16

}; // Native::Interface::Fastethernet::Encapsulation::Isl


class Native::Interface::Fastethernet::Encapsulation::Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fastethernet::Encapsulation::Ppp


class Native::Interface::Fastethernet::Encapsulation::Slip : public Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fastethernet::Encapsulation::Slip


class Native::Interface::Fastethernet::Encapsulation::FrameRelay : public Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ietf; //type: empty

}; // Native::Interface::Fastethernet::Encapsulation::FrameRelay


class Native::Interface::Fastethernet::FairQueueConf : public Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::Fastethernet::FairQueueConf


class Native::Interface::Fastethernet::FairQueue : public Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::Fastethernet::FairQueue


class Native::Interface::Fastethernet::Flowcontrol : public Entity
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

        YLeaf receive; //type: ReceiveEnum
        YLeaf send; //type: SendEnum
        class ReceiveEnum;
        class SendEnum;

}; // Native::Interface::Fastethernet::Flowcontrol


class Native::Interface::Fastethernet::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_interval; //type: uint32
        YLeaf mesh_group; //type: one of uint32, enumeration
        YLeaf network; //type: NetworkEnum
        YLeaf protocol; //type: ProtocolEnum
        YLeaf retransmit_interval; //type: uint16
        YLeaf retransmit_throttle_interval; //type: uint16
        YLeaf tag; //type: uint32
        class AdjacencyFilter; //type: Native::Interface::Fastethernet::Isis::AdjacencyFilter
        class Advertise; //type: Native::Interface::Fastethernet::Isis::Advertise
        class Authentication; //type: Native::Interface::Fastethernet::Isis::Authentication
        class CircuitType; //type: Native::Interface::Fastethernet::Isis::CircuitType
        class CsnpInterval; //type: Native::Interface::Fastethernet::Isis::CsnpInterval
        class Hello; //type: Native::Interface::Fastethernet::Isis::Hello
        class HelloInterval; //type: Native::Interface::Fastethernet::Isis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::Fastethernet::Isis::HelloMultiplier
        class Ipv6; //type: Native::Interface::Fastethernet::Isis::Ipv6
        class Metric; //type: Native::Interface::Fastethernet::Isis::Metric
        class Password; //type: Native::Interface::Fastethernet::Isis::Password
        class Priority; //type: Native::Interface::Fastethernet::Isis::Priority
        class ThreeWayHandshake; //type: Native::Interface::Fastethernet::Isis::ThreeWayHandshake

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::CircuitType> circuit_type; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::CsnpInterval> csnp_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroupEnum;
        class NetworkEnum;
        class ProtocolEnum;

}; // Native::Interface::Fastethernet::Isis


class Native::Interface::Fastethernet::Isis::AdjacencyFilter : public Entity
{
    public:
        AdjacencyFilter();
        ~AdjacencyFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf match_all; //type: empty

}; // Native::Interface::Fastethernet::Isis::AdjacencyFilter


class Native::Interface::Fastethernet::Isis::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: empty

}; // Native::Interface::Fastethernet::Isis::Advertise


class Native::Interface::Fastethernet::Isis::Authentication : public Entity
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

        class Mode; //type: Native::Interface::Fastethernet::Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::Fastethernet::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::Fastethernet::Isis::Authentication::SendOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Authentication::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::Fastethernet::Isis::Authentication


class Native::Interface::Fastethernet::Isis::Authentication::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Md5; //type: Native::Interface::Fastethernet::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::Fastethernet::Isis::Authentication::Mode::Text

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::Fastethernet::Isis::Authentication::Mode


class Native::Interface::Fastethernet::Isis::Authentication::Mode::Md5 : public Entity
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

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Fastethernet::Isis::Authentication::Mode::Md5


class Native::Interface::Fastethernet::Isis::Authentication::Mode::Text : public Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Fastethernet::Isis::Authentication::Mode::Text


class Native::Interface::Fastethernet::Isis::Authentication::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class KeyChainList; //type: Native::Interface::Fastethernet::Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Interface::Fastethernet::Isis::Authentication::KeyChain


class Native::Interface::Fastethernet::Isis::Authentication::KeyChain::KeyChainList : public Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum
        YLeaf name; //type: string

}; // Native::Interface::Fastethernet::Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::Fastethernet::Isis::Authentication::SendOnly : public Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Fastethernet::Isis::Authentication::SendOnly


class Native::Interface::Fastethernet::Isis::CircuitType : public Entity
{
    public:
        CircuitType();
        ~CircuitType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        class LevelsEnum;

}; // Native::Interface::Fastethernet::Isis::CircuitType


class Native::Interface::Fastethernet::Isis::CsnpInterval : public Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        class CsnpIntervalList; //type: Native::Interface::Fastethernet::Isis::CsnpInterval::CsnpIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::CsnpInterval::CsnpIntervalList> > csnp_interval_list;
        
}; // Native::Interface::Fastethernet::Isis::CsnpInterval


class Native::Interface::Fastethernet::Isis::CsnpInterval::CsnpIntervalList : public Entity
{
    public:
        CsnpIntervalList();
        ~CsnpIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint16
        class LevelsEnum;

}; // Native::Interface::Fastethernet::Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::Fastethernet::Isis::Hello : public Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Padding; //type: Native::Interface::Fastethernet::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::Fastethernet::Isis::Hello


class Native::Interface::Fastethernet::Isis::Hello::Padding : public Entity
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

        YLeaf always; //type: empty

}; // Native::Interface::Fastethernet::Isis::Hello::Padding


class Native::Interface::Fastethernet::Isis::HelloInterval : public Entity
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

        YLeaf value_; //type: one of uint16, enumeration
        class HelloIntervalList; //type: Native::Interface::Fastethernet::Isis::HelloInterval::HelloIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::HelloInterval::HelloIntervalList> > hello_interval_list;
                class ValueEnum;

}; // Native::Interface::Fastethernet::Isis::HelloInterval


class Native::Interface::Fastethernet::Isis::HelloInterval::HelloIntervalList : public Entity
{
    public:
        HelloIntervalList();
        ~HelloIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint16, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::Fastethernet::Isis::HelloInterval::HelloIntervalList


class Native::Interface::Fastethernet::Isis::HelloMultiplier : public Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        class HelloMultiplierList; //type: Native::Interface::Fastethernet::Isis::HelloMultiplier::HelloMultiplierList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::HelloMultiplier::HelloMultiplierList> > hello_multiplier_list;
        
}; // Native::Interface::Fastethernet::Isis::HelloMultiplier


class Native::Interface::Fastethernet::Isis::HelloMultiplier::HelloMultiplierList : public Entity
{
    public:
        HelloMultiplierList();
        ~HelloMultiplierList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint16
        class LevelsEnum;

}; // Native::Interface::Fastethernet::Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::Fastethernet::Isis::Ipv6 : public Entity
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

        YLeaf tag; //type: uint32
        class Metric; //type: Native::Interface::Fastethernet::Isis::Ipv6::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Ipv6::Metric> metric;
        
}; // Native::Interface::Fastethernet::Isis::Ipv6


class Native::Interface::Fastethernet::Isis::Ipv6::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::Fastethernet::Isis::Ipv6::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Ipv6::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Fastethernet::Isis::Ipv6::Metric


class Native::Interface::Fastethernet::Isis::Ipv6::Metric::MetricList : public Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint32, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::Fastethernet::Isis::Ipv6::Metric::MetricList


class Native::Interface::Fastethernet::Isis::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::Fastethernet::Isis::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Fastethernet::Isis::Metric


class Native::Interface::Fastethernet::Isis::Metric::MetricList : public Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint32, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::Fastethernet::Isis::Metric::MetricList


class Native::Interface::Fastethernet::Isis::Password : public Entity
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

        YLeaf password; //type: string
        class PasswordList; //type: Native::Interface::Fastethernet::Isis::Password::PasswordList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Isis::Password::PasswordList> > password_list;
        
}; // Native::Interface::Fastethernet::Isis::Password


class Native::Interface::Fastethernet::Isis::Password::PasswordList : public Entity
{
    public:
        PasswordList();
        ~PasswordList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf password; //type: string
        class LevelsEnum;

}; // Native::Interface::Fastethernet::Isis::Password::PasswordList

class Native::Interface::EmbeddedServiceEngine::Ipv6::TrafficFilter::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::EmbeddedServiceEngine::Interface_Qos::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;

};

class Native::Interface::EmbeddedServiceEngine::Standby::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf autoconfig;

};

class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::EmbeddedServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::EmbeddedServiceEngine::AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::EmbeddedServiceEngine::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;
        static const Enum::YLeaf cts;
        static const Enum::YLeaf ip_camera;
        static const Enum::YLeaf media_player;

};

class Native::Interface::Fastethernet::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Fastethernet::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Fastethernet::ChannelProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf pagp;

};

class Native::Interface::Fastethernet::DuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf full;
        static const Enum::YLeaf half;

};

class Native::Interface::Fastethernet::Switchport::Access::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};

class Native::Interface::Fastethernet::Switchport::Mode::DynamicEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf desirable;

};

class Native::Interface::Fastethernet::Switchport::PortSecurity::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Fastethernet::Switchport::PortSecurity::Aging::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf inactivity;

};

class Native::Interface::Fastethernet::Switchport::Trunk::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf isl;
        static const Enum::YLeaf negotiate;

};

class Native::Interface::Fastethernet::Switchport::Trunk::Native_::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf tag;

};

class Native::Interface::Fastethernet::Switchport::Voice::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1p;
        static const Enum::YLeaf none;
        static const Enum::YLeaf untagged;

};

class Native::Interface::Fastethernet::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Fastethernet::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Fastethernet::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Fastethernet::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Fastethernet::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Fastethernet::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Fastethernet::Isis::MeshGroupEnum : public Enum
{
    public:
        static const Enum::YLeaf blocked;

};

class Native::Interface::Fastethernet::Isis::NetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf point_to_point;

};

class Native::Interface::Fastethernet::Isis::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Fastethernet::Isis::CircuitType::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2_only;

};

class Native::Interface::Fastethernet::Isis::CsnpInterval::CsnpIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Fastethernet::Isis::HelloInterval::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Fastethernet::Isis::HelloInterval::HelloIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Fastethernet::Isis::HelloInterval::HelloIntervalList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Fastethernet::Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Fastethernet::Isis::Ipv6::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Fastethernet::Isis::Ipv6::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Fastethernet::Isis::Ipv6::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Fastethernet::Isis::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Fastethernet::Isis::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Fastethernet::Isis::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Fastethernet::Isis::Password::PasswordList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_22_ */

