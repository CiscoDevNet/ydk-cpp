#ifndef _CISCO_IOS_XE_NATIVE_68_
#define _CISCO_IOS_XE_NATIVE_68_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_66.hpp"
#include "Cisco_IOS_XE_native_67.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High : public Entity
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

}; // Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High


class Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod : public Entity
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
        class Threshold; //type: Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold> threshold;
        
}; // Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod


class Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold : public Entity
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
        class High; //type: Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High> high;
        
}; // Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold


class Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High : public Entity
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

}; // Native::Interface::Virtualportgroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High


class Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure : public Entity
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

        class CriticalEvent; //type: Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::CriticalEvent
        class DyingGasp; //type: Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::DyingGasp
        class LinkFault; //type: Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::LinkFault

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::CriticalEvent> critical_event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::DyingGasp> dying_gasp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::LinkFault> link_fault;
        
}; // Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure


class Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::CriticalEvent : public Entity
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

        class Action; //type: Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::CriticalEvent::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::CriticalEvent::Action> action;
        
}; // Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::CriticalEvent


class Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::CriticalEvent::Action : public Entity
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

}; // Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::CriticalEvent::Action


class Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::DyingGasp : public Entity
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

        class Action; //type: Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::DyingGasp::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::DyingGasp::Action> action; // presence node
        
}; // Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::DyingGasp


class Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::DyingGasp::Action : public Entity
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

}; // Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::DyingGasp::Action


class Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::LinkFault : public Entity
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

        class Action; //type: Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::LinkFault::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::LinkFault::Action> action; // presence node
        
}; // Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::LinkFault


class Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::LinkFault::Action : public Entity
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

}; // Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteFailure::LinkFault::Action


class Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteLoopback : public Entity
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

}; // Native::Interface::Virtualportgroup::Ethernet::Oam::RemoteLoopback


class Native::Interface::Virtualportgroup::Negotiation : public Entity
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

}; // Native::Interface::Virtualportgroup::Negotiation


class Native::Interface::Virtualportgroup::Synchronous : public Entity
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

}; // Native::Interface::Virtualportgroup::Synchronous


class Native::Interface::Virtualportgroup::Speed : public Entity
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

}; // Native::Interface::Virtualportgroup::Speed


class Native::Interface::Virtualportgroup::Plim : public Entity
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

        class Ethernet; //type: Native::Interface::Virtualportgroup::Plim::Ethernet
        class Qos; //type: Native::Interface::Virtualportgroup::Plim::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Qos> qos;
        
}; // Native::Interface::Virtualportgroup::Plim


class Native::Interface::Virtualportgroup::Plim::Ethernet : public Entity
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

        class Vlan; //type: Native::Interface::Virtualportgroup::Plim::Ethernet::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Ethernet::Vlan> vlan;
        
}; // Native::Interface::Virtualportgroup::Plim::Ethernet


class Native::Interface::Virtualportgroup::Plim::Ethernet::Vlan : public Entity
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

        class Filter; //type: Native::Interface::Virtualportgroup::Plim::Ethernet::Vlan::Filter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Ethernet::Vlan::Filter> filter;
        
}; // Native::Interface::Virtualportgroup::Plim::Ethernet::Vlan


class Native::Interface::Virtualportgroup::Plim::Ethernet::Vlan::Filter : public Entity
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

}; // Native::Interface::Virtualportgroup::Plim::Ethernet::Vlan::Filter


class Native::Interface::Virtualportgroup::Plim::Qos : public Entity
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

        class Input; //type: Native::Interface::Virtualportgroup::Plim::Qos::Input

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Qos::Input> input;
        
}; // Native::Interface::Virtualportgroup::Plim::Qos


class Native::Interface::Virtualportgroup::Plim::Qos::Input : public Entity
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

        class Queue; //type: Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue> queue;
        
}; // Native::Interface::Virtualportgroup::Plim::Qos::Input


class Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue : public Entity
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

        class Zero; //type: Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::Zero
        class StrictPriority; //type: Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::StrictPriority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::StrictPriority> strict_priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::Zero> zero;
        
}; // Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue


class Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::Zero : public Entity
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

        class Pause; //type: Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::Zero::Pause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::Zero::Pause> pause;
        
}; // Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::Zero


class Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::Zero::Pause : public Entity
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

}; // Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::Zero::Pause


class Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::StrictPriority : public Entity
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

        class Pause; //type: Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::StrictPriority::Pause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::StrictPriority::Pause> pause;
        
}; // Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::StrictPriority


class Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::StrictPriority::Pause : public Entity
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

}; // Native::Interface::Virtualportgroup::Plim::Qos::Input::Queue::StrictPriority::Pause


class Native::Interface::Virtualportgroup::Pppoe : public Entity
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
        class Enable; //type: Native::Interface::Virtualportgroup::Pppoe::Enable

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Pppoe::Enable> enable; // presence node
        
}; // Native::Interface::Virtualportgroup::Pppoe


class Native::Interface::Virtualportgroup::Pppoe::Enable : public Entity
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

}; // Native::Interface::Virtualportgroup::Pppoe::Enable


class Native::Interface::Virtualportgroup::Service : public Entity
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

        class Instance; //type: Native::Interface::Virtualportgroup::Service::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance> > instance;
        
}; // Native::Interface::Virtualportgroup::Service


class Native::Interface::Virtualportgroup::Service::Instance : public Entity
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
        class Encapsulation; //type: Native::Interface::Virtualportgroup::Service::Instance::Encapsulation
        class Ip; //type: Native::Interface::Virtualportgroup::Service::Instance::Ip
        class Ipv6; //type: Native::Interface::Virtualportgroup::Service::Instance::Ipv6
        class Rewrite; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite
        class Errdisable; //type: Native::Interface::Virtualportgroup::Service::Instance::Errdisable
        class EthernetContainer; //type: Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer
        class Snmp; //type: Native::Interface::Virtualportgroup::Service::Instance::Snmp
        class BridgeDomain; //type: Native::Interface::Virtualportgroup::Service::Instance::BridgeDomain
        class Mac; //type: Native::Interface::Virtualportgroup::Service::Instance::Mac
        class ServicePolicy; //type: Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy
        class Cfm; //type: Native::Interface::Virtualportgroup::Service::Instance::Cfm
        class L2Protocol; //type: Native::Interface::Virtualportgroup::Service::Instance::L2Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::BridgeDomain> bridge_domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Cfm> cfm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Errdisable> errdisable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer> ethernet_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::L2Protocol> l2protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite> rewrite;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Snmp> snmp;
        
}; // Native::Interface::Virtualportgroup::Service::Instance


class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation : public Entity
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
        class Dot1Ad; //type: Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad
        class Dot1Q; //type: Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q
        class PriorityTagged; //type: Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::PriorityTagged
        class Untagged; //type: Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Untagged

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad> dot1ad;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::PriorityTagged> priority_tagged;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Untagged> untagged; // presence node
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Encapsulation


class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad : public Entity
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
        class Cos2; //type: Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad::Cos2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad::Cos2> cos2;
                class IdEnum;
        class Dot1QEnum;
        class EtypeEnum;

}; // Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad


class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad::Cos2 : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad::Cos2


class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q : public Entity
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
        class Cos2; //type: Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q::Cos2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q::Cos2> cos2;
                class IdEnum;
        class SecondDot1QEnum;
        class EtypeEnum;
        class VlanTypeEnum;

}; // Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q


class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q::Cos2 : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q::Cos2


class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::PriorityTagged : public Entity
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
        class CosContainer; //type: Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::PriorityTagged::CosContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::PriorityTagged::CosContainer> cos_container;
                class EtypeEnum;

}; // Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::PriorityTagged


class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::PriorityTagged::CosContainer : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::PriorityTagged::CosContainer


class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Untagged : public Entity
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


}; // Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Untagged


class Native::Interface::Virtualportgroup::Service::Instance::Ip : public Entity
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

        class Acl; //type: Native::Interface::Virtualportgroup::Service::Instance::Ip::Acl
        class Dhcp; //type: Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp
        class Verify; //type: Native::Interface::Virtualportgroup::Service::Instance::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Ip::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Ip::Verify> verify;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Ip


class Native::Interface::Virtualportgroup::Service::Instance::Ip::Acl : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Ip::Acl


class Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp : public Entity
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

        class Relay; //type: Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay> relay;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp


class Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay : public Entity
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

        class Information; //type: Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay


class Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay::Information : public Entity
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

        class Option; //type: Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay::Information


class Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay::Information::Option : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Ip::Dhcp::Relay::Information::Option


class Native::Interface::Virtualportgroup::Service::Instance::Ip::Verify : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Ip::Verify


class Native::Interface::Virtualportgroup::Service::Instance::Ipv6 : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Ipv6


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite : public Entity
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

        class Ingress; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress> ingress;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress : public Entity
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

        class Tag; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag> tag;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag : public Entity
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

        class Pop; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Pop
        class Push; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Push
        class Translate; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Pop> pop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Push> push;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate> translate;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Pop : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Pop


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Push : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Push


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate : public Entity
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

        class T1To1; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1
        class T1To2; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2
        class T2To1; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1
        class T2To2; //type: Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1> t1_to_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2> t1_to_2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1> t2_to_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2> t2_to_2;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1 : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2 : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1 : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1


class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2 : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2


class Native::Interface::Virtualportgroup::Service::Instance::Errdisable : public Entity
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

        class Recovery; //type: Native::Interface::Virtualportgroup::Service::Instance::Errdisable::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Errdisable::Recovery> recovery;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Errdisable


class Native::Interface::Virtualportgroup::Service::Instance::Errdisable::Recovery : public Entity
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

        class Cause; //type: Native::Interface::Virtualportgroup::Service::Instance::Errdisable::Recovery::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Errdisable::Recovery::Cause> cause;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Errdisable::Recovery


class Native::Interface::Virtualportgroup::Service::Instance::Errdisable::Recovery::Cause : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Errdisable::Recovery::Cause


class Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer : public Entity
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

        class Ethernet; //type: Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet> ethernet;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer


class Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet : public Entity
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

        class Lmi; //type: Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi
        class Loopback; //type: Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Loopback

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi> lmi;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Loopback> loopback;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet


class Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi : public Entity
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

        class CeVlan; //type: Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan> ce_vlan;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi


class Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan : public Entity
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

        class Map; //type: Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map> map;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan


class Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map : public Entity
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
        class VlanRange; //type: Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange> vlan_range;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map


class Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange


class Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Loopback : public Entity
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

        class Permit; //type: Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit> permit;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Loopback


class Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit


class Native::Interface::Virtualportgroup::Service::Instance::Snmp : public Entity
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

        class Trap; //type: Native::Interface::Virtualportgroup::Service::Instance::Snmp::Trap
        class Ifindex; //type: Native::Interface::Virtualportgroup::Service::Instance::Snmp::Ifindex

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Snmp::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Snmp::Trap> trap;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Snmp


class Native::Interface::Virtualportgroup::Service::Instance::Snmp::Trap : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Snmp::Trap


class Native::Interface::Virtualportgroup::Service::Instance::Snmp::Ifindex : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::Snmp::Ifindex


class Native::Interface::Virtualportgroup::Service::Instance::BridgeDomain : public Entity
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
        class SplitHorizon; //type: Native::Interface::Virtualportgroup::Service::Instance::BridgeDomain::SplitHorizon

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::BridgeDomain::SplitHorizon> split_horizon;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::BridgeDomain


class Native::Interface::Virtualportgroup::Service::Instance::BridgeDomain::SplitHorizon : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::BridgeDomain::SplitHorizon


class Native::Interface::Virtualportgroup::Service::Instance::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Security; //type: Native::Interface::Virtualportgroup::Service::Instance::Mac::Security

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Mac::Security> security; // presence node
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Mac


class Native::Interface::Virtualportgroup::Service::Instance::Mac::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf violation; //type: ViolationEnum
        class Maximum; //type: Native::Interface::Virtualportgroup::Service::Instance::Mac::Security::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Mac::Security::Maximum> maximum;
                class ViolationEnum;

}; // Native::Interface::Virtualportgroup::Service::Instance::Mac::Security


class Native::Interface::Virtualportgroup::Service::Instance::Mac::Security::Maximum : public Entity
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

        YLeaf addresses; //type: uint16

}; // Native::Interface::Virtualportgroup::Service::Instance::Mac::Security::Maximum


class Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy : public Entity
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

        class Input; //type: Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy::Input
        class Output; //type: Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy::Output

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy::Input> > input;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy::Output> > output;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy


class Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy::Input : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy::Input


class Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy::Output : public Entity
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

}; // Native::Interface::Virtualportgroup::Service::Instance::ServicePolicy::Output


class Native::Interface::Virtualportgroup::Service::Instance::Cfm : public Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Encapsulation; //type: Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation
        class Mep; //type: Native::Interface::Virtualportgroup::Service::Instance::Cfm::Mep
        class Mip; //type: Native::Interface::Virtualportgroup::Service::Instance::Cfm::Mip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Cfm::Mep> mep;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Cfm::Mip> mip;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Cfm


class Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation : public Entity
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

        class Dot1Ad; //type: Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation::Dot1Ad
        class Dot1Q; //type: Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation::Dot1Q

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation::Dot1Ad> dot1ad;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation::Dot1Q> dot1q;
        
}; // Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation


class Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation::Dot1Ad : public Entity
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

        YLeaf vlan_id; //type: uint16
        YLeaf cos; //type: uint8
        YLeaf dot1q; //type: uint16

}; // Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation::Dot1Ad


class Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation::Dot1Q : public Entity
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
        YLeaf cos; //type: uint8
        YLeaf second_dot1q; //type: uint16

}; // Native::Interface::Virtualportgroup::Service::Instance::Cfm::Encapsulation::Dot1Q


class Native::Interface::Virtualportgroup::Service::Instance::Cfm::Mep : public Entity
{
    public:
        Mep();
        ~Mep();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: string
        YLeaf mpid; //type: uint16

}; // Native::Interface::Virtualportgroup::Service::Instance::Cfm::Mep


class Native::Interface::Virtualportgroup::Service::Instance::Cfm::Mip : public Entity
{
    public:
        Mip();
        ~Mip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8

}; // Native::Interface::Virtualportgroup::Service::Instance::Cfm::Mip


class Native::Interface::Virtualportgroup::Service::Instance::L2Protocol : public Entity
{
    public:
        L2Protocol();
        ~L2Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Peer
        class Forward; //type: Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Forward
        class Tunnel; //type: Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Forward> forward; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Peer> peer; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Tunnel> tunnel; // presence node
        
}; // Native::Interface::Virtualportgroup::Service::Instance::L2Protocol


class Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Peer : public Entity
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

        YLeafList protocol; //type: list of  ProtocolEnum
        class ProtocolEnum;

}; // Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Peer


class Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Forward : public Entity
{
    public:
        Forward();
        ~Forward();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList protocol; //type: list of  ProtocolEnum
        class ProtocolEnum;

}; // Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Forward


class Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList protocol; //type: list of  ProtocolEnum
        class ProtocolEnum;

}; // Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Tunnel


class Native::Interface::Virtualportgroup::Cts : public Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Manual; //type: Native::Interface::Virtualportgroup::Cts::Manual

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual> manual; // presence node
        
}; // Native::Interface::Virtualportgroup::Cts


class Native::Interface::Virtualportgroup::Cts::Manual : public Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Policy; //type: Native::Interface::Virtualportgroup::Cts::Manual::Policy
        class Sap; //type: Native::Interface::Virtualportgroup::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::Virtualportgroup::Cts::Manual::Propagate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Propagate> propagate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Sap> sap;
        
}; // Native::Interface::Virtualportgroup::Cts::Manual


class Native::Interface::Virtualportgroup::Cts::Manual::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Static_; //type: Native::Interface::Virtualportgroup::Cts::Manual::Policy::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Policy::Static_> static_;
        
}; // Native::Interface::Virtualportgroup::Cts::Manual::Policy


class Native::Interface::Virtualportgroup::Cts::Manual::Policy::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: uint16
        YLeaf trusted; //type: empty

}; // Native::Interface::Virtualportgroup::Cts::Manual::Policy::Static_


class Native::Interface::Virtualportgroup::Cts::Manual::Sap : public Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pmk; //type: Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk> > pmk;
        
}; // Native::Interface::Virtualportgroup::Cts::Manual::Sap


class Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk : public Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        class ModeList; //type: Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk


class Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList : public Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GcmEncrypt; //type: Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gmac; //type: Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf null; //type: empty

}; // Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gmac; //type: Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::Virtualportgroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::Virtualportgroup::Cts::Manual::Propagate : public Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: boolean

}; // Native::Interface::Virtualportgroup::Cts::Manual::Propagate


class Native::Interface::Virtualportgroup::ServicePolicy : public Entity
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
        class Type; //type: Native::Interface::Virtualportgroup::ServicePolicy::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ServicePolicy::Type> type;
        
}; // Native::Interface::Virtualportgroup::ServicePolicy


class Native::Interface::Virtualportgroup::ServicePolicy::Type : public Entity
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

        class Control; //type: Native::Interface::Virtualportgroup::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::Virtualportgroup::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ServicePolicy::Type::Control> control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::Virtualportgroup::ServicePolicy::Type


class Native::Interface::Virtualportgroup::ServicePolicy::Type::Control : public Entity
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

}; // Native::Interface::Virtualportgroup::ServicePolicy::Type::Control


class Native::Interface::Virtualportgroup::ServicePolicy::Type::PerformanceMonitor : public Entity
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

}; // Native::Interface::Virtualportgroup::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain : public Entity
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

        class Input; //type: Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain


class Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain::Input : public Entity
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

}; // Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain::Output : public Entity
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

}; // Native::Interface::Virtualportgroup::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::Virtualportgroup::Snmp : public Entity
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

        class Ifindex; //type: Native::Interface::Virtualportgroup::Snmp::Ifindex
        class Trap; //type: Native::Interface::Virtualportgroup::Snmp::Trap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Snmp::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Snmp::Trap> trap;
        
}; // Native::Interface::Virtualportgroup::Snmp


class Native::Interface::Virtualportgroup::Snmp::Ifindex : public Entity
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
        YLeaf clear; //type: boolean

}; // Native::Interface::Virtualportgroup::Snmp::Ifindex


class Native::Interface::Virtualportgroup::Snmp::Trap : public Entity
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

        YLeaf link_status; //type: boolean
        class LinkStatusCapas; //type: Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas> link_status_capas;
        
}; // Native::Interface::Virtualportgroup::Snmp::Trap


class Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas : public Entity
{
    public:
        LinkStatusCapas();
        ~LinkStatusCapas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkStatus; //type: Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas::LinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas::LinkStatus> link_status;
        
}; // Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas


class Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas::LinkStatus : public Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Permit; //type: Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit> permit;
        
}; // Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas::LinkStatus


class Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit : public Entity
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

        YLeaf duplicates; //type: empty

}; // Native::Interface::Virtualportgroup::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit


class Native::Interface::Virtualportgroup::Mab : public Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eap; //type: empty

}; // Native::Interface::Virtualportgroup::Mab


class Native::Interface::Vasileft : public Entity
{
    public:
        Vasileft();
        ~Vasileft();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        class SwitchportConf; //type: Native::Interface::Vasileft::SwitchportConf
        class Switchport; //type: Native::Interface::Vasileft::Switchport
        class Arp; //type: Native::Interface::Vasileft::Arp
        class Backup; //type: Native::Interface::Vasileft::Backup
        class Cemoudp; //type: Native::Interface::Vasileft::Cemoudp
        class CwsTunnel; //type: Native::Interface::Vasileft::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Vasileft::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Vasileft::Encapsulation
        class FairQueueConf; //type: Native::Interface::Vasileft::FairQueueConf
        class FairQueue; //type: Native::Interface::Vasileft::FairQueue
        class Flowcontrol; //type: Native::Interface::Vasileft::Flowcontrol
        class Isis; //type: Native::Interface::Vasileft::Isis
        class KeepaliveSettings; //type: Native::Interface::Vasileft::KeepaliveSettings
        class Bfd; //type: Native::Interface::Vasileft::Bfd
        class Bandwidth; //type: Native::Interface::Vasileft::Bandwidth
        class Dampening; //type: Native::Interface::Vasileft::Dampening
        class Domain; //type: Native::Interface::Vasileft::Domain
        class HoldQueue; //type: Native::Interface::Vasileft::HoldQueue
        class Mpls; //type: Native::Interface::Vasileft::Mpls
        class IpVrf; //type: Native::Interface::Vasileft::IpVrf
        class Vrf; //type: Native::Interface::Vasileft::Vrf
        class Ip; //type: Native::Interface::Vasileft::Ip
        class Ipv6; //type: Native::Interface::Vasileft::Ipv6
        class Logging; //type: Native::Interface::Vasileft::Logging
        class Mdix; //type: Native::Interface::Vasileft::Mdix
        class Mop; //type: Native::Interface::Vasileft::Mop
        class Interface_Qos; //type: Native::Interface::Vasileft::Interface_Qos
        class Standby; //type: Native::Interface::Vasileft::Standby
        class AccessSession; //type: Native::Interface::Vasileft::AccessSession
        class StormControl; //type: Native::Interface::Vasileft::StormControl
        class Trust; //type: Native::Interface::Vasileft::Trust
        class Utd; //type: Native::Interface::Vasileft::Utd
        class PriorityQueue; //type: Native::Interface::Vasileft::PriorityQueue
        class RcvQueue; //type: Native::Interface::Vasileft::RcvQueue
        class Peer; //type: Native::Interface::Vasileft::Peer
        class PmPath; //type: Native::Interface::Vasileft::PmPath
        class ServicePolicy; //type: Native::Interface::Vasileft::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Vrf> vrf;
                class IfStateEnum;
        class ServiceInsertionEnum;

}; // Native::Interface::Vasileft


class Native::Interface::Vasileft::SwitchportConf : public Entity
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

}; // Native::Interface::Vasileft::SwitchportConf


class Native::Interface::Vasileft::Switchport : public Entity
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


}; // Native::Interface::Vasileft::Switchport


class Native::Interface::Vasileft::Arp : public Entity
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

}; // Native::Interface::Vasileft::Arp


class Native::Interface::Vasileft::Backup : public Entity
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

        class Delay; //type: Native::Interface::Vasileft::Backup::Delay
        class Interface_; //type: Native::Interface::Vasileft::Backup::Interface_
        class Load; //type: Native::Interface::Vasileft::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Backup::Load> load;
        
}; // Native::Interface::Vasileft::Backup


class Native::Interface::Vasileft::Backup::Delay : public Entity
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

}; // Native::Interface::Vasileft::Backup::Delay


class Native::Interface::Vasileft::Backup::Interface_ : public Entity
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
        class AtmSubinterface; //type: Native::Interface::Vasileft::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Vasileft::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Vasileft::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Vasileft::Backup::Interface_


class Native::Interface::Vasileft::Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::Vasileft::Backup::Interface_::AtmSubinterface


class Native::Interface::Vasileft::Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::Vasileft::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Vasileft::Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::Vasileft::Backup::Interface_::LispSubinterface


class Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Vasileft::Backup::Load : public Entity
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

}; // Native::Interface::Vasileft::Backup::Load


class Native::Interface::Vasileft::Cemoudp : public Entity
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

        class Reserve; //type: Native::Interface::Vasileft::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Vasileft::Cemoudp


class Native::Interface::Vasileft::Cemoudp::Reserve : public Entity
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

}; // Native::Interface::Vasileft::Cemoudp::Reserve


class Native::Interface::Vasileft::CwsTunnel : public Entity
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
        class Out; //type: Native::Interface::Vasileft::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::CwsTunnel::Out> out;
        
}; // Native::Interface::Vasileft::CwsTunnel


class Native::Interface::Vasileft::CwsTunnel::Out : public Entity
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

}; // Native::Interface::Vasileft::CwsTunnel::Out


class Native::Interface::Vasileft::L2ProtocolTunnel : public Entity
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
        class DropThreshold; //type: Native::Interface::Vasileft::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Vasileft::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Vasileft::L2ProtocolTunnel


class Native::Interface::Vasileft::L2ProtocolTunnel::DropThreshold : public Entity
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

}; // Native::Interface::Vasileft::L2ProtocolTunnel::DropThreshold


class Native::Interface::Vasileft::L2ProtocolTunnel::ShutdownThreshold : public Entity
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

}; // Native::Interface::Vasileft::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Vasileft::Encapsulation : public Entity
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

        class Dot1Q; //type: Native::Interface::Vasileft::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Vasileft::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Vasileft::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Vasileft::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Vasileft::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Vasileft::Encapsulation


class Native::Interface::Vasileft::Encapsulation::Dot1Q : public Entity
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

}; // Native::Interface::Vasileft::Encapsulation::Dot1Q


class Native::Interface::Vasileft::Encapsulation::Isl : public Entity
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

}; // Native::Interface::Vasileft::Encapsulation::Isl


class Native::Interface::Vasileft::Encapsulation::Ppp : public Entity
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


}; // Native::Interface::Vasileft::Encapsulation::Ppp


class Native::Interface::Vasileft::Encapsulation::Slip : public Entity
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


}; // Native::Interface::Vasileft::Encapsulation::Slip


class Native::Interface::Vasileft::Encapsulation::FrameRelay : public Entity
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

}; // Native::Interface::Vasileft::Encapsulation::FrameRelay


class Native::Interface::Vasileft::FairQueueConf : public Entity
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

}; // Native::Interface::Vasileft::FairQueueConf


class Native::Interface::Vasileft::FairQueue : public Entity
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

}; // Native::Interface::Vasileft::FairQueue


class Native::Interface::Vasileft::Flowcontrol : public Entity
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

}; // Native::Interface::Vasileft::Flowcontrol


class Native::Interface::Vasileft::Isis : public Entity
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


}; // Native::Interface::Vasileft::Isis


class Native::Interface::Vasileft::KeepaliveSettings : public Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Keepalive; //type: Native::Interface::Vasileft::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Vasileft::KeepaliveSettings


class Native::Interface::Vasileft::KeepaliveSettings::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf period; //type: uint16
        YLeaf retries; //type: uint8

}; // Native::Interface::Vasileft::KeepaliveSettings::Keepalive


class Native::Interface::Vasileft::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Vasileft::Bfd


class Native::Interface::Vasileft::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_reference; //type: uint32
        YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Vasileft::Bandwidth::Receive
        class Inherit; //type: Native::Interface::Vasileft::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Bandwidth::Receive> receive;
        
}; // Native::Interface::Vasileft::Bandwidth


class Native::Interface::Vasileft::Bandwidth::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inherit; //type: empty
        YLeaf kilobits; //type: uint32

}; // Native::Interface::Vasileft::Bandwidth::Receive


class Native::Interface::Vasileft::Bandwidth::Inherit : public Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kilobits; //type: uint32

}; // Native::Interface::Vasileft::Bandwidth::Inherit


class Native::Interface::Vasileft::Dampening : public Entity
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

        YLeaf dampening_time; //type: uint16
        YLeaf start_reusing_time; //type: uint16
        YLeaf start_supressing_time; //type: uint16
        YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::Vasileft::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft::Dampening::Restart> restart;
        
}; // Native::Interface::Vasileft::Dampening

class Native::Interface::Virtualportgroup::Pppoe::Enable::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf global;

};

class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad::Dot1QEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pppoe_all;
        static const Enum::YLeaf pppoe_discovery;
        static const Enum::YLeaf pppoe_session;

};

class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q::SecondDot1QEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q::EtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pppoe_all;
        static const Enum::YLeaf pppoe_discovery;
        static const Enum::YLeaf pppoe_session;

};

class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::Dot1Q::VlanTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0x88A8;
        static const Enum::YLeaf Y_0x9100;
        static const Enum::YLeaf Y_0x9200;

};

class Native::Interface::Virtualportgroup::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pppoe_all;
        static const Enum::YLeaf pppoe_discovery;
        static const Enum::YLeaf pppoe_session;

};

class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Pop::WayEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Pop::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Push::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Virtualportgroup::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Virtualportgroup::Service::Instance::Mac::Security::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf restrict;

};

class Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Peer::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf R4;
        static const Enum::YLeaf R5;
        static const Enum::YLeaf R6;
        static const Enum::YLeaf R8;
        static const Enum::YLeaf R9;
        static const Enum::YLeaf RA;
        static const Enum::YLeaf RB;
        static const Enum::YLeaf RC;
        static const Enum::YLeaf RD;
        static const Enum::YLeaf RF;
        static const Enum::YLeaf cdp;
        static const Enum::YLeaf dtp;
        static const Enum::YLeaf elmi;
        static const Enum::YLeaf esmc;
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf lldp;
        static const Enum::YLeaf loam;
        static const Enum::YLeaf pagp;
        static const Enum::YLeaf ptppd;
        static const Enum::YLeaf stp;
        static const Enum::YLeaf udld;
        static const Enum::YLeaf vtp;

};

class Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Forward::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf R4;
        static const Enum::YLeaf R5;
        static const Enum::YLeaf R6;
        static const Enum::YLeaf R8;
        static const Enum::YLeaf R9;
        static const Enum::YLeaf RA;
        static const Enum::YLeaf RB;
        static const Enum::YLeaf RC;
        static const Enum::YLeaf RD;
        static const Enum::YLeaf RF;
        static const Enum::YLeaf cdp;
        static const Enum::YLeaf dtp;
        static const Enum::YLeaf elmi;
        static const Enum::YLeaf esmc;
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf lldp;
        static const Enum::YLeaf loam;
        static const Enum::YLeaf pagp;
        static const Enum::YLeaf ptppd;
        static const Enum::YLeaf stp;
        static const Enum::YLeaf udld;
        static const Enum::YLeaf vtp;

};

class Native::Interface::Virtualportgroup::Service::Instance::L2Protocol::Tunnel::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf R4;
        static const Enum::YLeaf R5;
        static const Enum::YLeaf R6;
        static const Enum::YLeaf R8;
        static const Enum::YLeaf R9;
        static const Enum::YLeaf RA;
        static const Enum::YLeaf RB;
        static const Enum::YLeaf RC;
        static const Enum::YLeaf RD;
        static const Enum::YLeaf RF;
        static const Enum::YLeaf cdp;
        static const Enum::YLeaf dtp;
        static const Enum::YLeaf elmi;
        static const Enum::YLeaf esmc;
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf lldp;
        static const Enum::YLeaf loam;
        static const Enum::YLeaf pagp;
        static const Enum::YLeaf ptppd;
        static const Enum::YLeaf stp;
        static const Enum::YLeaf udld;
        static const Enum::YLeaf vtp;

};

class Native::Interface::Virtualportgroup::ServicePolicy::Type::PerformanceMonitor::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Vasileft::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Vasileft::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Vasileft::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Vasileft::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Vasileft::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Vasileft::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Vasileft::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Vasileft::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_68_ */

